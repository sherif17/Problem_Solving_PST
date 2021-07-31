#include <iostream>
#include <iomanip>      // std::setprecision

using namespace std;

int main()
{
    double A, B;
    double C;
    cin >> A >> B;

    C=(A-B)/3 + B;

    cout<< fixed << setprecision(10)<<C;

    return 0;
}