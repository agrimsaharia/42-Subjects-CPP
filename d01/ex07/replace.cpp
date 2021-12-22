#include<fstream>
#include<iostream>

using namespace std;

int main()
{
    string s1 = "papa", s2 = "john", filename = "papajohn";
    
    cout << "String to replace : ";cin >> s1;
    cout << "Replace with : ";cin >> s2;
    cout << "File to operate on(without extension, only .txt files allowed) : ";cin >> filename;

    ifstream inp("d01\\ex07\\" + filename + ".txt");
    while (inp.bad())
    {
        cout << "file DNE!" << '\n';
        inp.clear();
        cout << "File to operate on : ";cin >> filename;
        inp.open("d01\\ex07\\" + filename + ".txt");
    }
    ofstream out("d01\\ex07\\" + filename + ".replace.txt");

    if (inp.is_open() && out.is_open())
    {
        string s;
        while (getline(inp, s))
        {
            string s0;
            for (int i = 0; i < s.length(); i++)
            {
                if (i+s1.length() <= s.length() && s.substr(i, s1.length()) == s1)
                {
                    s0 += s2;
                    i += s1.length()-1;
                }
                else 
                {
                    s0 += s[i];
                }
            }
            out << s0 << '\n';
        }
        inp.close();
        out.close();
    }
    cout << "Operation Successfull!";
    return 0;
}