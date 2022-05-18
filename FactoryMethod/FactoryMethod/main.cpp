#include <iostream>
#include <vector>
#include "Action.h"

using namespace std;

int main() {
	vector<Action*> actions;

	int input;
	while (true) {
		cout << "Select Action(1~3, Quit: 0) : ";
		cin >> input;

		if (input == 0) break;

		actions.push_back(Action::CreateAction(input));
	}

	for (auto action : actions) {
		action->ActionEvent();
	}

	for (auto action : actions) {
		delete action;
	}
	actions.clear();

	return 0;
}