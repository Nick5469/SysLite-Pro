#pragma once
//引用资源文件
#include "Support.h"

// CAbout 对话框

class CAbout : public CDialogEx
{
	DECLARE_DYNAMIC(CAbout)

public:
	CAbout(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CAbout();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_About };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	// 对话框_控件_标签_显示版本
	CStatic m_txt_ver;
//	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
};
