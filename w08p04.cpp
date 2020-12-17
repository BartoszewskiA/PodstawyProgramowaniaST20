#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tab[100];
    int n = 0;
    //string temp;
    // do
    // {
    //     getline(cin, temp);
    //     if (temp.length() != 0)
    //     {
    //         tab[n] = temp;
    //         n++;
    //     }
    // } while (temp.length() != 0);
    while (1)
    {
        getline(cin, tab[n]);
        if (tab[n].length() == 0)
            break;
        else
            n++;
    }

    for (int i = 0; i < n; i++)
        cout << tab[i] << endl;
    int znaki = 0;
    int znaki_bez_spascji = 0;
    
    // for (int i = 0; i < n; i++)
    //     znaki += tab[i].length();

    // for (int i = 0; i < n; i++)
    // {
    //     temp = tab[i];
    //     for (int j = 0; j < temp.length(); j++)
    //         if (temp[j] != ' ')
    //             znaki_bez_spascji++;
    // }

    for (int i=0; i<n; i++)
    {
        znaki += tab[i].length();
        for (int j=0; j<tab[i].length(); j++)
            if (tab[i][j]!=' ') znaki_bez_spascji++;
    }

    cout << "wierszy: " << n << endl
         << "Znakow: " << znaki << endl
         << "Znakow bez spacji: " << znaki_bez_spascji;

    return 0;
}