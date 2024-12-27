// The virtual base class prevent us from the duplicacy of the element from the base class to derived class

#include <iostream>
using namespace std;

class Students
{
protected:
    int Roll_No;

public:
    void set_number(int a)
    {
        Roll_No = a;
    };
    void print_roll_no(void)
    {
        cout << "The Roll_No of the student is:" << Roll_No << endl;
    };
};

class Marks : virtual public Students
{
protected:
    float maths, physics;

public:
    void set_marks(float a1, float a2)
    {
        maths = a1;
        physics = a2;
    };
    void print_marks(void)
    {
        cout << "The marks of the students are:" << endl
             << "Maths" << maths << endl
             << "Physics" << physics << endl;
    }
};

class Sports : virtual public Students
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    };
    void print_score(void)
    {
        cout << "Your sports score is:" << endl
             << "Score" << score << endl;
    };
};

class Result : public Marks, public Sports
{
protected:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_roll_no();
        print_marks();
        print_score();
        cout << "Your Total Score is:" << total << endl;
    };
};
int main()
{
    Result R;
    R.set_number(3190);
    R.set_marks(50, 90);
    R.set_score(600);

    R.display();

    return 0;
}