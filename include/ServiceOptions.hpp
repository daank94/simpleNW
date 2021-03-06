
#if !defined(_SERVICEOPTIONS_H)
#define _SERVICEOPTIONS_H

#include <TransportProtocol.hpp>

class ServiceOptions {
public:

	static const uint16_t PORT_MIN = 0;
	static const uint16_t PORT_MAX = 65535;

    int threads_ = 1;
    int32_t server_port_ = -1;
	TransportProtocol transport_protocol_ = TransportProtocol::ip_default;
};

#endif  //_SERVICEOPTIONS_H
