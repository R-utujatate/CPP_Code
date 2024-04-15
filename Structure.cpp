// C++ program to demonstrate the making of structure
#include <bits/stdc++.h>

using namespace std;
// Define structure
struct Employee
{
    int Id;
    string Name;
    int Cno;
    float Sal;
};

int main()
{
    // Declaring astructure
    struct Employee Emp;
    Emp.Id = 22;
    Emp.Name = "Rutuja";
    Emp.Cno = 3432975;
    Emp.Sal = 21000;
    cout << "Employee Id :" << Emp.Id << endl;
    cout << "Employee Name :" << Emp.Name << endl;
    cout << "Employee Contact no. :" << Emp.Cno << endl;
    cout << "Employee Salary :" << Emp.Sal << endl;

    return 0;
}
