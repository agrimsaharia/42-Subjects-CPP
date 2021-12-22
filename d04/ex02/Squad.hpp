#pragma once

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <vector>

class Squad : public ISquad
{
private:
    std::vector<ISpaceMarine*> array;
public:
    Squad();
    Squad(const Squad &);
    Squad &operator=(const Squad&);
    int getCount() const;
    ISpaceMarine* getUnit(int) const;
    int push(ISpaceMarine*);
    ~Squad();
};
