#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i=4;
    double d= 4;
    string s="HackerRank ";
    int a;
    double b;
    string c;
    cin>>a>>b;
    cin.ignore();
    getline(cin, c);
    cout<< i+a<<endl;
    cout.setf(ios::fixed);
    cout.precision(1);
    cout<< d + b<<endl;
    cout<< s+c<<endl;
    return 0;
}
