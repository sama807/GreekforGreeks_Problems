
#include<iostream>
#include<algorithm>
using namespace std;

void reorganizeArray(int *arr, int n) {
        
    int *newArr = new int[n];
    for(int i=0; i<n; i++){
        newArr[i]= i;
    }
    
    for(int i=0; i<n; i++){
        
       int* element = find(arr, arr+n ,i);
       if(newArr[i]!= *element){

         newArr[i] = -1;
       }
    }
    for(int i=0; i<n; i++){
        cout<<newArr[i];
    }
    
    delete[] newArr;
}

int main(){

    int arr[] = {1,4,3,-1,2,5};
    reorganizeArray(arr, 6);
}