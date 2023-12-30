
#include<iostream>
#include<algorithm>
using namespace std;

bool leftRight(int arr[],int n)
{
        int temp;
        int count1=0, count2=0;
        int dummyArr[n];

        //Copy the array
        copy(arr, arr+n, dummyArr);
        sort(arr, arr+n);

        int max = arr[n-1];
        
        
        
        //using Lambda function 
        bool containsZero = any_of(arr, arr+n, [](int element) 
        {
          return element == 0;
          
        });
        
        if(max != n-1 && !containsZero)
        {
            
            return false;
        }
        
        reverse(dummyArr, dummyArr+n/2);
        
        for(int i=0; i<n/2-1; i++)
        {
            if(dummyArr[i+1]== i+1)
                count1++;
        }
        
        for(int i=n/2; i<n-1; i++){
            int j= i+1;
            int k=0;
            while(j!= n)
            {
                j++;
                k++;
            }
            if(dummyArr[i] == k)
                count2++;
            
        }
        if(count1== count2 && count1!=0)
         return true;

        
        if(!containsZero)
        {
          
         //shift highest element to the left
            for(int i=0; i<n; i++)
            {
                
                temp = arr[i];
                arr[i] = arr[n-1];
                arr[n-1] = temp;
                
            }

            //check the arrangement of elements containing non-zero element
            for(int i=0; i<n-1; i++)
            {
                    
                if(arr[i+1] != i+1){
                    return false;
                }
                    
            }
               
                
                return true;
       }
        
        else
        {
           //check the arrangement of elements in case of zero element

            for(int i=0; i<n-1; i++)
            {
                
                if(arr[i+1] != i+1){
                    return false;
                }
                
            }
            return true;         }
        
        
}

int main(){

    int arr[] = {1,6,5,4,3,2,1};
    leftRight(arr, 7);
    return 0;
}