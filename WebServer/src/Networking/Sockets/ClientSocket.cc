#include "Networking/Sockets/ClientSocket.hpp"

namespace CW::Networking::Sockets
{
    ClientSocket::ClientSocket(AddressFamily family, int service, int protocol, unsigned short port, u_long ip)
		: SimpleSocket(family, service, protocol, port, ip)
	{
	}

	void ClientSocket::EstablishConnection()
	{
        this->Connection = connect(this->Socket, (sockaddr *)&this->Address, sizeof(this->Address));
	}
}