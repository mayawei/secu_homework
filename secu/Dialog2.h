#pragma once
#include<string>
using namespace std;
// Dialog2 对话框

class Dialog2 : public CDialogEx
{
	DECLARE_DYNAMIC(Dialog2)

public:
	Dialog2(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Dialog2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	wstring s2ws(const string& str);
	afx_msg void OnBnClickedButton1();
//	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
};
