#include "CarSimSocket.h"


#include <iostream>

using namespace std;

int CarSimSocket::nofSockets_ = 0;

void CarSimSocket::Start() {
	if (!nofSockets_) {
		WSADATA info;
		if (WSAStartup(MAKEWORD(2, 0), &info)) {
			throw "Could not start WSA";
		}
	}
	++nofSockets_;
}

void CarSimSocket::End() {
	WSACleanup();
}

CarSimSocket::CarSimSocket() : s_(0) {
	Start();
	// UDP: use SOCK_DGRAM instead of SOCK_STREAM
	s_ = socket(AF_INET, SOCK_STREAM, 0);

	if (s_ == INVALID_SOCKET) {
		throw "INVALID_SOCKET";
	}

	refCounter_ = new int(1);
}

CarSimSocket::CarSimSocket(SOCKET s) : s_(s) {
	Start();
	refCounter_ = new int(1);
};

CarSimSocket::~CarSimSocket() {
	if (!--(*refCounter_)) {
		Close();
		delete refCounter_;
	}

	--nofSockets_;
	if (!nofSockets_) End();
}

CarSimSocket::CarSimSocket(const CarSimSocket& o) {
	refCounter_ = o.refCounter_;
	(*refCounter_)++;
	s_ = o.s_;

	nofSockets_++;
}

CarSimSocket& CarSimSocket::operator=(CarSimSocket& o) {
	(*o.refCounter_)++;

	refCounter_ = o.refCounter_;
	s_ = o.s_;

	nofSockets_++;

	return *this;
}

void CarSimSocket::Close() {
	closesocket(s_);
}

std::string CarSimSocket::ReceiveBytes() {
	std::string ret;
	char buf[1024];

	while (1) {
		u_long arg = 0;
		if (ioctlsocket(s_, FIONREAD, &arg) != 0)
			break;

		if (arg == 0)
			break;

		if (arg > 1024) arg = 1024;

		int rv = recv(s_, buf, arg, 0);
		if (rv <= 0) break;

		std::string t;

		t.assign(buf, rv);
		ret += t;
	}

	return ret;
}

std::string CarSimSocket::ReceiveLine() {
	std::string ret;
	while (1) {
		char r;

		switch (recv(s_, &r, 1, 0)) {
		case 0: // not connected anymore;
			// ... but last line sent
			// might not end in \n,
			// so return ret anyway.
			return ret;
		case -1:
			return "";
			//      if (errno == EAGAIN) {
			//        return ret;
			//      } else {
			//      // not connected anymore
			//      return "";
			//      }
		}

		ret += r;
		if (r == '\n')  return ret;
	}
}

void CarSimSocket::SendLine(std::string s) {
	s += '\n';
	send(s_, s.c_str(), s.length(), 0);
}

void CarSimSocket::SendBytes(const std::string& s) {
	send(s_, s.c_str(), s.length(), 0);
}
