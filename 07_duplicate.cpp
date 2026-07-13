#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int duplicate(vector<int>&nums){
    unordered_set<int>s;
    for(int i=0;i<nums.size();i++){
        if(s.find(nums[i])!=s.end()){
            return nums[i];
        }
        else{
            s.insert(nums[i]);
        }
    }
    return -1;
}
int main(){
    vector<int>nums={1,2,3,4,1};
    cout<<duplicate(nums);

    return 0;
}