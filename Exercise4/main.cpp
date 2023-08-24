#include <iostream>

using namespace std;

int main()
{
    float sandwich;
    cout << "Please type how many sandwiches you'll make: " << endl;
    cin >> sandwich;
    cout << "Cheese needed: "<< sandwich*0.1 << "kg" << endl;
    cout << "Ham needed: "<< sandwich*0.05 << "kg" <<  endl;
    cout << "Burgers needed: "<< sandwich*0.1 << "kg" <<  endl;
    return 0;
}
