#include "Networking/SimpleSocket.hpp"

namespace CW::Networking
{
	SimpleSocket::SimpleSocket(AddressFamily family, int service, int protocol, unsigned short port, u_long ip)
	{
		this->Address.sin_family = static_cast<ADDRESS_FAMILY>(family);
		this->Address.sin_port = htons(port);
		this->Address.sin_addr.S_un.S_addr = htonl(ip);

		this->Socket = socket(static_cast<int>(family), service, protocol);
	}

	bool SimpleSocket::IsConnected() const
	{
		return this->Connection > 0;
	}
}