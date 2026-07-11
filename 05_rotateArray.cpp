#include<iostream>
#include<algorithm>
using namespace std;

// Rotate Array (Right Rotation by k)
// Time Complexity: O(n)
// Space Complexity: O(1)

void rotateArray(int arr[],int n,int k){
    k%=n;
    reverse(arr,arr+n);
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    rotateArray(arr,n,k);

    cout << "Array after rotation: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}