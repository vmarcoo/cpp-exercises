#include <iostream>

using namespace std;

int main()
{
    float distance, consumption, price, result;

    cout << "Enter the distance you intend to drive (km), your car's" << endl;
    cout << "consumption (km/l) and the fuel price (R$), respectively." << endl;
    cin >> distance;
    cin >> consumption;
    cin >> price;
    result = (distance/consumption)*price;
    cout << "The costs of the trip are: R$"<< result;
    return 0;
}
