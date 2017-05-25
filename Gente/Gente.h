#pragma once  //______________________________________ Gente.h  
#include "Resource.h"
#include "PersonalDlg.h"
class Gente : public Win::Dialog
{
public:
	Gente()
	{
	}
	~Gente()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::ListBox lbxPersonas;
	Win::Button btAgregar;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(387);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(232);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Gente";
		lbxPersonas.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | LBS_NOINTEGRALHEIGHT | LBS_WINNORMAL | LBS_WINSINGLESEL, 13, 13, 272, 212, hWnd, 1000);
		btAgregar.Create(NULL, L"Agregar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 294, 15, 86, 28, hWnd, 1001);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lbxPersonas.Font = fontArial014A;
		btAgregar.Font = fontArial014A;
	}
	//_________________________________________________
	void btAgregar_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btAgregar.IsEvent(e, BN_CLICKED)) { btAgregar_Click(e); return true; }
		return false;
	}
};
