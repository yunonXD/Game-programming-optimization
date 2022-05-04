#pragma once

namespace CK {

	class INetworkInterface
	{
	public:
		virtual ~INetworkInterface() {};

		virtual int Connect(int ip, int port) = 0;
		virtual int Close() = 0;
		virtual int SendPacket(int packetID, int param1, int param2) = 0;
	};

}