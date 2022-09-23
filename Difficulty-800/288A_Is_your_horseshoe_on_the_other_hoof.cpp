#include<bits/stdc++.h>

using namespace std;


int main(){
    int a , b , c ,d;
    cin>>a>>b>>c>>d;
    int count = 0;
    if(a == b) count++;
    if(c == b || c == a) count++;
    if(d == b || d == c || d == a)count++;
    cout<<count;



    return 0;
}