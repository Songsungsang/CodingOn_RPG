#include "Mage.h"

Mage::Mage(string name, int level, int health, int attackPower, int mana)
	: Character(name, level, health, attackPower), mana(mana) {
}

void Mage::attack(Character& target) {
	target.takeDamage(this->attackPower);
}
void Mage::specialAttack(Character& target) { // Ư������ firball
	if (this->mana < 20) throw runtime_error("������ �����մϴ�!");
	this->mana -= 20;
	target.takeDamage(this->attackPower * 1.5); //���� 20�� �Ҹ��Ͽ� 1.5���� ���ݷ����� ����
}//���� ���� �� ���� �߻�(���� ó�� �ʿ�)

void Mage::resetHealth() {
	this->health = 80;
}