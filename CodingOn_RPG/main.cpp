#include "Character.h"
#include "Warrior.h"

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
}
