#include<iostream>
using namespace std;

float MoneyReceived(int currentMoney, float interestRate = 1.04) 
// interestRate is a default Argument, can be ovewritten when needed and if no argument is given it takes 1.04 by default
// Default Arguments should always be written after mandatory arguments
{
    return currentMoney*interestRate;
}
int main()
{
    int money;
    cout<<"Enter the amount you have in your Bank Account: ";
    cin>>money;
    cout<<"If you have "<<money<<" rupees in your Bank Account, Then you will receive "<<MoneyReceived(money)<< " rupees after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" rupees in your Bank Account, Then you will Receive "<<MoneyReceived(money, 1.08)<< " rupees after 1 year";
}