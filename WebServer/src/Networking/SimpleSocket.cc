#include "Networking/SimpleSocket.hpp"

namespace CW::Networking
{
	SimpleSocket::SimpleSocket(int domain, int service, int protocol)
	{
		this->Connection = socket(domain, service, protocol);
	}
}