/* An Abstract class is a class whose sole purpose of creation is to derive classes from it and work is done only on the derived class
   Abstract Class and Pure Virtual Functions are related to each other 
   Objects of Abstract Clas Can't be created 
   It has atleast one Virtual Function*/

#include<iostream>
#include<string>
using namespace std;

class Player
{
    protected:
        string name;
        int innings;
        int Player_Rank;

    public:
        Player(string n, int m, int rank)
        {
            name = n;
            innings = m;
            Player_Rank = rank;
        }
        virtual void DisplayStats() = 0;    // Pure Virtual Function
        void runnn()
        {
            cout<<"hi"<<endl;
        }
};

/* A Pure Virtual Function is used to create a Abstract Class
   A Pure Virtual Function is never executed, it should be overriden 
   If a Pure Virtual is not overriden in the Derived class than error will be thrown.*/

class Batsman : public Player
{
    protected:
        int runs;
    
    public:
        Batsman(string n, int i, int rank, int r) : Player(n, i, rank)
        {
            runs = r;
        }
        void DisplayStats()
        {
            cout<<"Player Name: "<<name<<endl;
            cout<<"Innings played: "<<innings<<endl;
            cout<<"ICC Ranking: "<<Player_Rank<<endl;
            cout<<"Runs made: "<<runs<<endl;;
        }
};

class Bowler : public Player
{
    protected:
        int wickets;
    
    public:
        Bowler(string n, int i, int rank, int w) : Player(n,i,rank)
        {
            wickets = w;
        }
        void DisplayStats()
        {
            cout<<"Player Name: "<<name<<endl;;
            cout<<"Innings played: "<<innings<<endl;
            cout<<"ICC Ranking: "<<Player_Rank<<endl;
            cout<<"Wickets Taken: "<<wickets<<endl;
        }
};

int main()
{
    Batsman bat("Virat Kohli",600,1,27213);
    Bowler bowl("Mitchell Starc",400,1,500);
    Player* pointer[2];
    pointer[0] = &bat;
    pointer[1] = &bowl;
    pointer[0]->DisplayStats();
    cout<<""<<endl;
    pointer[1]->DisplayStats();
}