#pragma once
#include <iostream>
#include <memory>

using namespace std;

class week_ptr
{

    class FPSPlayer
    {
    public:
        FPSPlayer(const string& name) : mLv(1), mName(name) {
            cout << "FPSPlayer �÷��̾� : " << mName << "  ������ ȣ��" << endl;
        }
        ~FPSPlayer() {
            cout << "FPSPlayer �÷��̾� : " << mName << "  �Ҹ��� ȣ��" << endl;
        }
        void setTeamPlayer(shared_ptr<FPSPlayer>& player) {
            if (player == nullptr) {
                return;
            }
            mTeamPlayer = player;
            cout << "TeamPlayer Name : " << mTeamPlayer->mName << endl;
        }
    private:
        int mLv;
        string mName;
        shared_ptr<FPSPlayer> mTeamPlayer;
    };
};

