#include "Character.h"

Character::Character(string name, int level, int health, int attackPower) {
	this->name = name;
	this->level = level;
	this->health = health;
	this->attackPower = attackPower;
}

void Character::showStatus() {
	cout << "ĳ���� ����" << endl;
	cout << "�̸�: " << name << " | ����: " << level << " | ü��: " << health << " | ���ݷ�: " << attackPower << endl;
}