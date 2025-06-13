/*
If more than 2 classes (B & C) are derived from one base class (A) and another class (D) is derived from the two classes (B & C),
Then since D is inherited from Both B and C, Class D will get two copies of Class A Members, which causes Ambiguity.
Virtual Base Class helps to avoid this ambiguity.
*/

#include<iostream>
using namespace std;

class Student
{
    protected:
        int roll_no;

    public:
        void set_number(int a)
        {
            roll_no = a;
        }

        void print_number(void)
        {
            cout<<"Roll no of the student is: "<<roll_no<<endl;
        }
};

class Test : virtual public Student
{
    protected:
        int maths, physics;

    public:
        void set_marks(int m, int p)
        {
            maths = m;
            physics = m;
        }

        void print_marks(void)
        {
            cout<<"Your Academics Result is: "<<endl
                <<"Maths Marks: "<<maths<<endl
                <<"Physics Marks: "<<physics<<endl;
        }
};

class Sports : virtual public Student
{
    protected:
        int score;
    
    public:
        void set_score(int s)
        {
            score = s;
        }

        void print_score(void)
        {
            cout<<"Your PT Score is: "<<score<<endl;
        }
};

class Result : public Test, public Sports
{
    private:
        int total;

    public:
        void display(void)
        {
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your overall score is: "<<total<<" out of 300 "<<endl;
        }
};

int main()
{
    Result r;
    r.set_number(63);
    r.set_marks(90,100);
    r.set_score(80);
    r.display();
}