#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    if (B < A)
        cout << 0;
    else
        cout << B - A + 1;
    return 0;
}