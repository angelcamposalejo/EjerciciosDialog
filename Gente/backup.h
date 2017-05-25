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
	Win::Button btAgregar;
	Win::XyChart xy1;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(469);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(250);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Gente";
		btAgregar.Create(NULL, L"Agregar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 376, 39, 86, 28, hWnd, 1000);
		xy1.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_VISIBLE, 19, 33, 294, 210, hWnd, 1001);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		btAgregar.Font = fontArial014A;
		xy1.Font = fontArial014A;
	}
	//_________________________________________________
	void btAgregar_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btAgregar.IsEvent(e, BN_CLICKED)) {btAgregar_Click(e); return true;}
		return false;
	}
};
