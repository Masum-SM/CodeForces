#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        string str;
        cin>>str;
        if(str[0] == 'I')count += 10;
        else if(str[0] == 'C')count += 3;
        else if(str[0] == 'T')count += 2;
        else if(str[0] == 'O')count += 4;
        else if(str[0] == 'D')count += 6;
        
    
    }
    cout<<count*2<<endl;
    return 0;
}