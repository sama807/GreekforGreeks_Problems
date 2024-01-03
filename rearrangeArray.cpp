
#include<iostream>
#include<algorithm>
using namespace std;

void rearrangeArray(int arr[], int n) {
        
        sort(arr, arr+n);
        int result[n];
        int index=0;
        
        
        for (int i=0; i<=n/2; i++){
            
            result[index++] = arr[i];
            if(index!= n-1){

                result[index++] = arr[n-i-1];
                

            }
        }
        for(int i=0; i<n; i++){
            cout<<result[i]<<" ";
        }
      
}

int main(){

    int arr[] = {1,-1,2,8,3};
    rearrangeArray(arr, 9);
}