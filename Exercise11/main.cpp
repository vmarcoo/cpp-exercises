#include <iostream>

using namespace std;

int main()
{
    int accountNumber, d1, d2, d3, d4, n1, n2, n3, checkDigit;

    cout << "Please enter your 4-digits account number to exhibit your check digit: " << endl;
    cin >> accountNumber;

    d1 = accountNumber % 10;
    n1 = (accountNumber / 10) - (d1 / 10);

    d2 = n1 % 10;
    n2 = (n1 / 10) - (d2 / 10);

    d3 = n2 % 10;
    n3 = (n2 / 10) - (d3 / 10);

    d4 = n3;

    checkDigit = ((d1 * d2 * d3 * d4) - (d1 + d2 + d3 + d4)) % 9;

    cout << "Your check digit is: " << checkDigit << " (please ignore any negative signs)." << endl;
    return 0;
}
