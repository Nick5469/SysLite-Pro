// CAbout.cpp: 实现文件
//

#include "pch.h"
#include "SysLite.h"
#include "CAbout.h"
#include "afxdialogex.h"
//包含资源文件
#include "Support.h"


// CAbout 对话框

IMPLEMENT_DYNAMIC(CAbout, CDialogEx)

CAbout::CAbout(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_About, pParent)
{

}

CAbout::~CAbout()
{
}

void CAbout::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TEXT_VER, m_txt_ver);
}


BEGIN_MESSAGE_MAP(CAbout, CDialogEx)
	ON_WM_CREATE()
//	ON_WM_ACTIVATE()
END_MESSAGE_MAP()


// CAbout 消息处理程序