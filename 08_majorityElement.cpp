#include<iostream>
using namespace std;


// Moore's Voting Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)

int majorityElement(int arr[],int n){
    int count=0;
    int candidate;

     // Find the majority candidate
    for(int i=0;i<n;i++){
        if(count==0){
            candidate=arr[i];
        }
        if(candidate==arr[i]){
            count++;
        }
        else{
            count--;
        }
    }
    return candidate;
}
int main(){
    int arr[]={1,2,3,3,3,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Majority Element is : "<<majorityElement(arr,n)<<endl;

    return 0;
}
