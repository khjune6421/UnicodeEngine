#include "stdafx.h"

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

	if (_setmode(_fileno(stdout), _O_U8TEXT) == -1)
    {
        std::cerr << "Failed to set console output mode to UTF-8." << std::endl;
        return -2;
	}

    std::wcout << L"ㄴㅇㄴㄴㄴㄴㄴㄴㄴㄻㄹ" << std::endl;
	std::wcout << L"Random integer between 1 and 100: " << Random(1, 100) << std::endl;

    return 0;
}