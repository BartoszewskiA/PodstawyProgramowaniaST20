#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout<<"Podaj tekst: ";
    getline(cin,s);
    for (int i=0; i<s.length(); i++)
        s[i]=tolower(s[i]);
    s[0]=toupper(s[0]);
    cout<<s;
    return 0;
}