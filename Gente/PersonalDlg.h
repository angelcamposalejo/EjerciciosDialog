#pragma once   //_____________________________________________ PersonalDlg.h  
#include "resource.h"

class PersonalDlg : public Win::Dialog
{
public:
	PersonalDlg()
	{
	}
	~PersonalDlg()
	{
	}
public:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxNombre;
	Win::Label lb2;
	Win::Textbox tbxEdad;
	Win::Button btOk;
	Win::Button btCancel;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(319);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(84);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		lb1.Create(NULL, L"Nombre", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 12, 10, 83, 25, hWnd, 1000);
		tbxNombre.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 94, 10, 138, 25, hWnd, 1001);
		lb2.Create(NULL, L"Edad", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 11, 45, 84, 25, hWnd, 1002);
		tbxEdad.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 94, 49, 97, 25, hWnd, 1003);
		btOk.Create(NULL, L"OK", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 242, 8, 69, 28, hWnd, 1004);
		btCancel.Create(NULL, L"Cancel", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 244, 49, 68, 28, hWnd, 1005);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		tbxNombre.Font = fontArial014A;
		lb2.Font = fontArial014A;
		tbxEdad.Font = fontArial014A;
		btOk.Font = fontArial014A;
		btCancel.Font = fontArial014A;
	}
	//_________________________________________________
	void btOk_Click(Win::Event& e);
	void btCancel_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btOk.IsEvent(e, BN_CLICKED)) { btOk_Click(e); return true; }
		if (btCancel.IsEvent(e, BN_CLICKED)) { btCancel_Click(e); return true; }
		return false;
	}
};
