#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3, average;
    cout << "Please enter your respective test scores below: " << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    average = ((n1*2) + (n2*4) + (n3*6))/12;
    cout << "Your average score is: " << average;
    return 0;
}
