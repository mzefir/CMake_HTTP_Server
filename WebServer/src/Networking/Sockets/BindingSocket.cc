#include "Networking/Sockets/BindingSocket.hpp"

namespace CW::Networking::Sockets
{

	BindingSocket::BindingSocket(AddressFamily family, int service, int protocol, unsigned short port, u_long ip)
		: SimpleSocket(family, service, protocol, port, ip)
	{
	}

	void BindingSocket::EstablishConnection()
	{
		int success = bind(this->Socket, (sockaddr *)&this->Address, sizeof(this->Address));
		// 0 success, -1 fail
	}

}
