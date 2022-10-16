#include "PELoader.h"

PELoader::PELoader(std::string program_path)
{
	Log::LDebug("[PELoader] Initializing...");

	exeHandle = CreateFileA(program_path.c_str(), GENERIC_READ, NULL, NULL, OPEN_EXISTING, NULL, NULL);
	Initialized = exeHandle != INVALID_HANDLE_VALUE;

	Log::LDebug("[PELoader] Initialize done.");
}

PELoader::~PELoader()
{
	Log::LDebug("[PELoader] Processing destruct...");
	CloseHandle(exeHandle);
	Log::LDebug("[PELoader] Destruct done.");
}

int PELoader::ExecutePE()
{
	
	return 0;
}


