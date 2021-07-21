#include "Networking/Sockets/SimpleSocket.hpp"

namespace CW::Networking::Sockets
{
	SimpleSocket::SimpleSocket(AddressFamily family, int service, int protocol, unsigned short port, u_long ip)
	{
		#ifdef WIN32
		this->Address.sin_family = static_cast<ADDRESS_FAMILY>(family);
		this->Address.sin_port = htons(port);
		this->Address.sin_addr.S_un.S_addr = htonl(ip);
		#else
		this->Address.sin_family = static_cast<sa_family_t>(family);
		this->Address.sin_port = htons(port);
		this->Address.sin_addr.s_addr = htonl(ip);
		#endif

		this->Socket = socket(static_cast<int>(family), service, protocol);
	}

	bool SimpleSocket::IsConnected() const
	{
		return this->Socket > 0;
	}
}