#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : name(name), AP_cost(apcost), damage(damage) {}

int AWeapon::getAPCost() const {return AP_cost;}
int AWeapon::getDamage() const {return damage;}
std::string const &AWeapon::getName() const {return name;}

void AWeapon::attack() const
{
    std::cout << "Sounds and lightning..." << std::endl;
}

AWeapon::~AWeapon() {}