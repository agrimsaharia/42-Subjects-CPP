#include<iostream>

using namespace std;

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else 
    {
        for (int i = 1; i < argc; i++)
        {
            string s = argv[i];
            for(char c : s)
            {
                cout << (char)toupper(c);
            }
        }
    }
    return 0;
}