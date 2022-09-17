#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    bool flag = true;
    for(int i = 0 ; i < n ; i++){
        int ans;
        cin>>ans;
        if(ans == 1){
            flag = false;
            break;
        }
    }
    if(flag == true){
        cout<<"EASY"<<endl;
    }
    else{
        cout<<"HARD"<<endl;
    }




    return 0;
}