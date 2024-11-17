//Print all the elements of an array in reverse order using recursionC
#include <iostream>
using namespace std;
 void printReverse(int arr[],int size,int idx){
    if(idx==-1) return;
    cout<<arr[idx]<<" ";
    printReverse(arr,size,idx-1);

 }
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printReverse(arr,n,n-1);
   

}