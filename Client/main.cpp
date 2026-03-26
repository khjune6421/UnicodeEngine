#include "stdafx.h"

int main()
{
    #ifdef _WIN32 // Windows
    
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

	if (_setmode(_fileno(stdout), _O_U8TEXT) == -1)
    {
        std::cerr << "Failed to set console output mode to UTF-8." << std::endl;
        return 1;
	}
    #else // Linux/macOS
    
    std::locale::global(std::locale(""));
    #endif

    std::wcout << L"ㄴㅇㄴㄴㄴㄴㄴㄴㄴㄻㄹ" << std::endl;

    return 0;
}