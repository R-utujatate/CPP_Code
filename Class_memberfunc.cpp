#include <iostream>
using namespace std;
class Student
{
private:
    int rollno = 10;

public:
    void display()
    {
        cout << "the roll number is:" << rollno;
    }
};

main()
{
    Student s;
    s.display();
}