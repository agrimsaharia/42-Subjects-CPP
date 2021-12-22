#include "Character.hpp"

Character::Character(std::string const &name) : name(name), ap(40), currWeapon(nullptr) {}

Character::~Character() {}

void Character::recoverAP()
{
    ap = std::min(40, ap + 10);
}

void Character::equip(AWeapon *weapon) { currWeapon = weapon; }

void Character::attack(Enemy *enemy)
{
    if (ap <= 0 || currWeapon == nullptr)
        return;
    ap -= currWeapon->getAPCost();
    std::cout << name << " attacks " << enemy->getType() << " with a " << currWeapon->getName() << std::endl;
    currWeapon->attack();
    enemy->takeDamage(currWeapon->getDamage());
    if (enemy->getHP() <= 0)
        enemy->~Enemy();
}

std::string const &Character::getName() const { return name; }

int Character::getAP() { return ap; }

AWeapon const *Character::getWeapon() const { return currWeapon; }

std::ostream &operator<<(std::ostream &os, Character &ch)
{
    if (ch.getWeapon() == nullptr) os << ch.getName() << " has AP_NUMBER " << ch.getAP() << " and is unarmed\n";
    else os << ch.getName() << " has " << ch.getAP() << " AP and wields a " << ch.getWeapon()->getName() << '\n';
    return os; 
}
