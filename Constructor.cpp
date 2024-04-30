#include <iostream>
using namespace std;

class Test
{
private:
    int num;

public:
    Test()
    {
        cout << "Constructor is called...." << endl;
        num = 20;
    }
    void Display()
    {
        cout << "number : " << num << endl;
    }
};

int main()
{
    Test T;
    T.Display();
    return 0;
}
