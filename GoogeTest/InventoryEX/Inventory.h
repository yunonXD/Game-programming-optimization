#pragma once
#include "INetworkInterface.h"

namespace CK {

    class Item
    {
    public:
        int mItemID;
        int mCount;

        Item() : mItemID(0), mCount(0) {}
    };

    class Inventory
    {
    public:
        Inventory(int itemNum, INetworkInterface* net = nullptr);
        Inventory(const Inventory& rhs);
        ~Inventory();
        Inventory& operator=(const Inventory& rhs);
        Item& operator[](int slotNum);


        int AddItem(int slotNum, int itemID, int itemCount);
        void printItems() const;

        size_t getSize() const { return mSize; }
        static size_t calcItemsCount(Item items[]);
    private:
        INetworkInterface* mNet;
        unsigned mSize;
        Item* mItems = nullptr;

    };


}
