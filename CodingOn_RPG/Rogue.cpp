#include "Rouge.h"

Rouge::Rouge(string name, int level, int health, int attackPower)
	: Character(name, level, health, attackPower) {
}

void Rouge::attack(Character& target) {
	cout << "������(��) ������ " << target.getName() << "��(��) �����մϴ�!" << endl;
	target.takeDamage(this->attackPower);
}
void Rouge::specialAttack(Character& target) { // Ư������ ambush
	random_device rd; // �ϵ���� ���� ������ (�õ� ����)
	mt19937 gen(rd()); // Mersenne Twister 19937 ����
	uniform_int_distribution<int> dist(1, 100); // 1~100 ������ �յ� ���� ����
	
	int random_number = dist(gen);
	if (random_number > 30) {
		target.takeDamage(this->attackPower * 3);
	}
	else { 
		cout << "���� Ư�� ���� ����!" << endl; 
	}
	//���� ������ ���� 70% Ȯ���� 3�� �������� ���� (���� Ȯ�� �ý��� Ȱ��). 31~100 = ����
	//���� �� �������� ����
}