#include<bits/stdc++.h>

using namespace std;


int main(){
    int k , n , w;
    cin>>k>>n>>w;
    int total = 0;
    for(int i = 1 ; i <= w ; i++){
        total +=(i * k);
    }
    int borrow = total-n;
    if(borrow>=0){
        cout<<borrow<<endl;
    }
    else{
        cout<<0<<endl;
    }
    

    return 0;
}