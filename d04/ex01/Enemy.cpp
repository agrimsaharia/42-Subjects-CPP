#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : hp(hp), type(type) {}

Enemy::~Enemy() {}

void Enemy::takeDamage(int damage)
{
    if (damage > 0)
        hp -= damage;
}

std::string const &Enemy::getType() const { return type; }

int Enemy::getHP() const { return hp; }
