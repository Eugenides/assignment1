#include "Engine.h"
#include "Window.h"
#include <iostream>


int main(int argc, char* argv[]) {
	Engine e;

	Window window;

	e.print();

	window.onCreate();

	getchar();
	return 0;
}