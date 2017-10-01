#include <iostream>
#include "EosEngine.h"
#include "EOSLogger.h"

int main(int argc, char* argv[])
{
	EosEngine App;
	int errorCode = App.GetErrorCode();
	if (errorCode != 0)
		ELOG << "Error initializing";
	else
		MLOG << "Successful Initialization";
	bool running = true;
	while (running)
	{
		running = App.Update();
	}
	return 0;
}