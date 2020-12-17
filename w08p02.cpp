#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "Ala ma kota";
    //s.erase(0,1);
    //s.erase(s.length()-1,1);
    //s.insert(0,"****");
    //s.insert(s.length(),"****");
    s.replace(0,3,"*********");
    cout<<s;
    return 0;
}