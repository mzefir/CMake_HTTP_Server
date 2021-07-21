#pragma once 

#include "Networking/Sockets/BindingSocket.hpp"

namespace CW::Networking::Sockets
{
    class ListeningSocket : public BindingSocket
    {
    public:
        explicit ListeningSocket(AddressFamily family, int service, int protocol, unsigned short port, u_long ip, int backlog);
        
        void EstablishConnection() override;
        bool IsListening() const;

    private:
        int BackLog { 0 };
        int Listening { -1 };
    };
}