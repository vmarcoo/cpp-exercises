#include <iostream>

using namespace std;

int main()
{
    int horses, total;

    cout << "Please enter how many horses you have: ";
    cin >> horses;
    total = horses*4;
    cout << "Total horseshoes needed: "<< total;
    return 0;
}
