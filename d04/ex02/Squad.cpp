#include "Squad.hpp"

Squad::Squad(const Squad & sq)
{
    array.reserve(sq.array.size());
    for (int i = 0; i < sq.array.size(); i++)
    {
        array[i] = sq.array[i]->clone();
    }
}

Squad &Squad::operator=(const Squad& sq)
{
    for (int i = 0; i < array.size(); i++)
    {
        delete &(*array[i]);
    }
    array.reserve(sq.array.size());
    for (int i = 0; i < sq.array.size(); i++)
    {
        array[i] = sq.array[i]->clone();
    }
    return *this;
}

int Squad::push(ISpaceMarine* ispmar)
{
    if (ispmar == nullptr) return array.size();
    for(ISpaceMarine* &i : array) if (i == ispmar) return array.size();
    array.push_back(ispmar);
    return array.size();
}

ISpaceMarine* Squad::getUnit(int n) const
{
    if (n >= array.size()) return nullptr;
    return array[n];
}

int Squad::getCount() const
{
    return array.size();
}

Squad::Squad() : ISquad() {}

Squad::~Squad()
{
    for (int i = 0; i < array.size(); i++)
    {
        delete &(*array[i]);
    }
    delete &array;
}
