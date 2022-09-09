#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    int result = 0;
    for(int i = 0; i <a.length();i++){
        if(toupper(a[i]) == toupper(b[i])) result = 0;
        else if((toupper(a[i]) > toupper(b[i]))){
            result = 1;
            break;
        }
        else {
            result = -1;
        break;
        }
    }
    cout<<result<<endl;
    return 0;
}
