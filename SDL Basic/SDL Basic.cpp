// SDL Basic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <SDL.h>

// #undef poniżej to jakaś sztuczka z
// https://stackoverflow.com/questions/6847360/error-lnk2019-unresolved-external-symbol-main-referenced-in-function-tmainc
// co ciekawe, to samo trzeba było zrobić na MinGW
#undef main

#include <iostream>

using namespace std;

int main()
{

	cout << "Hello world with SDL2" << endl;

    return 0;
}

