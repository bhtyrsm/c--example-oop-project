#include "CarSimSocketClient.h"


CarSimSocketClient::CarSimSocketClient(const std::string& host, int port) : CarSimSocket() {
	std::string error;

	hostent *he;
	char buff[256];
	if ((he = gethostbyname(host.c_str())) == 0) {
		strerror_s(buff, 100, errno);
		//error = strerror(errno);
		error = std::string(buff);
		throw error;
	}

	sockaddr_in addr;
	addr.sin_family = AF_INET;
	addr.sin_port = htons(port);
	addr.sin_addr = *((in_addr *)he->h_addr);
	memset(&(addr.sin_zero), 0, 8);

	if (::connect(s_, (sockaddr *)&addr, sizeof(sockaddr))) {
		strerror_s(buff, 100, WSAGetLastError());
		//error = strerror(WSAGetLastError());
		error = std::string(buff);
		throw error;
	}
}

