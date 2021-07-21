#include "Networking/BindingSocket.hpp"

namespace CW::Networking
{

	BindingSocket::BindingSocket(AddressFamily family, int service, int protocol, unsigned short port, u_long ip)
		: SimpleSocket(family, service, protocol, port, ip)
	{
	}

	void BindingSocket::EstablishConnection()
	{
		this->Connection = bind(this->Socket, (sockaddr *)&this->Address, sizeof(this->Address));
	}

}
