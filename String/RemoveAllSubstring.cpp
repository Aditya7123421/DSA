#include<iostream>
using namespace std;

string removeOccurrences(string s, string part) {
    string temp = "";
    for(char c: s){
        temp.push_back(c);
        int n = temp.length();
        if(n >= part.length() && part.back() == temp.back()){
            bool flag = true;
            for(int j = n-part.length(); j<n; j++){
                if(part[j - n+part.length()]!= temp[j]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                for(int j = 0; j<part.length(); j++){
                    temp.pop_back();
                }
            }
        }
        //cout<< temp <<endl;
    }
    return temp;
}

int main(){
    string s = "daabcbaabcbc";
    string part = "abc";
    cout<< removeOccurrences(s,part);
}
