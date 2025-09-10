#include<iostream>
using namespace std;
#include<vector>

void disp(vector<char>& s){
    for(int i = 0; i<s.size(); i++){
        cout<< s[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<char> s ={'h','e','l','l','o'};
    disp(s);
    int st = 0;
        int e = s.size() - 1;
        while(st < e ){
            swap(s[st++],s[e--]);
        }
    disp(s);
}
