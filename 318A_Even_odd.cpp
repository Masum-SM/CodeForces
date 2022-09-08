#include<bits/stdc++.h>

using namespace std;


int main(){
    std::ios::sync_with_stdio(false);
    long long n,m;
    cin>>n>>m;
    long long mid = n/2;
    if(n % 2 != 0){
        mid++;
    }
    if(m<=mid) cout<<(m-1)*2+1<<endl;
    else cout<<(m-mid)*2<<endl;

    return 0;
}