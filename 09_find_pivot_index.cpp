#include<iostream>
#include<vector>
using namespace std;


// Find Pivot Index
// Time Complexity: O(n)
// Space Complexity: O(1)


int pivotIndex(vector<int>&nums){
    int totalSum=0;

    // Calculate total sum
    for(int val:nums){
        totalSum+=val;
    }

    int leftSum=0;

     // Find the pivot index
    for(int i=0;i<nums.size();i++){
        int rightSum=totalSum-leftSum-nums[i];
        if(rightSum==leftSum){
            return i;
        }
        leftSum+=nums[i];
    }

    return-1;
}

int main(){
    vector<int>nums={6,5,2,-1,7,-1,8,5};
    cout<<"The pivot index is : "<<pivotIndex(nums);

    return 0;
}