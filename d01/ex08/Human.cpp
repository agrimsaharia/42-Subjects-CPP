#include "Human.hpp"

action_num Human::ptrarray[] = {
	{"meleeAttack", &Human::meleeAttack},
	{"rangedAttack", &Human::rangedAttack},
	{"intimidatingShout", &Human::intimidatingShout}
};

int main()
{
    Human h1;
    h1.action("rangedAttack", "Bane");
}