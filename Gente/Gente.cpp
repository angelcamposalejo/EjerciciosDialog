#include "stdafx.h"  //________________________________________ Gente.cpp
#include "Gente.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Gente app;
	return app.BeginDialog(IDI_Gente, hInstance);
}

void Gente::Window_Open(Win::Event& e)
{
	
}

void Gente::btAgregar_Click(Win::Event& e)
{
	PersonalDlg dlg;
	if (dlg.BeginDialog(hWnd) == 1)
	{
		wstring texto;
		Sys::Format(texto, L"%s(%d años)", dlg.tbxNombre.Text.c_str(), dlg.tbxEdad.IntValue);
		lbxPersonas.Items.Add(texto);
	}
}

