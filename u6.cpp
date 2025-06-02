#include<iostream>//call by value
using namespace std;
int add(int  a, int b)
{
    int s=a+b;
    a=a+10;
    return s;
}
int main()
{
int a=5,b=5;
cout<<add(a,b)<<endl;
cout<<a<<endl;
}