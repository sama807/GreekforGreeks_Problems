
#include<iostream>
#include<algorithm>
using namespace std;

//Given an array A of N positive integers. The task is to swap every ith element of the array with (i+2)th element.

void swapElements(int a[], int n) {
        
    int temp;
    
    for(int i=0; i<n-1 && i<n-2 ; i=i+1){
            
            temp = a[i];
            a[i] = a[i+2];
            a[i+2] = temp;

    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    
    
        
      
}

int main(){

    int arr[] = {1,2,3,4,5};
    int n=5;
    swapElements(arr, n);
    
}