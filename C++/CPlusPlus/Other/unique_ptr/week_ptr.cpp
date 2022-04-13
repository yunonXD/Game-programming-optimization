#include "week_ptr.h"


int main()
{

    auto pRedPlayer = make_shared<FPSPlayer>("RedPlayer");
    auto pOrangePlayer = make_shared<FPSPlayer>("OrangePlayer");
    weak_ptr<FPSPlayer> pWeakRedPlayer(pRedPlayer);

    shared_ptr<FPSPlayer>connectPlayer = pWeakRedPlayer.lock();
    if (connectPlayer.use_count() > 0) {
        connectPlayer->setTeamPlayer(pOrangePlayer);uto 
    }
}
