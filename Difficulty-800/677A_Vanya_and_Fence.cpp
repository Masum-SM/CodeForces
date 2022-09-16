#include<bits/stdc++.h>

using namespace std;


int main(){
    int n, k;
    cin>>n>>k;
    int width = 0;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin>>x;
        if(x<= k){
            width++;
        }
        else width += 2;
    }

    cout<<width<<endl;

    return 0;
}