#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,3,6,4,7};
    bool b;
    int key = 7;
    int ans;
    for(int i=0;i<5;i++){
        if(arr[i] == key){
            b = true;
            ans = i;
        }
    }
    if(b == true){
        cout<<"Element found at index :"<<ans;
    }
}
