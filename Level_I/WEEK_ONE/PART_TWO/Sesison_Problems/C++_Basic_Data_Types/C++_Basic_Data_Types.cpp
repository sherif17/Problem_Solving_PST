#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int A;
    long long B;
    char C;
    float D;
    double E;

    cin >> A >> B >> C >> D >> E;

    cout << A << endl << B << endl;
    cout << C << endl << fixed << setprecision(3) << D << endl;
    cout << fixed << setprecision(9) << E << endl;
    return 0;
}