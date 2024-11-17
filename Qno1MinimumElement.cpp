///C Write a program to find the minimum element of an array using recursion
#include <iostream>
#include<climits>
using namespace std;
 int minimum(int arr[],int n,int min ,int idx){
    if(idx==n) return min;
    if(min>arr[idx]) min=arr[idx];
    minimum(arr,n,min,idx+1);

}
int main(){
    int arr[]={3,4,-1,7,8,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
   cout<< minimum(arr,n,INT_MAX,0);

}
    
