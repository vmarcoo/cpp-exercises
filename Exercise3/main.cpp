#include <iostream>

using namespace std;

int main()
{
    float salary = 1200.0, c1 = 200.0, c2 = 120.0, total = salary - (1.02*c1) - (1.02*c2);
    cout << "Total left is: R$"<< total;
    return 0;
}
