#include<iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public: 
        BankDeposit() {}    // Necessary to make a blank Constructor as object won't recognise which one to choose during Compile Time
        BankDeposit(int p, int y, float r);  // Interest Rate(r) in the form of Fraction
        BankDeposit(int p, int y, int r);       // Interest Rate(r) in the form of Percentage
        void display();
};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit :: display()
{   
    cout<<"Principal Amount is "<<principal<<" and Return Value after "<<years<< " years is "<<returnValue<<endl;

}

int main()
{   
    BankDeposit bd1, bd2;
    int principal;
    int years;
    int interestRate_percentage;
    float interestRate;

    cout<<"Enter Principal Amount, Years, InterestRate_in_Fraction"<<endl;
    cin>>principal>>years>>interestRate;

    bd1 = BankDeposit(principal, years, interestRate);
    bd1.display();

    cout<<"\nEnter Principal Amount, Years, InterestRate_in_Percentage"<<endl;
    cin>>principal>>years>>interestRate_percentage;
    bd2 = BankDeposit(principal, years, interestRate_percentage);
    bd2.display();
    return 0;
}