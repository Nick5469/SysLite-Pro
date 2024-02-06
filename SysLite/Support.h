//Support.h: SysLite内部资源文件

#pragma once
#include "pch.h"


//资源 - 常量定义
	//常量定义 - 版本
		//主版本号
const int VERSION = 1;
		//小更新版本号
const int VERSION_UPDATE = 0;
		//版本类型标识
const int VERSION_FLAG = 2;
		//版本构建时间标识
const int VERSION_TIME = 40205;

//获取控件句柄
HWND GetCtrlWnd(int nID, HWND DlgWnd = AfxGetMainWnd()->m_hWnd) {
	return GetDlgItem(DlgWnd, nID);
}


//设置主题 - Explorer主题
void SetThemeE(HWND hWnd) {
	SetWindowTheme(hWnd, TEXT("Explorer"), NULL);
}
