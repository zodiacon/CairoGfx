// View.cpp : implementation of the CView class
//
/////////////////////////////////////////////////////////////////////////////

#include "pch.h"
#include "resource.h"
#include "View.h"
#include <cmath>
#include <Pdh.h>

#pragma comment(lib, "pdh")

BOOL CView::PreTranslateMessage(MSG* pMsg) {
	pMsg;
	return FALSE;
}

void CView::RunTest(int index) {
	m_Test = index;
	m_Index = 0;
	m_Angle = 0;
	SetTimer(1, 16);
	Invalidate();
}

void CView::Test1(CairoCtx& ctx) {
	ctx.Translate(500, 500);
	for (int i = 0; i < 20; i++) {
		ctx.Rotate(Rad(360 / 20));
		ctx.Rectangle(0, 0, 300, 300).LineWidth(3).SourceColor(StandardColors::Blue);
	}
	ctx.Stroke();
}

void CView::Test2(CairoCtx& ctx) {
	ctx.Clear(StandardColors::White);
	ctx.Translate(500, 500);
	ctx.Rotate(m_Angle);
	int rects = 30;
	for (int i = 0; i < rects; i++) {
		ctx.Rotate(Rad(360 / rects));
		ctx.Rectangle(0, 0, 300, 300).LineWidth(2).SourceColor(StandardColors::DarkBlue);
	}
	ctx.Stroke();
}

void CView::Test3(CairoCtx& ctx) {
	ctx.Clear(StandardColors::White);
	CairoColor colors[] = {
		StandardColors::OrangeRed,
		StandardColors::Brown,
		StandardColors::Green,
		StandardColors::LightBlue,
	};
	double startAngle = m_Angle;
	ctx.FontSize(25);
	char text[] = "asdfghjklzxcvb";
	CFont font;
	font.CreatePointFont(100, L"HamburgSymbols");
	CairoFont cfont(font);
	ctx.FontFace(cfont);

	for (int i = 0; i < 12; i++) {
		auto angle = startAngle + 30 * i;
		ctx.Arc(500, 500, 400, Rad(angle), Rad(angle + 30)).
			Arc(500, 500, 350, Rad(angle + 30), Rad(angle), true).
			ClosePath().
			SourceColor(colors[i % 4]).Fill(true).
			SourceColor(StandardColors::Black).LineWidth(2).Stroke(true);
		auto extents = ctx.FillExtents();
		angle += 15;
		double x = 500 + 375 * std::cos(Rad(angle));
		double y = 500 + 375 * std::sin(Rad(angle));
		char sign[] = "a";
		sign[0] = text[i];
		auto ext = ctx.TextExtents(sign);
		ctx.MoveTo(x - ext.width / 2, y + ext.width / 2).ShowText(sign);
		ctx.NewPath();
	}
}

void CView::Test4(CairoCtx& ctx) {
	static PDH_HQUERY hQuery;
	static PDH_HCOUNTER hCounter, hCounter2;
	static double data[600], kdata[600];
	if (hQuery == nullptr) {
		::PdhOpenQuery(nullptr, 0, &hQuery);
		ATLASSERT(hQuery);
		::PdhAddEnglishCounter(hQuery, L"\\Processor Information(_Total)\\% Processor Time", 0, &hCounter);
		ATLASSERT(hCounter);
		::PdhAddEnglishCounter(hQuery, L"\\Processor Information(_Total)\\% Privileged Time", 0, &hCounter2);
		ATLASSERT(hCounter2);
	}
	auto count = m_Index;
		SetTimer(1, 350);

	::PdhCollectQueryData(hQuery);
	DWORD type;
	PDH_FMT_COUNTERVALUE value, value2;
	::PdhGetFormattedCounterValue(hCounter, PDH_FMT_DOUBLE, &type, &value);
	data[count] = value.doubleValue;
	::PdhGetFormattedCounterValue(hCounter2, PDH_FMT_DOUBLE, &type, &value2);
	kdata[count++] = value2.doubleValue;

	double b = 600;
	for (int i = 0; i < count; i++) {
		ctx.Rectangle(i * 2 + 10, b - data[i] * 5, 2, data[i] * 5);
	}
	ctx.SourceColor(StandardColors::Blue).Fill();
	for (int i = 0; i < count; i++) {
		ctx.Rectangle(i * 2 + 10, b - kdata[i] * 5, 2, kdata[i] * 5);
	}
	ctx.SourceColor(1, 0, 0, .5).Fill();
	//ctx.LineWidth(1).SourceColor(1, 1, 0).Stroke();

	CStringA text;
	text.Format("CPU: %.2lf%% Kernel: %.2lf%%", value.doubleValue, value2.doubleValue);
	ctx.MoveTo(20, b + 50).SourceColor(StandardColors::White).FontSize(30).ShowText(text);

	if (count == _countof(data))
		count = 0;
	m_Index = count;
}

void CView::Test5(CairoCtx& ctx) {
	auto surface = CairoSurface::CreateWithDib(CairoFormat::RGB24, 300, 300);
	auto status = surface.Status();
	ATLASSERT(status == CairoStatus::Success);

	{
		CairoCtx ctx2(surface);
		ctx2.Clear(StandardColors::Yellow);
		ctx2.MoveTo(50, 120).FontSize(20).SourceColor(StandardColors::Blue);
		ctx2.Rotate(Rad(45));
		ctx2.ShowText("Hello, pattern!");
		//surface.WriteToPng("c:\\temp\\test.png");
	}
	ctx.Clear(StandardColors::LightGray).Scale(2, 2);
	ctx.Source(surface, 100, 100);
	ctx.Paint();
}

LRESULT CView::OnCreate(UINT, WPARAM, LPARAM, BOOL&) {
	auto res = ::FindResource(nullptr, MAKEINTRESOURCE(IDR_HAMBURG), L"TTF");
	ATLASSERT(res);
	auto hGlobal = ::LoadResource(nullptr, res);
	ATLASSERT(hGlobal);
	auto size = ::SizeofResource(nullptr, res);
	auto p = ::LockResource(hGlobal);
	DWORD count;
	auto handle = ::AddFontMemResourceEx(p, size, nullptr, &count);
	ATLASSERT(handle);

	return 0;
}

LRESULT CView::OnTimer(UINT /*uMsg*/, WPARAM id, LPARAM /*lParam*/, BOOL& /*bHandled*/) {
	if (id == 1) {
		switch (m_Test) {
			case 1:
				m_Angle += Rad(1);
				Invalidate(FALSE);
				UpdateWindow();
				break;

			case 2:
			case 3:
				m_Angle += .3;
				Invalidate(FALSE);
				UpdateWindow();
				break;

		}
	}
	return 0;
}

void CView::DoPaint(HDC hdc) {
	CairoSurface surface(hdc);
	CairoCtx cairo(surface);
	switch (m_Test) {
		case 0: Test1(cairo); break;
		case 1: Test2(cairo); break;
		case 2: Test3(cairo); break;
		case 3: Test4(cairo); break;
		case 4: Test5(cairo); break;
	}
}

