#include <iostream>
#include "EosEngine.h"

int main(int argc, char* argv[])
{
	EosEngine App;
	int errorCode = App.GetErrorCode();
	if (errorCode != 0)
		std::printf("Error");
	else
		std::printf("Successful Initialization");
	bool running = true;
	while (running)
	{
		running = App.Update();
	}
	return 0;
}