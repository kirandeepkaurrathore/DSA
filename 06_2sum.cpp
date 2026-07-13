#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int>twoSum(vector<int>&nums,int target){
    unordered_map<int,int>m;
    for(int i=0;i<nums.size();i++){
        int first=nums[i];
        int sec=target-first;
        if(m.find(sec)!=m.end()){
            return {m[sec],i};
        }
        else{
            m[first]=i;
        }
    }
    return {};
}
int main(){
    vector<int>nums={5,2,3,4,6};
    vector<int>ans=twoSum(nums,9);
    for(int val:ans){
        cout<<val<<" ";
    }
    return 0;

}