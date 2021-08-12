#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numberOfLoops;
    string operation;
    cin >> numberOfLoops;
    int x = 0;
    for (int i = 0; i < numberOfLoops; i++)
    {
        cin >> operation;
        if (operation == "++X")
            ++x;
        else if (operation == "X++")
        {
            x++;
        }
        else if (operation == "X--")
        {
            --x;
        }
        else
            x--;
    }
    cout << x;

    return 0;
}