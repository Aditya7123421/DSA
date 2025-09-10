#include<iostream>
using namespace std;

int main(){
    string s = "A man, a plan, a canal: Panama";
    string temp;
    for(int i = 0; i<s.length();i++){
        if('a'<=s[i] && 'z'>=s[i]){
            temp.push_back(s[i]);
        }
        else if('A'<=s[i] && 'Z'>=s[i]){
            temp.push_back(s[i] -'A' + 'a');
        }
        else if('0'<= s[i] && '9'>=s[i]){
            temp.push_back(s[i]);
        }
        else{
            continue;
            }
    }

    int st = 0;
    int e = temp.length()-1;

    while(st<e){
        if(temp[st++]!=temp[e--]){
            cout<< "False";
        }
    }
    cout<< "True";
}
