#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,res=0,arr[100];
    cin >> n;
    for(int i=0;i<=n;i++)
    cin>>arr[i];
    for(int i=0;i<(n-1);) 
    arr[i+2]?(res++,i++):(res++,i+=2); // Simple approach, it checks all the (i+2)th element and         
    cout<<res;
    return 0;
}