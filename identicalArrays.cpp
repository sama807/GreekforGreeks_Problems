//Two arrays of size N are called identical arrays if they contain the same elements. The order of elements in both arrays could be different; 
//however, both the arrays must contain same elements. You are given two arrays of size N.
//You need to determine if the arrays are identical or not.

#include<iostream>
#include<algorithm>
using namespace std;
    
static int check(int arr[], int brr[], int n){

    sort(arr, arr+n);
    sort(brr, brr+n);

    for(int i=0; i<n; i++){
        if(arr[i] != brr[i]){
            return 0;
        }
    }
    return 1;


}
int main(){

    int arr[] = {1,2,3};
    int arr2[]= {3,1,2};
    cout<< check(arr,arr2,3);
    return 0;
}

