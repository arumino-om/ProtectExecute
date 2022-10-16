#include <iostream>
#include "Log.h"
#include "PELoader.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(int argc, char* argv[])
{
	string program_path;

#if _DEBUG
	Log::LDebug("読み込むプログラムのパスを入力してください。");
	std::getline(cin, program_path);
#endif

	Log::LDebug(program_path);
	PELoader loader(program_path);
	if (loader.Initialized) Log::LDebug("[Main] initialize done.");
}