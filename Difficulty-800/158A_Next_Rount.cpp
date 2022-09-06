#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,pos,c=0;
    cin>>num>>pos;
    int arr[num];
    for(int i = 1; i<=num ; i++){
        cin>>arr[i];
    }
    for(int i = 1; i<=num ; i++){
        if(arr[i]>=arr[pos] && arr[i]>0)c++;
    }
    cout<<c<<endl;


    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,pos,c=0;
    cin>>num>>pos;
    int arr[num];
    for(int i = 1; i<=num ; i++){
        cin>>arr[i];
    }
    for(int i = 1; i<=num ; i++){
        if(arr[pos]>0){
           if(arr[i]>=arr[pos])c++;
        }else if(arr[pos]==0){
            if(arr[i]>arr[pos])c++;
        }
        
    }
    cout<<c<<endl;


    return 0;
}

*/