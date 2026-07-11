#include<iostream>
using namespace std;
int removeDuplicate(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
int main(){
    int arr[]={1,2,2,3,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<removeDuplicate(arr,n);

    return 0;
}