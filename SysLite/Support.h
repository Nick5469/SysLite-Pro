//Support.h: SysLite�ڲ���Դ�ļ�

#pragma once
#include "pch.h"


//��Դ - ��������
	//�������� - �汾
		//���汾��
const int VERSION = 1;
		//С���°汾��
const int VERSION_UPDATE = 0;
		//�汾���ͱ�ʶ
const int VERSION_FLAG = 2;
		//�汾����ʱ���ʶ
const int VERSION_TIME = 40205;

//��ȡ�ؼ����
HWND GetCtrlWnd(int nID, HWND DlgWnd = AfxGetMainWnd()->m_hWnd) {
	return GetDlgItem(DlgWnd, nID);
}


//�������� - Explorer����
void SetThemeE(HWND hWnd) {
	SetWindowTheme(hWnd, TEXT("Explorer"), NULL);
}
