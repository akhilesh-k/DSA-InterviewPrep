//Selection Sort

#include<iostream>
using namespace std;
int main(){
    int arr={2,8,5,3,9,4,1};
// Selecting the Minimum elements    
    for(int i=0;i<sizeof(arr);i++){
        int min=i;
        for(int j=i+1;j<sizeof(arr);j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    cout<<"Sorted Array"<<endl;
    for(int i=0;i<sizeof(arr);i++)
    cout<<arr[i]<<" ";
}