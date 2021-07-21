#pragma once

#ifdef WIN32
#include <WinSock2.h>
#else
#include <sys/socket.h>
#include <netinet/in.h>
#endif // WIN32


namespace CW::Networking
{
	enum class AddressFamily;

	class SimpleSocket {
	protected:
		sockaddr_in Address;
		int Connection = 0;
		SOCKET Socket;
	public:
		explicit SimpleSocket(AddressFamily family, int service, int protocol, unsigned short port, u_long ip);
		virtual void EstablishConnection() = 0;
		bool IsConnected() const;
	};
}