﻿#include <iostream>
#include <Windows.h>

int main()
{
    for (int i = 0; i < 10000; i++)
    {
        std::cout << i << ": Hello" << std::endl;
        Sleep(1000);
    }
}
