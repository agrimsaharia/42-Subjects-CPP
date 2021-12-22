#include "TacticalMarine.hpp"

ISpaceMarine* TacticalMarine::clone() const
{
    return new TacticalMarine(*this);
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with chainsword *" << std::endl;
}

TacticalMarine::TacticalMarine() : ISpaceMarine()
{
    std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh ..." << std::endl;
}
