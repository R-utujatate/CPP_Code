#include<iostream>
using namespace std;
int main()
{

    string firstname="Rutuja";
    string lastname="tate";
    string fullname=firstname + lastname;
    cout<<fullname<<endl;

    string s="radha";
    string w="cute";
    string sent=s+" "+w;
    cout<<sent<<endl;

    string x="my";
    string y="mom";
    string sentence=x.append(y);
    cout<<sentence<<endl;

    string txt="vfchdsgfgfuwy";
    cout<<"string length:"<<txt.length()<<endl;

    string txt2="vfhasgfhsgfcussgrbf";
    cout<<"string length is:"<<txt2.size()<<endl;

    string dname;
    cout<<"Enter the department name:";
    getline (cin,dname);
    cout<<"department name is :"<<dname;


    return 0;


}
