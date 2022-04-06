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
            cout << "FPSPlayer 플레이어 : " << mName << "  생성자 호출" << endl;
        }
        ~FPSPlayer() {
            cout << "FPSPlayer 플레이어 : " << mName << "  소멸자 호출" << endl;
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

