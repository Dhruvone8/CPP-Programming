#include<iostream>
using namespace std;

class Shop
{
    private:
        int itemId[100];
        int itemPrice[100];
        int counter;
    public:
        void initCounter()
        {
            counter = 0;
        }

        void setPrice();
        void displayPrice();
};

void Shop :: setPrice()
{
    cout<<"Enter the id of item no. "<<counter+1<< ": "<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of the item: "<<endl;
    cin>>itemPrice[counter];
    counter ++;
}

void Shop :: displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with id "<<itemId[i]<< " is " <<itemPrice[i]<<endl;
    }
}

int main()
{
    Shop s;
    s.initCounter();
    s.setPrice();
    s.setPrice();
    s.setPrice();
    s.displayPrice();
    return 0;
}