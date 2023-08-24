#include <iostream>

using namespace std;

int main()
{
    float percentageC, percentageD, failedC, failedD, totalFailed;

    cout << "Enter the percentage of not approved students in class C and D respectively:" << endl;
    cout << "(integer values only, do not write decimals or special characters such as %)" << endl;
    cin >> percentageC;
    cin >> percentageD;

    failedC = (percentageC/100)*60;
    failedD = (percentageD/100)*20;
    totalFailed = ((failedC+failedD)*100)/80;

    cout << "Number of students that failed in class C: "<< failedC << endl;
    cout << "Number of students that failed in class D: "<< failedD << endl;
    cout << "Percentage of students that failed considering both classes: "<< totalFailed <<"%"<< endl;

    return 0;
}
