#include "stdafx.h"  //________________________________________ Gente.cpp
#include "Gente.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Gente app;
	return app.BeginDialog(IDI_Gente, hInstance);
}

void Gente::Window_Open(Win::Event& e)
{
	//________________________________________________________ pie1
	pie1.Pies.Add(L"Adult", RGB(250, 70, 70), 200.0);
	pie1.Pies.Add(L"Children", RGB(70, 70, 250), 100.0);
	pie1.Pies.Add(L"Teens", RGB(70, 250, 70), 50.0);
	//________________________________________________________ lv1
	lv1.Cols.Add(0, LVCFMT_LEFT, 100, L"Day");
	lv1.Cols.Add(1, LVCFMT_RIGHT, 200, L"Activity");
	lv1.Items.Add(0, L"Monday");
	lv1.Items[0][1].Text = L"Math Class";
}


void Gente::btImprimir_Click(Win::Event& e)
{
	Win::PrintDoc doc;
	doc.Create(L"Produc Report");
	doc.Add(10000, 1, pie1);
	doc.Add(500, lv1.Items.Count + 1, lv1);
	Win::PrintPreviewDlg dlg;
	dlg.BeginDialog_(hWnd, &doc);
}

