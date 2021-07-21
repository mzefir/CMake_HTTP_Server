#pragma once

#ifdef WIN32
#include <WinSock2.h>
#else
#include <sys/socket.h>
#include <netinet/in.h>
#endif // WIN32

namespace CW::Networking::Sockets
{
	// todo: add rest of AF_*
	enum class AddressFamily {
		Inet = AF_INET
	};
}