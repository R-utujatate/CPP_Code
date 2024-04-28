#include <iostream>
#include <vector>
using namespace std;

class Vector
{
private:
    vector<double> components;

public:
    // Constructor
    Vector(vector<double> v) : components(v) {}

    // Method to compute cross product with another vector
    Vector crossProduct(const Vector &other) const
    {
        if (components.size() != 3 || other.components.size() != 3)
        {
            cout << "Cross product is only defined for 3D vectors." << endl;
            return Vector({0, 0, 0}); // Return zero vector for invalid input
        }

        vector<double> result(3);
        result[0] = components[1] * other.components[2] - components[2] * other.components[1];
        result[1] = components[2] * other.components[0] - components[0] * other.components[2];
        result[2] = components[0] * other.components[1] - components[1] * other.components[0];

        return Vector(result);
    }

    // Method to display the vector
    void display() const
    {
        cout << "(";
        for (size_t i = 0; i < components.size(); ++i)
        {
            cout << components[i];
            if (i != components.size() - 1)
            {
                cout << ", ";
            }
        }
        cout << ")" << endl;
    }
};

int main()
{
    // Define two 3D vectors
    Vector v1({1, 2, 3});
    Vector v2({4, 5, 6});

    // Compute and display the cross product
    cout << "Vector 1: ";
    v1.display();
    cout << "Vector 2: ";
    v2.display();
    cout << "Cross product: ";
    Vector cross = v1.crossProduct(v2);
    cross.display();

    return 0;
}
