#include "stdafx.h"  //________________________________________ Gente.cpp
#include "Gente.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Gente app;
	return app.BeginDialog(IDI_Gente, hInstance);
}

void Gente::Window_Open(Win::Event& e)
{

	//________________________________________________________ xy1
	xy1.CaptionX = L"Axis X";
	xy1.CaptionY = L"Axis Y";
	xy1.MinX = 0.0;
	xy1.MaxX = 6.28;
	xy1.MinY = -1.0;
	xy1.MaxY = 1.0;
	xy1.Graphs.Add(100);
	for (int i = 0; i<100; i++)
	{
		xy1.Graphs[0][i].x = i*6.28 / 100;
		xy1.Graphs[0][i].y = sin(i*6.18 / 100);
	}
	//xy1.Graphs[0].Color = RGB(0, 0, 255);
	//xy1.Graphs[0].Type = Win::Graph::circle;
	//xy1.Graphs[0].Caption = L"My Function";
	xy1.RefreshAll();
	//________________________________________________________ bchart1
	bchart1.Bars.Add(L"May", RGB(230, 50, 50), 20.0);
	bchart1.Bars.Add(L"June", RGB(50, 230, 50), 40.0);
	bchart1.Bars.Add(L"July", RGB(50, 50, 230), 80.0);
	bchart1.MaxY = 100.0;
	bchart1.Text = L"Sales";
}



void Gente::btColor_Click(Win::Event& e)
{
	Win::ColorDlg dlg;
	dlg.SelectedColor = xy1.BackColor;
	if (dlg.BeginDialog(hWnd) == true)
	{
		xy1.BackColor = dlg.SelectedColor;
	}
}

void Gente::btImprimir_Click(Win::Event& e)
{
}

