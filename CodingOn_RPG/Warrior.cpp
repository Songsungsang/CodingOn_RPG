#include "Warrior.h"

Warrior::Warrior(string name, int level, int health, int attackPower)
	: Character(name, level, health, attackPower) {
}

void Warrior::attack(Character& target) {
	cout << "������(��) " << target.getName() << "��(��) �����մϴ�!" << endl;
	target.takeDamage(this->attackPower);
}
void Warrior::specialAttack(Character& target) { // Ư������ powerStrike
	cout << "������(��) ������ �ϰ��� ���մϴ�!" << endl;
	target.takeDamage(this->attackPower * 2); //2���� ���ݷ��� ��������, ���ε� 5�� ü���� ����
	this->takeDamage(5);
}