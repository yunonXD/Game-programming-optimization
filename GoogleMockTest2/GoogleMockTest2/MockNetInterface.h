#pragma once
#include "../InventoryApplication/INetworkInterface.h"
#include <gmock/gmock.h>

class MockNetInterface :
	public CK::INetworkInterface
{
public:
    MOCK_METHOD(int, Connect, (int ip, int port), (override));
    MOCK_METHOD(int, Close, (), (override));
    MOCK_METHOD(int, SendPacket, (int packetID, int param1, int param2), (override));

};

