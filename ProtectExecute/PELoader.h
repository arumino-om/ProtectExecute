#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <Windows.h>
#include "Log.h"

class PELoader
{
public:
	PELoader(std::string program_path);
	~PELoader();

	int ExecutePE();

	bool Initialized;

private:
	HANDLE exeHandle;
};

