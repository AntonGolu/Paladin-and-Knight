#include <iostream>
#include "Knight.h"
#include "Paladin.h"
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
	srand(time(0));
	Knight k1("Valera", 1000, 100, 200, 3);
	k1.printKnight();
	Paladin p1("Vasya", 1000, 100, 200, 3);
	p1.printPaladin();

	while (true) {
		cout << "Knight hits paladin\n";
		p1.setHp(p1.getHp() - k1.getDamage());
		p1.printPaladin();
		if (p1.getHp() <= 0) {
			cout << "Paladin die, knight win!";
			break;
		}
		cout << "Paladin hits knight\n";
		k1.setHp(k1.getHp() - p1.getDamage());
		k1.printKnight();
		if (k1.getHp() <= 0) {
			cout << "Knight die, paladin win!";
			break;
		}
		Sleep(1000);
	}


	return 0;
}