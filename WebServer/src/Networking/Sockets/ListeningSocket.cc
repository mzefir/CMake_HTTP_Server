#include "Networking/Sockets/ListeningSocket.hpp"

namespace CW::Networking::Sockets
{
    ListeningSocket::ListeningSocket(AddressFamily family, int service, int protocol, unsigned short port, u_long ip, int backlog) 
        : BindingSocket(family, service, protocol, port, ip), BackLog(backlog)
    {

    }

    void ListeningSocket::EstablishConnection()
	{
		this->Connection = bind(this->Socket, (sockaddr *)&this->Address, sizeof(this->Address));
        if (this->IsConnected())
        {
            this->Listening = listen(this->Socket, this->BackLog);
        }
	}

    bool ListeningSocket::IsListening() const
    {
        return this->Listening == 0;
    }
}