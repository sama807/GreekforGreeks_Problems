
#include<iostream>
#include<algorithm>
using namespace std;

void rearrange(int arr[], int n) {
    
    int result[n];
    int j=0, k=0;
    int index=0, p=0;
    int posInd=0, negInd=0;
    for(int i=0; i<n; i++){

        if(arr[i] >=0 ){

            result[k] = arr[i];
            k++;
            posInd++;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i] <0){
            result[k] = arr[i];
            k++;
            negInd++;
        }
    }
    if(posInd == n || negInd== n){

        for(int i=0; i<n; i++){
            arr[i] = result[i];
        }
    }
    else{
        
        for(int i=0, l=0; l<n && i<n ; i=i+2, l++){
            
            if(index!=n){
                arr[i] = result[l];
            }
            
            while(result[index] >=0 && index!=n){
                index++;
                p++;
            }
            if(index == 0){
                arr[++i] = result[++index];
                index++;
            }
            if(index!=n ){
                j=i+1;
                arr[j] = result[index];
                index++;
            }
            if(index== n){
                while(l!=p){

                    arr[++j] = result[++l];
                
            }
            l = n;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
       
      
}

int main(){

    int arr[] = {-36,-9,-92,-87,-43,-44};
    int arr1[] = {-5,-2,5,2,4,7,1,8,0,-8};
    int arr3[] = {93,85,-59,45,-89,-41,-4,-98,79,-12};
    rearrange(arr3, 10);
}