#include "Log.h"

/**
 * @brief デバッグメッセージを出力し、最後に改行を行います。
 * @param debug_str デバッグメッセージ
*/
void Log::LDebug(std::string debug_str) {
#if _DEBUG
	std::cout << debug_str << std::endl;
#endif // _DEBUG
}

/**
 * @brief デバッグメッセージを出力します。
 * @param debug_str デバッグメッセージ
*/
void Log::Debug(std::string debug_str) {
#if _DEBUG
	std::cout << debug_str;
#endif // _DEBUG
}