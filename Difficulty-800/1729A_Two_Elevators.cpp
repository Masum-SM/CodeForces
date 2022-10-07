#include<bits/stdc++.h>

using namespace std;


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int a , b , c;
        cin>>a>>b>>c;
        if(a == 1 || a < b) cout<< 1<<endl;
        else{
            int b_value;
            if(b > c) b_value = b-1;
            else{
                int x = c - b;
                b_value = x + (c - 1);
            }
            
            if((a-1) == b_value) cout<<3<<endl;
            else if((a-1)<b_value) cout<<1<<endl;
            else cout<<2<<endl;
        }
    }

    return 0;
}