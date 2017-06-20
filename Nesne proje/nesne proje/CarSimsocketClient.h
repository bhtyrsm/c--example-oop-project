#pragma once
#include "CarSimSocket.h"
#include <WinSock2.h>

class CarSimSocketClient : public CarSimSocket {
public:
	CarSimSocketClient(const std::string& host, int port);
};
