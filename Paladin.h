#pragma once
#include <iostream>
using namespace std;

class Paladin {
	//���������� ������ (���� ������)
private:
	string name;
	int hp;
	int damage;
	int armor;
	int critical;
public:
	// �������, ��� ���������
	// ���������� ������ ������ ������ � ������
	Paladin(string fname, int fhp, int fdamage, int farmor, int fcritical) {
		name = fname;
		hp = fhp;
		damage = fdamage;
		armor = farmor;
		critical = fcritical;

	}
	Paladin() {
		cout << "Paladin destroer\n";
	}
	// ������� � �������
	string getName() { return name; }
	int getHp() { return hp; }
	int getArmor() { return armor; }
	int getDamage() {
		int chanse = rand() % 100 + 1;
		if (chanse >= 99 && chanse <= critical) return damage * 2;
		else return damage;
		
	}
	int getCritical() { return critical; }
	void setName(string fname) { name = fname; }
	void setHp(int fhp) { hp = fhp; }
	void setDamage(int fdamage) { damage = fdamage; }
	void setArmor(int farmor) { armor = farmor; }
	void setCritical(int fcritical) { critical = fcritical; }
	void printPaladin() {
		cout << "Paladin " << name << " has " << hp << "hp\n";
	}
};