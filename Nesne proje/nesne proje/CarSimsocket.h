#pragma once

#include <WinSock2.h>
#include <string>

enum TypeSocket { BlockingSocket, NonBlockingSocket };

class CarSimSocket {
public:

	virtual ~CarSimSocket();
	CarSimSocket(const CarSimSocket&);
	CarSimSocket& operator=(CarSimSocket&);

	std::string ReceiveLine();
	std::string ReceiveBytes();

	void   Close();

	// The parameter of SendLine is not a const reference
	// because SendLine modifes the std::string passed.
	void   SendLine(std::string);

	// The parameter of SendBytes is a const reference
	// because SendBytes does not modify the std::string passed 
	// (in contrast to SendLine).
	void   SendBytes(const std::string&);

protected:
	friend class CarSimSocketServer;
	friend class CarSimSocketSelect;

	CarSimSocket(SOCKET s);
	CarSimSocket();


	SOCKET s_;

	int* refCounter_;

private:
	static void Start();
	static void End();
	static int  nofSockets_;
};


