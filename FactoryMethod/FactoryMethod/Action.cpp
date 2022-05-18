#include "Action.h"

Action* Action::CreateAction(int code) {
	switch (code)
	{
	case 1:
		return new NormalAttack();
	case 2:
		return new MagicAttack();
	case 3:
		return new HealBuff();
	default:
		return nullptr;
	}
}