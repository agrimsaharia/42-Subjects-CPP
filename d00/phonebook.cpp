#include<iostream>
#include<iomanip>

using namespace std;

class contact
{
public:
    string firstName, lastName, nickName, login, postalAddress, emailAddress, favoriteMeal, underwearColor, darkestSecret;
    unsigned long long int phoneNumber;
    struct tm birthdayDate;
    void displayBD();
    void displayDetails();
    void setDetails();
};

void contact::setDetails()
{
    cout << "first name : ";
    cin >> firstName;
    if (cin.fail()) cout << "wrong format" << '\n';
    cout << "last name : ";
    cin >> lastName;
    if (cin.fail()) cout << "wrong format" << '\n';
    cout << "nickname : ";
    cin >> nickName;
    if (cin.fail()) cout << "wrong format" << '\n';
    cout << "login : ";
    cin >> login;
    if (cin.fail()) cout << "wrong format" << '\n';
    cout << "postal address : ";
    cin.ignore();
    getline(cin, postalAddress);
    if (cin.fail()) cout << "wrong format" << '\n';
    cout << "email address : ";
    cin >> emailAddress;
    if (cin.fail()) cout << "wrong format" << '\n';
    cout << "phone number : ";
    cin >> phoneNumber;
    if (cin.fail()) cout << "wrong format" << '\n';
    cout << "birthday date(dd/mm/yyyy) : ";
    cin >> get_time(&birthdayDate, "%d/%m/%Y");
    if (cin.fail()) cout << "wrong format" << '\n';
    cout << "favorite meal : ";
    cin.ignore();
    getline(cin, favoriteMeal);
    if (cin.fail()) cout << "wrong format" << '\n';
    cout << "underwear color : ";
    getline(cin, underwearColor);
    if (cin.fail()) cout << "wrong format" << '\n';
    cout << "darkest secret : ";
    getline(cin, darkestSecret);
    if (cin.fail()) cout << "wrong format" << '\n';
}

void contact::displayDetails()
{
    cout << "first name : " << firstName << '\n';
    cout << "last name : " << lastName << '\n';
    cout << "nickname : " << nickName << '\n';
    cout << "login : " << login << '\n';
    cout << "postal address : " << postalAddress << '\n';
    cout << "email address : " << emailAddress << '\n';
    cout << "phone number : " << phoneNumber << '\n';
    cout << "birthday date(dd/mm/yyyy) : "; displayBD(); cout << '\n';
    cout << "favorite meal : " << favoriteMeal << '\n';
    cout << "underwear color : " << underwearColor << '\n';
    cout << "darkest secret : " << darkestSecret << '\n';
}

void contact::displayBD()
{
    cout << birthdayDate.tm_mday << '/' << birthdayDate.tm_mon + 1 << '/' << birthdayDate.tm_year + 1990;
}

int n = 0;
contact v[8];
string s;

int main()
{
    while (true)
    {
        cout << "Choose your command : ";
        cin >> s;
        if (s == "ADD")
        {
            if (n == 8) 
            {
                cout << "I've had enough man!" << '\n';
                continue;
            }  
            v[n].setDetails();
            n++;
        }
        else if (s == "SEARCH")
        {
            if (n == 0) 
            {
                cout << "No contacts added yet!" << '\n';
                continue;
            }
            for (int i = 0; i < n; i++)
            {
                cout << setw(10) << i << '|';
                if (v[i].firstName.length() > 10) cout << setw(10) << v[i].firstName.substr(0, 9) + '.' << '|';
                else cout << setw(10) << v[i].firstName << '|';
                if (v[i].lastName.length() > 10) cout << setw(10) << v[i].lastName.substr(0, 9) + '.' << '|';
                else cout << setw(10) << v[i].lastName << '|';
                if (v[i].nickName.length() > 10) cout << setw(10) << v[i].nickName.substr(0, 9) + '.' << '|';
                else cout << setw(10) << v[i].nickName << '|';
                cout << '\n';
            }
            cout << "Choose index : ";
            int i;
            cin >> i;
            if (cin.fail() || i >= n || i < 0)
            {
                cout << "Wakanda nonsense is this?" << '\n';
            }
            else
            {
                v[i].displayDetails();
            }
        }
        else if (s == "EXIT")
        {
            break;
        }
        else 
        {
            cout << "Invalid input !" << '\n';
        }
    }
    

    return 0;
}