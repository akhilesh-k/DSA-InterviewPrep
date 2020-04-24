#include <bits/stdc++.h>
using namespace std;
int main(){
    long int n,d,m,arr[1000000];
    cin>>n>>d;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    m=d%n;
    for(int i=0;i<n;i++)
    cout<<arr[(m+i)%n]<<" ";
    return 0;
}