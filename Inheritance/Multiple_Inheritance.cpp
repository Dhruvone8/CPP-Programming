#include<iostream>
#include<string>
using namespace std;

class Father
{
    protected:
        string skin_color;

    public:
        void skinColor(string s)
        {
            skin_color = s;
        }
};

class Mother
{
    protected:
        string eye_color;

        public:
            void eyeColor(string e)
            {
                eye_color = e;
            }
};

class Child : public Father, public Mother
{
    public:
        void display(void)
        {
            cout<<"My Father's skin color is "<<skin_color<<endl;
            cout<<"My Mother's eye color is "<<eye_color<<endl;
            cout<<"My Skin color is "<<skin_color<<" and my eye color is "<<eye_color<<endl;
        }
};

int main()
{
    Child c;
    c.skinColor("White");
    c.eyeColor("Brown");
    c.display();
    return 0;
}