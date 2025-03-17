#include "Character.h"
#include "Warrior.h"

int main()
{
	Character char1("전사", 1, 100, 10);
	char1.showStatus();

	Warrior char2("전사2", 1, 100, 10);
	char2.showStatus();
}
