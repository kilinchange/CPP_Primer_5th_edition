#include <iostream>
#include <string>
using namespace std;

void func1(const string &s)
{
    string numbers = "0123456789";
    string alplabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    decltype(s.size()) pos = 0;
    while (true)
    {
        pos = s.find_first_of(numbers, pos);
        if (pos != string::npos)
        {
            cout << s[pos] << endl;
        }
        else
        {
            break;
        }
        ++pos;
    }
    cout << endl;

    pos = 0;
    while (true)
    {
        pos = s.find_first_of(alplabet, pos);
        if (pos != string::npos)
        {
            cout << s[pos] << endl;
        }
        else
        {
            break;
        }
        ++pos;
    }
    cout << endl;
}

void func2(const string &s)
{
    string numbers = "0123456789";
    string alplabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    decltype(s.size()) pos = 0;
    while (true)
    {
        pos = s.find_first_not_of(alplabet, pos);
        if (pos != string::npos)
        {
            cout << s[pos] << endl;
        }
        else
        {
            break;
        }
        ++pos;
    }
    cout << endl;

    pos = 0;
    while (true)
    {
        pos = s.find_first_not_of(numbers, pos);
        if (pos != string::npos)
        {
            cout << s[pos] << endl;
        }
        else
        {
            break;
        }
        ++pos;
    }
    cout << endl;
}

int main()
{
    string s = "abcrt343gr34few8fo0";
    func1(s);
    func2(s);
    return 0;
}