#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {12,13,3,9,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    //sort the array by this we will have smallest element in starting and largest at end and we can subtract them to find the largest differnce
    sort(begin(arr), end(arr));
    int diff = arr[n-1] - arr[0];
    cout<<diff<<endl;
}