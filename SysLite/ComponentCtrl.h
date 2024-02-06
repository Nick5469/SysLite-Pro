//ComponentCtrl.h: SysLite�������

#pragma once
#include "pch.h"
#include <string.h>
#include <string>

//�������Ϣ�ṹ
struct CompLibInfo
{
	int BuildTime; //����ʱ��
	int Nums; //�������
	int Version; //��汾��
};

//���·��
struct CompPath {
	//·�� - �����԰� (����Ķ�����԰�. ����: �������ġ�Ӣ��)
	//string[] Langs;
	
	//·�� - ��ܹ� (����Ķ���ܹ��汾. ����: x64��x86��ARM)
	//string[] Platform;
	
	//���� - ������� (��ʾ���������������������Щ���. ����: ��ȫ����)
	//string[] LnkComp;
	
	//·�� - ��������� (����ذ�. ����: x64���԰���x86���԰�)
	//string[] LnkSxS;
	
	//·�� - ����ע����� (��ʾ������������ע�����.)
	//string[] LnkReg;
	
	//���� - �������� (��ʾ�������ϵͳע��ķ���. ����: Windows Defender ��ȫ���ķ���)
	//string[] LnkSvc;
	
	//*����ļ�·��
	//string[] CompPath;
};

//�������Ϣ�ṹ (��*���ʾÿ���������Ҫ�еĻ�����Ϣ)
struct CompInfo {
	//*������ (�������. ����: ϵͳ����ý�塢����)
	int Group;
	
	//*������� (��ʾ����. ����: Windows Defender)
	//string Name;
	
	//*������� (�������������Ϣ. ����: ɱ�����)
	//string Describe;
	
	//*Σ�յȼ� (��ʾ�������ϵͳ��Ӱ��. ����: Σ��)
	int Level;
	
	//�ٷ��ĵ� (΢��Ը������ʹ���ĵ�. )
	//string Doc;
	
	//���·��
	CompPath Path;
	
	//��ʾͼ���ַ&��ʾ�汾��ַ
	//string ShowInfoPath;
};

//���������
class Component {
//˽�г�Ա

//��������
public:
	//��������
	//������ʼ�� (�����Ƚ��г�ʼ��, ������������Ϣ, �������������Ч)
	void Init() {

	}

	//�������
	void Load() {
		//string OSPath
	}

	//�Ƴ����
	void DeleteComponent() {

	}

	//�������
	void DisableComponent() {

	}

	//�������
	void EnableComponent() {

	}

	//��ȡ�������Ϣ
	CompLibInfo GetLibInfo() {

	}

};
