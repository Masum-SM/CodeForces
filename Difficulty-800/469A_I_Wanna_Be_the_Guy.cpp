#include<bits/stdc++.h>

using namespace std;




int main(){
    int n;
    cin>>n;
    int concat[n+1] = {0};
    int p;
    cin>>p;
    for(int i = 0 ; i < p ; i++){
        int a;
        cin>>a;
        concat[a] = 1;
    }
    int q;
    cin>>q;
    for(int i = 0 ; i < q ; i++){
        int b;
        cin>>b;
        concat[b]++;
    }

    bool flag = true;
    for(int i = 1 ; i <= n ; i++){
        if(concat[i] == 0){
            flag = false;
            break;
        }    
        
    }
    if(flag == true)cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    
    return 0;
}
