#include<iostream>
using namespace std;

// Move Zeroes
// Time Complexity: O(n)
// Space Complexity: O(1)

int main(){
    int arr[]={3,0,5,0,1,0,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    int i=0;

    // Copy all non-zero elements
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            arr[i]=arr[j];
            i++;
        }
    }

    //Fill the remaining position with zeroes.
    while(i<n){
        arr[i]=0;
        i++;
    }

    //Print the array:
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }

    return 0;
}