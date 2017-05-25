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
	Win::Button btImprimir;
	Win::BarChart bchart1;
	Win::Textbox tbx1;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(469);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(311);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Gente";
		btImprimir.Create(NULL, L"Imprimir", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 376, 39, 86, 28, hWnd, 1000);
		bchart1.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_VISIBLE, 24, 18, 348, 237, hWnd, 1001);
		tbx1.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 21, 272, 344, 32, hWnd, 1002);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		btImprimir.Font = fontArial014A;
		bchart1.Font = fontArial014A;
		tbx1.Font = fontArial014A;
	}
	//_________________________________________________
	void btImprimir_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btImprimir.IsEvent(e, BN_CLICKED)) {btImprimir_Click(e); return true;}
		return false;
	}
};
