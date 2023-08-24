#include <iostream>

using namespace std;

int main()
{
    int bikesSold, employees;
    float averageBuyingPrice, averageSellingPrice, netProfit, minWage, salary, totalSalary;

    cout << "Enter the amount of sold bicycles and the average selling price, respectively: "<< endl;
    cin >> bikesSold;
    cin >> averageSellingPrice;
    averageBuyingPrice = averageSellingPrice/1.5;
    netProfit = (bikesSold*averageSellingPrice) - (bikesSold*averageBuyingPrice);
    cout << "The net profit is: R$"<< netProfit << endl;
    cout << "Now enter the number of employees you have: "<< endl;
    cin >> employees;
    minWage = 1320;
    salary = (2*minWage)+(0.15*averageBuyingPrice);
    totalSalary = employees*salary;
    cout << "Each employee will receive: R$"<< salary << ", from a total of R$" << totalSalary << endl;
    return 0;
}
