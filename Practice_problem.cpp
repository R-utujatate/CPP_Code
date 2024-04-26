#include <iostream>
using namespace std;

class Car
{
private:
    int Model_no;
    char Brand_name[30];
    char Color[40];

public:
    void InputData()
    {
        cout << "Enter the model no of car :";
        cin >> Model_no;
        cout << "enter the brand name of the car :";
        cin >> Brand_name;
        cout << "What is the color of car ? :";
        cin >> Color;
    }
    /// @brief
    /// @return
    int OutputData()
    {
        cout << "Model no of the car :" << Model_no << endl;
        cout << "Brand of the car :" << Brand_name << endl;
        cout << "Color of the car :" << Color << endl;
    }
};

int main()
{
    Car c;
    cout << "--------------InputData-------------" << endl;
    c.InputData();
    cout << "-------------OutputData-------------" << endl;
    c.OutputData();
}