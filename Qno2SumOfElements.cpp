// Write a program to find the sum of all elements in an array using recursionC
#include <iostream>
using namespace std;
 int SumElements(int arr[],int n,int sum ,int idx){
    if(idx==n) return sum;
     sum+=arr[idx];
    SumElements(arr,n,sum,idx+1);

}
int main(){
    int arr[]={3,4,-5,7,8,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
   cout<< SumElements(arr,n,0,0);

}
    
