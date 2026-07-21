#include<iostream>
#include<cctype>
using namespace std;

bool isPalindrome(string s){
    int st=0,end=s.length()-1;
    while(st<end){
        while((st<end)&& !isalnum(s[st])){
            st++;
        }
        while((st<end)&& !isalnum(s[end])){
            end--;
        }
        if(tolower(s[st]!=tolower(s[end]))){
            return false;
        }
        return true;
    }
}

int main(){
    string s="3aB& J 3ab";
    cout<<isPalindrome(s);

    return 0;

}