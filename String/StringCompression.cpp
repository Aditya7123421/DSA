#include<iostream>
using namespace std;
#include<vector>

//Leetcode 443

int compress(vector<char>& chars) {
        int count = 0;
        int subcount = 0;
        for(int i = 0; i<chars.size(); i++){
            bool flag = false;
            int j = i;
            for(; j<chars.size(); j++){
               if(chars[j]!=chars[i]){
                   break;
                }
            }
            subcount = j-i;
            chars[count++] = chars[i];
            if(subcount != 1){
                string num = to_string(subcount);
                for(char c : num) {
                    chars[count++] = c;
                }
            }
            i = j -1;
        }
        return count;
    }

int main(){
    vector<char> chars ={'a','a','b','b','b','b','b','b','b','c'};
    int n = compress(chars);
    for(int i = 0; i< n; i++){
        cout<< chars[i]<< " ";
    }
}
