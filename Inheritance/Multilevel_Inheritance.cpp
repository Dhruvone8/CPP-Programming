#include<iostream>
using namespace std;

class Student
{
    protected:
        int roll_number;

    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void Student :: set_roll_number(int r)
{
    roll_number = r;
}

void Student :: get_roll_number()
{
    cout<<"The Roll Number of the student is "<<roll_number<<endl;
}

class Exam : public Student
{
    protected:
        int maths;
        int edc;

    public:
        void set_marks(int, int);
        void get_marks(void);
};

void Exam :: set_marks(int m, int e)
{
    maths = m;
    edc = e;
}

void Exam :: get_marks()
{
    cout<<"Marks scored in maths: "<<maths<<endl;
    cout<<"Marks scored in EDC: "<<edc<<endl;
}

class Result : public Exam
{
    public:
        void display(void)
        {
            get_roll_number();
            get_marks();
            cout<<"The percentage obtained is "<<(maths + edc)/2.0<<" % "<<endl;
        }
};

int main()
{
    Result dhruv;
    dhruv.set_roll_number(63);
    dhruv.set_marks(91,84);
    dhruv.display();
    return 0;
}