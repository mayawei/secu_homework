// textDialog1.cpp: 实现文件
//

#include "stdafx.h"
#include "secu.h"
#include "textDialog1.h"
#include "afxdialogex.h"
using namespace std;

// textDialog1 对话框

IMPLEMENT_DYNAMIC(textDialog1, CDialogEx)

textDialog1::textDialog1(wstring a,wstring b, CWnd* pParent)
	: CDialogEx(IDD_DIALOG3, pParent)
{
	caption = a;
	text = b;
}

textDialog1::~textDialog1()
{
	
}

void textDialog1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(textDialog1, CDialogEx)
END_MESSAGE_MAP()

BOOL textDialog1::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO: Add extra initialization here
	this->SetWindowText(caption.c_str());
	GetDlgItem(IDC_EDIT1)->SetWindowText(text.c_str());
	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}
void textDialog1::settxt(wstring a, wstring b)
{
	caption = a;
	text = b;
	this->SetWindowText(caption.c_str());
	GetDlgItem(IDC_EDIT1)->SetWindowText(text.c_str());
}