#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin >> input;

    for (int i = 0; i < input.size(); i += 2)
    {
        for (int j = 0; j < input.size(); j += 2)
        {
            if ((input[i] - '0')< (input[j] - '0'))
            {
                char temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
    for (int i = 0; i < input.size(); i++)
    {
        cout << input[i];
    }

    return 0;
}