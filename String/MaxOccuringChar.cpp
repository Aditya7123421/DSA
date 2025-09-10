#include<iostream>
using namespace std;

// only lowercase char in string

char getMaxOccuringChar(string& s) {
        int arr[26];
        for(int i = 0; i<26; i++){
            arr[i]= 0;
        }
        for(int i = 0; i< s.length(); i++){
            int index = (int)s[i] - 'a';
            arr[index]++;
        }
        int maxi = -1;
        char c;
        for(int i = 0; i<26; i++){
            if(maxi < arr[i]){
                maxi = arr[i];
                 c = (char)(i+(int)'a');
            }
            
        }
        return c;
        
    }

int main(){
    string s = "helloworld";
    cout<< getMaxOccuringChar(s);
}
