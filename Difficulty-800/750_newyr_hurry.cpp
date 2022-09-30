#include<bits/stdc++.h>

using namespace std;

int main(){
    int n , m;
    cin>>n>>m;
    int limit = 240 - m;
    int time = 5 , count = 0;
    int i = 2;
    while(time<=limit && count< n){
        time += (5 * i);
        i++;
        count++;
    }
    cout<<count<<endl;

    return 0;
}