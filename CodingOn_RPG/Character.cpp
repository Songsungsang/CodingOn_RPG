#include "Character.h"

Character::Character(string name, int level, int health, int attackPower) { // 캐릭터 클래스
	this->name = name;
	this->level = level;
	this->health = health;
	this->maxhealth = health;
	this->attackPower = attackPower;
}

void Character::attack(Character& target) { // 공격과 특수공격은 순수 가상함수로
}
void Character::specialAttack(Character& target){
}

void Character::takeDamage(int damage) {// 데미지를 입음
	this->health -= damage;
}

bool Character::isAlive() { // 생존 확인
	if (this->health > 0) {
		return true;
	}
	return false;
}

void Character::showStatus() { // 상태표시
	cout << "이름: " << name << " | 레벨: " << level << " | 체력: " << health << " | 공격력: " << attackPower << endl;
}

void Character::resetHealth() { // 체력 리셋
	this->health = this->maxhealth;
}

string Character::getName() { // 공격/피격자 표시를 위한 이름 반환
	return this->name;
}