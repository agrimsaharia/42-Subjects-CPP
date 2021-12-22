#include<iostream>

using namespace std;

class Pony
{
private:
    string color;
    int height, weight;
    // int burrah = 123; 
public:
    Pony(string color_, int h, int w);
    ~Pony();
    void getDetails();
};

void Pony::getDetails()
{
    cout << color << ' ' << height << ' ' << weight << '\n';
}

Pony::Pony(string color_, int h, int w)
{
    cout << "creating pony object!" << '\n';
    height = h;
    weight = w;
    color = color_;
}

Pony::~Pony()
{
    cout << "deleting pony object!" << '\n';
}

Pony *p2;
Pony *p1;

void ponyOnTheStack()
{
    cout << "ponyOnTheStack was called" << '\n';
    Pony p0("Blue", 2089, 876);
    p2 = &p0;
}

void ponyOnTheHeap()
{
    cout << "ponyOnTheHeap was called" << '\n';
    Pony *p = new Pony("Blue", 20, 54);   
    p1 = p;
    delete p;
}

int main()
{
    ponyOnTheStack();
    ponyOnTheHeap();
    p1->getDetails();
    p2->getDetails();
    // cout << sizeof(*p1) << ' ' << sizeof(*p2);
    return 0;
}