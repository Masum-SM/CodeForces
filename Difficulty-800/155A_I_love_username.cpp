#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int count = 0;
    int parameter_min = arr[0];
    int parameter_max = arr[0];

    for(int i = 1 ; i < n ; i++){
        if(arr[i]< parameter_min){
            count++;
            parameter_min = arr[i];
        }
        if(arr[i]>parameter_max){
            count++;
            parameter_max = arr[i];
        }
    }
    cout<<count<<endl;

    return 0;
}