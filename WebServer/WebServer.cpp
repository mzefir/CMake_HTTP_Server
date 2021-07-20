// WebServer.cpp : Defines the entry point for the application.
//

#include "WebServer.h"
#include "Networking/inc/SimpleSocket.h"

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	SimpleSocket a;
	a.a = 5;
	
	return 0;
}
