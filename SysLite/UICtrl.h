//UICtrl.h: UI����

#pragma once
#include "pch.h"


//�������� - ����
	//����״̬ - ���ִ���
const int PROC_STATE_ERROR = -1;
	//����״̬ - ��ͣ
const int PROC_STATE_STOP = -2;
	//����״̬ - æµ
const int PROC_STATE_NOWORKING = -3;
	//����״̬ - ���
const int PROC_STATE_OK = 0;
	//����״̬ - ����ִ��
const int PROC_STATE_WORKING = 1;



//ӳ����Դ������
class ImageSource {
//��������
public:
	//��������
	//ˢ����Դ�б�
	void RefreshSourceList() {

	}

	//������Դ�˵�״̬
	void RefreshSourceMuen() {

	}
};


//���������
class Processing {
//��������
public:
	//��������
	//�������
	void AddProc(int State = PROC_STATE_NOWORKING) {

	}
	
	//�����������״̬
	void SetProcState(int UpdataState) {

	}

	//�����������
	void UpdataProc(int UpdataProc) {

	}
};