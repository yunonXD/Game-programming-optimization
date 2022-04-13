#include "unique_ptr.h"

void runFunction() {

    unique_ptr<Player> RedPlayer(new Player());
    RedPlayer->printHaveWeapon();

    //넘겨주는 상황. move() 를 사용
    unique_ptr<Player> BluePlayer = move(RedPlayer);
    BluePlayer->printHaveWeapon();

}

void runBasicResetFunction() {

    //값 바꾸기 혹은 널pte? reset() 사용

    unique_ptr<Player> RedPlayer(new Player());
    cout << "reset 호출 전 " << RedPlayer.get() << endl;

    RedPlayer.reset();
    cout << "reset 호출 후 " << RedPlayer.get() << endl;

}


void runReleaseFunction() {
    //초기화 하고 소유권도 빼앗고 싶다면?
    unique_ptr<Player> RedPlayer(new Player());
    Player* BluePlayer = RedPlayer.release();
    if (BluePlayer) {
        delete BluePlayer;
    }

}

void runPlayerIDFunction() {
    unique_ptr<Player>RedPlayer(new Player());
    RedPlayer->printid(RedPlayer.get());

}


int main()
{
    runFunction();

    runBasicResetFunction();

    runReleaseFunction();

    return 1;
}