#include<bits/stdc++.h>

using namespace std;


int main(){
    int n , count = 1;
    cin>>n;
    stack<string>stk;
    while(n--){
        string str;
        cin>>str;
        if(stk.empty()){
            stk.push(str);
        }
        else{
            if(stk.top().back() == str.front()){
                count++;
            }
            stk.push(str);
        }
    
    }
    cout<<count<<endl;


    return 0;
}