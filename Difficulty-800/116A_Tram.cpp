#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    int count[n];
    int psngr = 0;
    
    for(int i = 0 ; i < n ; i++){
        int exit,enter;
        cin>>exit>>enter;
        if(exit < enter){
            psngr = psngr + (enter-exit);
            count[i] = psngr;
        }
        else if(enter<exit){
            psngr = psngr - (exit-enter);
            count[i] = psngr;
        }
        else{
            psngr = psngr;
            count[i] = psngr;
        }
 
    }
    int max = count[0];
    for(int i = 0 ; i < n ; i++){
        if(max<count[i]){
            max = count[i];
        }
    }
    cout<<max<<endl;



    return 0;
}