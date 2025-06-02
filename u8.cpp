#include<iostream>
#include <climits> 
using namespace std;//real life by system 
int main()
{
    int nums[]={5,32,45,59,2313,234,2423,42,23};
    int largest= INT_MIN;
    for(int i=0;i<9;i++)
    {
        if(nums[i]>largest){
        largest=nums[i];
    }  
    }
cout<<largest<<endl;
return 0;
}
