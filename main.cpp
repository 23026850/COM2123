#include <iostream>

using namespace std;

int main()
{
    double merchandiseCost,storeRent,employeesSalary,electricityCost,expense,actualProfit,changeNetProfit,finalMerchandise;
    cout << "Enter the total cost of the merchandise: " << endl;
    cin >> merchandiseCost;
    cout << " Enter the total salary of the employees including yours: " << endl;
    cin >> employeesSalary;
    cout << " Enter the yearly rent: " << endl;
    cin >> storeRent;
    cout << " Enter the estimated electricity cost: " << endl;
    cin >> electricityCost;

    expense= merchandiseCost+ employeesSalary+ storeRent+ electricityCost;
    cout << "Your expense is: " << expense << endl;
    actualProfit= merchandiseCost*0.1;
    cout << "Your acual profit rate is: " << actualProfit << endl;
    changeNetProfit= actualProfit/0.85
    finalMerchandise=(changeNetProfit+ expense)/merchandiseCost;
    cout << "The final merchandise cost is: " << finalMerchandise << endl;
    return 0;
}




































































