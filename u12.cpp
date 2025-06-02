#include<iostream>//sub array sum
#include<climits>//kadane algorithm
using namespace std;
int main()
{ 
    int  a[]={-1,-2,3,4,5};
    int nums=5;
int currentsum=0,maxsum=INT_MIN;
        for(int val:a)
        {
                currentsum+=val;
                maxsum=max(maxsum,currentsum);
        if(currentsum<0){
            currentsum=0;
        }
    }
    cout<<"maximum subarray"<<maxsum;
    return 0;
}