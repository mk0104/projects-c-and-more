#include <iostream>
#include <string>
using namespace std;


// class of weapon 
class Weapon {
public:
	string WeaponType;
	string WeaponName;
	int WeaponDamage1;
	int WeaponDamage2;
	double WeaponDurability;
	// method of class which helps easier of building weapon type dmg etc
	Weapon(string x, string c, int a, int s, double d) {

			WeaponType = x;
			WeaponName = c;
			WeaponDamage1 = a;
			WeaponDamage2 = s;
			WeaponDurability = d;

	}
};

// main class
class Monster{
public:
	void MonsterSound(){
		cout << "\n" << "Monster Sound" << "\n";
	}
};
// Derived class zombie

class Zombie: public Monster {
public:
	void MonsterSound(){
		cout << "Arghhhh" << "\n";
	}
};
// Derived class elite zombie 
class EliteZombie: public Monster {
public:
	void MonsterSound() {
		cout << "Arghhh arghhh" << "\n";
	}
};




int main() {
	// creating object of weapons with different values
	Weapon SilverSword("Sword", "Weak Silver Sword", 10,15,100.0);
	Weapon WoodenBow("Bow", "Wooden Bow", 5, 10, 100.0);
	
	// print a value for SilverSword
	cout << "\n" << "Type: " << SilverSword.WeaponType << "\n" << "Name: " << SilverSword.WeaponName << "\n" << "Damage: " << SilverSword.WeaponDamage1
		<< "-" << SilverSword.WeaponDamage2 << "\n" << "Durability: " << SilverSword.WeaponDurability << "\n";

	//Print a value for Wooden Bow
	cout << "\n" << "Type" << WoodenBow.WeaponType << "\n" << "Name" << WoodenBow.WeaponName << "\n" << "Damage" << WoodenBow.WeaponDamage1 << "-" << WoodenBow.WeaponDamage2
		<< "\n" << WoodenBow.WeaponDurability << "\n";

	// class of monsters written here
	Monster AllMonsters;
	Zombie  ZombieLvl1;
	EliteZombie EliteZombielvl1;

	// Out put what the class dose 
	AllMonsters.MonsterSound();
	ZombieLvl1.MonsterSound();
	EliteZombielvl1.MonsterSound();


	return 0;
}