#include "Character.h"

Character::Character(string name, int level, int health, int attackPower) { // ĳ���� Ŭ����
	this->name = name;
	this->level = level;
	this->health = health;
	this->maxhealth = health;
	this->attackPower = attackPower;
}

void Character::attack(Character& target) { // ���ݰ� Ư�������� ���� �����Լ���
}
void Character::specialAttack(Character& target){
}

void Character::takeDamage(int damage) {// �������� ����
	this->health -= damage;
}

bool Character::isAlive() { // ���� Ȯ��
	if (this->health > 0) {
		return true;
	}
	return false;
}

void Character::showStatus() { // ����ǥ��
	cout << "�̸�: " << name << " | ����: " << level << " | ü��: " << health << " | ���ݷ�: " << attackPower << endl;
}

void Character::resetHealth() { // ü�� ����
	this->health = this->maxhealth;
}

string Character::getName() { // ����/�ǰ��� ǥ�ø� ���� �̸� ��ȯ
	return this->name;
}