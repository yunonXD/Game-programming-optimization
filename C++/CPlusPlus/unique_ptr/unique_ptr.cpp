#include "unique_ptr.h"

void runFunction() {

    unique_ptr<Player> RedPlayer(new Player());
    RedPlayer->printHaveWeapon();

    //�Ѱ��ִ� ��Ȳ. move() �� ���
    unique_ptr<Player> BluePlayer = move(RedPlayer);
    BluePlayer->printHaveWeapon();

}

void runBasicResetFunction() {

    //�� �ٲٱ� Ȥ�� ��pte? reset() ���

    unique_ptr<Player> RedPlayer(new Player());
    cout << "reset ȣ�� �� " << RedPlayer.get() << endl;

    RedPlayer.reset();
    cout << "reset ȣ�� �� " << RedPlayer.get() << endl;

}


void runReleaseFunction() {
    //�ʱ�ȭ �ϰ� �����ǵ� ���Ѱ� �ʹٸ�?
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