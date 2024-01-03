
#include<iostream>
#include<algorithm>
using namespace std;

int* reorganizeArray(int *arr, int n) {
        
     for (int i = 0; i < n; ++i) {
        if (arr[i] != -1 && arr[i] != i) {
            int temp = arr[i];
            arr[i] = arr[temp];
            arr[temp] = temp;
            --i; // Recheck the current index after swapping
        }
    }
}

int main(){

    int arr[] = {1,4,3,-1,2,5};
    reorganizeArray(arr, 6);
}