#include "Character.h"

Character::Character(string name, int level, int health, int attackPower) {
	this->name = name;
	this->level = level;
	this->health = health;
	this->attackPower = attackPower;
}

void Character::showStatus() {
	cout << "캐릭터 정보" << endl;
	cout << "이름: " << name << " | 레벨: " << level << " | 체력: " << health << " | 공격력: " << attackPower << endl;
}