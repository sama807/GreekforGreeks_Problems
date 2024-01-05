
#include<iostream>
#include<algorithm>
using namespace std;

void rearrange(int arr[], int n) {
    
    int result[n];
    int j=0, k=0;
    int index=0;
    for(int i=0; i<n; i++){

        if(arr[i] >=0 ){

            result[k] = arr[i];
            k++;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i] <0){
            result[k] = arr[i];
            k++;
        }
    }

    for(int i=0, l=0; l<n; i=i+2, l++){
        
        if(index!=n){
            arr[i] = result[l];
        }
        
        while(result[index] >=0 && index!=n){
            index++;
        }
        if(index!=n){
            j=i+1;
            arr[j] = result[index];
            index++;
        }
        if(index== n){
            int m= i;
            while(l!=index){
                arr[m] = result[l];
                m++;
                l++;
            }
        }

    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
       
      
}

int main(){

    int arr[] = {-5,-2,5,2,4,7,1,8,0,-8};
    rearrange(arr, 10);
}