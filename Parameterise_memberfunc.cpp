#include <iostream>
using namespace std;
class Student
{
private:
public:
    void display(int);
};
void Student::display(int Rollno)
{
    cout << "the rollno is:" << Rollno;
}

main()
{
    Student s;
    int rno;
    cout << "Enter the roll no: " << endl;
    cin >> rno;
    s.display(rno);
}