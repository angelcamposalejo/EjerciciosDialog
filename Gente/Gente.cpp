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

