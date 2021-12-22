#include<iostream>

using namespace std;

int main()
{
    string s = "HI THIS IS BRAIN";
    string *sptr = &s;
    string &ref = s;
    cout << "using pointer -> " << *sptr << '\n';
    cout << "using reference -> " << ref << '\n';
    return 0;
}