#include<iostream>
using namespace std;

//Leetcode 1047

string removeDuplicates(string s) {
        string temp = "";
        for(int i = 0; i<s.length(); i++){
            if(!temp.empty() && temp.back() == s[i]){
                temp.pop_back();
                continue;
            }
            temp.push_back(s[i]);
            
        }
        return temp;
}
int main(){
    string s = "abbaca";
    cout<< removeDuplicates(s);
}
