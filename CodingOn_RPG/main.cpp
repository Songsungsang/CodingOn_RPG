#include "Character.h"
#include "Warrior.h"
#include "Mage.h"
#include "Rouge.h"

int main()
{
	Character char1("전사", 1, 100, 10);
	char1.showStatus();

	Warrior char2("전사", 1, 100, 10);
	char2.showStatus();
	char2.takeDamage(10);
	char2.showStatus();
	if (char2.isAlive() == true) {
		char2.resetHealth();
	}
	char2.showStatus();

	cout << "공격 진행" << endl;
	char2.attack(char1);
	char1.showStatus();

	cout << "특수 공격 진행" << endl;
	char2.specialAttack(char1);
	char1.showStatus();
	char2.showStatus();

	Mage char3("마법사", 1, 80, 20, 100);
	char3.showStatus();
	char3.takeDamage(10);
	char3.showStatus();

	cout << "공격 진행" << endl;
	char3.attack(char1);
	char1.showStatus();

	cout << "특수 공격 진행" << endl;
	char3.specialAttack(char1);
	char1.showStatus();
	char3.showStatus();
	cout << "특수 공격 진행" << endl;
	char3.specialAttack(char1);
	char1.showStatus();
	char3.showStatus();
	cout << "특수 공격 진행" << endl;
	char3.specialAttack(char1);
	char1.showStatus();
	char3.showStatus();
	cout << "특수 공격 진행" << endl;
	char3.specialAttack(char1);
	char1.showStatus();
	char3.showStatus();


	Rouge char4("도적", 1, 90, 15);
	char4.showStatus();
	char4.takeDamage(10);
	char4.showStatus();

	cout << "공격 진행" << endl;
	char4.attack(char1);
	char1.showStatus();

	cout << "특수 공격 진행" << endl;
	char4.specialAttack(char1);
	char1.showStatus();
	cout << "특수 공격 진행" << endl;
	char4.specialAttack(char1);
	char1.showStatus();
	cout << "특수 공격 진행" << endl;
	char4.specialAttack(char1);
	char1.showStatus();
	cout << "특수 공격 진행" << endl;
	char4.specialAttack(char1);
	char1.showStatus();
	cout << "특수 공격 진행" << endl;
	char4.specialAttack(char1);
	char1.showStatus();
	cout << "특수 공격 진행" << endl;
	char4.specialAttack(char1);
	char1.showStatus();
}


//Chatbot* chatbot = nullptr;
//string message = "";
//string input = "";
//int option;
//bool accessService = true;

//chatbot = new CustomerSupportBot(); // 고객응대
//cout << "문의가 필요한 사항 입력: ";
//cin >> message;
//chatbot->respond(message);
//delete chatbot;

//chatbot = new WeatherBot(); // 기상관측
//cout << "정보제공이 필요한 날짜 정보 입력: ";
//cin >> message;
//chatbot->respond(message);
//delete chatbot;

//shared_ptr<Child> child = make_shared<Child>(); // shared pointer 정의. Child를 가리키는 포인터 만들기
//shared_ptr<Parent> parent = child; // 업케스팅. 자식 포인터로 부모 포인터 만들기
//shared_ptr<Child> child2 = dynamic_pointer_cast<Child>(parent); // 다운캐스팅. 부모 포인터로 자녀 포인터 만들기