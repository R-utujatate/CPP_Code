#include <iostream>
using namespace std;
class Student
{
private:
    int rollno = 20;

public:
    void display();
};
void Student::display()
{
    cout << "the roll no is: " << rollno << endl;
}

int main()
{
    Student s;
    s.display();
}