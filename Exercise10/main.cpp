#include <iostream>

using namespace std;

int main()
{
    int initial, num1, num2, num3, num4, num5, new1, new2, new3, new4, new5;
    cout << "Please enter a 5-digits number: " << endl;
    cin >> initial;

    num1 = initial % 10;
    new1 = (initial/10) - num1/10;

    num2 = new1 % 10;
    new2 = (new1/10) - num2/10;

    num3 = new2 % 10;
    new3 = (new2/10) - num3/10;

    num4 = new3 % 10;
    new4 = (new3/10) - num4/10;

    num5 = new4 % 10;
    new5 = (new4/10) - num5/10;

    cout << "The number backwards is: "<<num1<<num2<<num3<<num4<<num5;
    return 0;
}
