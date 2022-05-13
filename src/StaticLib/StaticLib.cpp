﻿// StaticLib.cpp : スタティック ライブラリ用の関数を定義します。
//

#include "pch.h"
#include "framework.h"
#include "../include/StaticLib.h"


bool is_leap_year(int year)
{
	if (year % 100 == 0 && year % 400 != 0)
		return false;
	else if (year % 4 == 0)
		return true;		
	else
		return false;		
}
