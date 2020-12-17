#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
string znaki = "!@#$%&";

void losuj_litery(string &p, int ile);
void zamien_na_duze(string &p, int ile);
void wstaw_znak(string &p);

int main()
{
    srand(time(NULL));
    string pass = "";
    losuj_litery(pass, 20);
    zamien_na_duze(pass,3);
    wstaw_znak(pass);
    cout<<"pass: "<<pass;
    //cout<<(int)'a'<<" "<<(int)'z';
    return 0;
}

void losuj_litery(string &p, int ile)
{
    for (int i = 0; i < ile; i++)
        p = p + (char)(rand() % 25 + 97);
}

void zamien_na_duze(string &p, int ile)
{
    int poz;
    for (int i=0; i<ile; i++)
        {
            poz=rand() % p.length();
            p[poz] = toupper(p[poz]);
        }
}

void wstaw_znak(string &p)
{
    int poz_znaku = rand() % znaki.length();
    int poz = rand() % p.length();
    p[poz]=znaki[poz_znaku];
}