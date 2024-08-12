#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void odd_even_string(string s, int N){
    string even_chars, odd_chars;
    for(int i=0; i<N; i++){
        if(i%2==0){
            even_chars+=s[i];
        }else{
            odd_chars+=s[i];
        } 
    }
    cout << even_chars << " " << odd_chars << endl;
}

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        cin>> s;
        int N=s.size();
        odd_even_string(s, N);
    }
    return 0;
}
