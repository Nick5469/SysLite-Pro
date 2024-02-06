//Customize.h: SysLite定制类

#pragma once
#include "pch.h"
#include "ComponentCtrl.h"

//定义操作类
Component Comp;

//定制操作类
class Customize {
//公共部分
public:
	//公共函数
	//初始化
	void Init() {
		//初始化定制内容的其他API
		Comp.Init();
	}

	//加载定制
	void Load() {

	}

	//执行定制
	void Start() {

	}

	//终止定制
	void Stop() {

	}

	//结束定制
	void End() {

	}

	//清理
	void Clean() {

	}

};