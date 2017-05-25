#include "stdafx.h"  //_____________________________________________ PersonalDlg.cpp
#include "PersonalDlg.h"

void PersonalDlg::Window_Open(Win::Event& e)
{
}



void PersonalDlg::btOk_Click(Win::Event& e)
{
	this->EndDialog(1);
}

void PersonalDlg::btCancel_Click(Win::Event& e)
{
	this->EndDialog(0);
}

