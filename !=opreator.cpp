#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter the first number: ";
    getline(cin,s1);
    cout<<"Enter the second number: ";
    getline(cin,s2);
    if(s1!=s2)
    {
        cout<<"Both strings are not equal.";
    }
    else
    {
        cout<<"Both strings are equal.";
    }
    return 0;
}