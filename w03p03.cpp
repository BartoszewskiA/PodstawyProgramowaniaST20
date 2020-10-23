#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
        cout << i << " ";
    cout << endl
         << "-----------------------------------------------------" << endl;
    int i = 0;
    while (i < 10)
    {
        cout << i << " ";
        i++;
    }
    cout << endl
         << "-----------------------------------------------------" << endl;
    i = 0;
    do
    {
        cout << i << " ";
        i++;
    } while (i < 10);

    return 0;
}