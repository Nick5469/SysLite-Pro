//UICtrl.h: UI控制

#pragma once
#include "pch.h"


//常量定义 - 进度
	//进度状态 - 出现错误
const int PROC_STATE_ERROR = -1;
	//进度状态 - 暂停
const int PROC_STATE_STOP = -2;
	//进度状态 - 忙碌
const int PROC_STATE_NOWORKING = -3;
	//进度状态 - 完成
const int PROC_STATE_OK = 0;
	//进度状态 - 正在执行
const int PROC_STATE_WORKING = 1;



//映像来源操作类
class ImageSource {
//公共部分
public:
	//公共函数
	//刷新来源列表
	void RefreshSourceList() {

	}

	//更新来源菜单状态
	void RefreshSourceMuen() {

	}
};


//任务进度类
class Processing {
//公共部分
public:
	//公共函数
	//添加任务
	void AddProc(int State = PROC_STATE_NOWORKING) {

	}
	
	//更新任务进度状态
	void SetProcState(int UpdataState) {

	}

	//更新任务进度
	void UpdataProc(int UpdataProc) {

	}
};