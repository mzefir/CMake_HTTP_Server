#pragma once

#include "Networking/Sockets/SimpleSocket.hpp"

namespace CW::Networking::Sockets
{
	class BindingSocket : public SimpleSocket
	{
	public:
		explicit BindingSocket(AddressFamily family, int service, int protocol, unsigned short port, u_long ip);
		void EstablishConnection() override;
	};
}