#include "Log.h"

/**
 * @brief �f�o�b�O���b�Z�[�W���o�͂��A�Ō�ɉ��s���s���܂��B
 * @param debug_str �f�o�b�O���b�Z�[�W
*/
void Log::LDebug(std::string debug_str) {
#if _DEBUG
	std::cout << debug_str << std::endl;
#endif // _DEBUG
}

/**
 * @brief �f�o�b�O���b�Z�[�W���o�͂��܂��B
 * @param debug_str �f�o�b�O���b�Z�[�W
*/
void Log::Debug(std::string debug_str) {
#if _DEBUG
	std::cout << debug_str;
#endif // _DEBUG
}