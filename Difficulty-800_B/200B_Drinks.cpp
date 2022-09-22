#include<bits/stdc++.h>

using namespace std;


int main(){

    int n;
    cin>>n;
    float sum = 0;
    for(int i = 0 ; i < n ; i++){
        int drink;
        cin>>drink;
        sum += drink;
    }
    cout<<sum / (float)n;

    return 0;
}