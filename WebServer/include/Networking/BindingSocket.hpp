#pragma once

#include "Networking/SimpleSocket.hpp"

namespace CW::Networking
{
	class BindingSocket : public SimpleSocket
	{
	public:
		explicit BindingSocket(AddressFamily family, int service, int protocol, unsigned short port, u_long ip);
	private:
		void EstablishConnection() override;
	};
}