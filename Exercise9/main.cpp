#include <iostream>

using namespace std;

int main()
{
    int valueWanted, tenBills, fiveBills, oneBills, newValue1, newValue2, newValue3;

    cout << "Enter how much money you wish to withdraw: " << endl;
    cin >> valueWanted;


    tenBills = valueWanted / 10;
    newValue1 = valueWanted % 10;

    fiveBills = newValue1 / 5;
    newValue2 = newValue1 % 5;

    oneBills = newValue2;

    cout << "You will receive: " << endl;
    cout << tenBills <<" ten dollar bills." << endl;
    cout << fiveBills <<" five dollar bills." << endl;
    cout << oneBills <<" one dollar bills." << endl;
    return 0;
}
