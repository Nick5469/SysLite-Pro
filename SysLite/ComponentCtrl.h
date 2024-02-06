//ComponentCtrl.h: SysLite组件操作

#pragma once
#include "pch.h"
#include <string.h>
#include <string>

//组件库信息结构
struct CompLibInfo
{
	int BuildTime; //构建时间
	int Nums; //组件个数
	int Version; //库版本号
};

//组件路径
struct CompPath {
	//路径 - 多语言包 (组件的多个语言包. 例如: 简体中文、英语)
	//string[] Langs;
	
	//路径 - 多架构 (组件的多个架构版本. 例如: x64、x86、ARM)
	//string[] Platform;
	
	//名称 - 关联组件 (表示该组件还依靠、或被依靠哪些组件. 例如: 安全中心)
	//string[] LnkComp;
	
	//路径 - 关联组件池 (组件池包. 例如: x64语言包、x86语言包)
	//string[] LnkSxS;
	
	//路径 - 关联注册表项 (表示该组件相关联的注册表项.)
	//string[] LnkReg;
	
	//名称 - 关联服务 (表示该组件在系统注册的服务. 例如: Windows Defender 安全中心服务)
	//string[] LnkSvc;
	
	//*组件文件路径
	//string[] CompPath;
};

//单组件信息结构 (带*项表示每个组件必须要有的基础信息)
struct CompInfo {
	//*所属组 (组件分组. 例如: 系统、多媒体、网络)
	int Group;
	
	//*组件名称 (显示名称. 例如: Windows Defender)
	//string Name;
	
	//*组件描述 (对组件的描述信息. 例如: 杀毒软件)
	//string Describe;
	
	//*危险等级 (表示该组件对系统的影响. 例如: 危险)
	int Level;
	
	//官方文档 (微软对该组件的使用文档. )
	//string Doc;
	
	//组件路径
	CompPath Path;
	
	//显示图标地址&显示版本地址
	//string ShowInfoPath;
};

//组件操作类
class Component {
//私有成员

//公共部分
public:
	//公共函数
	//组件库初始化 (必须先进行初始化, 否则除了组件信息, 其他组件函数无效)
	void Init() {

	}

	//加载组件
	void Load() {
		//string OSPath
	}

	//移除组件
	void DeleteComponent() {

	}

	//禁用组件
	void DisableComponent() {

	}

	//启用组件
	void EnableComponent() {

	}

	//获取组件库信息
	CompLibInfo GetLibInfo() {

	}

};
