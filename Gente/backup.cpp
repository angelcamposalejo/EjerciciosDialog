#include "stdafx.h"  //________________________________________ Gente.cpp
#include "Gente.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Gente app;
	return app.BeginDialog(IDI_Gente, hInstance);
}

void Gente::Window_Open(Win::Event& e)
{
	//________________________________________________________ bchart1
	bchart1.Bars.Add(L"May", RGB(230, 50, 50), 20.0);
	bchart1.Bars.Add(L"June", RGB(50, 230, 50), 40.0);
	bchart1.Bars.Add(L"July", RGB(50, 50, 230), 80.0);
	bchart1.MaxY = 100.0;
	bchart1.Text = L"Sales";
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
	doc.Create(L"Sales Report");
	doc.Add(9000, 1, bchart1);
	doc.Add(500, tbx1.GetPrintLineCount(doc, 500), tbx1);
	Win::PrintDlg_ dlg;
	dlg.BeginDialog(hWnd, &doc);
}

