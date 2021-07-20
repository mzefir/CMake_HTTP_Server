#pragma once

#ifdef WIN32
#include <WinSock2.h>
#else
#include <sys/socket.h>
#include <netinet/in.h>
#endif // WIN32


namespace CW::Networking
{
	class SimpleSocket {
		int Connection;
	public:
		explicit SimpleSocket(int domain, int service, int protocol);
	};
}