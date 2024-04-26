#include <bits/stdc++.h>
#include <string>
using namespace std;

class Book
{
private:
    int page;
    float price;
    string name;
    string author;

public:
    Book()
    {
        page = 0;
        price = 0.0;
        name = "";
        author = "";
    }
    void setPage(int p)
    {
        page = p;
    }
    void setPrice(float pr)
    {
        price = pr;
    }
    void setName(const string &n)
    {
        name = n;
    }
    void setAuthor(const string &auth)
    {
        author = auth;
    }
    void display()
    {
        cout << "the page is:" << page << endl;
        cout << "price is:" << price << endl;
        cout << "book name is:" << name << endl;
        cout << "book author is:" << author << endl;
    }
};

int main()
{
    Book b1, b2;
    cout << "---------Book1 Data-----------" << endl;
    b1.setPage(200);
    b1.setPrice(1000.96);
    b1.setName("Chhava");
    b1.setAuthor("V.S.Khandekar");
    b1.display();
    cout << "---------Book2 Data-----------" << endl;
    b2.setPage(500);
    b2.setPrice(869.96);
    b2.setName("Yayati");
    b2.setAuthor("Shivaji Sawavt");
    b2.display();

    return 0;
}