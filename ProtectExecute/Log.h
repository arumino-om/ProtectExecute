#pragma once
#include <string>
#include <iostream>

class Log
{
public:
	static void Debug(std::string debug_str);
	static void LDebug(std::string debug_str);
};

