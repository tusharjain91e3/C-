#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,i=1;
    cin>>n;
    while(i<=n)
    {
        if(n%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==2)
    cout<<"Its a prime number";
    else
    cout<<"Its not a prime number";
    return 0;
}