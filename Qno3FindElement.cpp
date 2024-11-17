//  Write a program to find the index of a given element in an array using recursion. If the
// element is present, return its index; otherwise, return -1C
#include <iostream>
using namespace std;
 int FindElements(int arr[],int size,int target ,int idx){
    if(idx==size) return -1;
    if(arr[idx]==target) {
        return idx;
    }
    FindElements(arr,size,target,idx+1);

}
int main(){
    int arr[]={3,4,-5,7,8,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=-5;
    int result =FindElements(arr,n,target,0);

    if(result>=0) cout<<"Element is at Index: "<<result;
    else cout<<"Element is not Present ";

}