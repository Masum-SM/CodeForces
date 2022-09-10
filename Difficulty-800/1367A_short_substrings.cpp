#include<bits/stdc++.h>

using namespace std;


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string str;
        string str2 ="";
        cin>>str;
        str2 += str[0];
        for(int i = 1; i<str.length();i++){
            if(str[i] == str[i+1]){
                str2 += str[i+1];
                i++;
               
            }
        }
        str2 += str[str.length()-1];
        cout<<str2<<endl;


    }



    return 0;
}