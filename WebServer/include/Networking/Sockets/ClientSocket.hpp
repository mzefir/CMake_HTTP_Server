#pragma once

#include "Networking/Sockets/SimpleSocket.hpp"

namespace CW::Networking::Sockets
{
	class ClientSocket : public SimpleSocket
	{
	public:
		explicit ClientSocket(AddressFamily family, int service, int protocol, unsigned short port, u_long ip);
		void EstablishConnection() override;
	};
}