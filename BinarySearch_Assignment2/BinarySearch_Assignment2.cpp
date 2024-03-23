#include<iostream>
using namespace std;
int main(){

    //answer 1
    // int a[] = {10,7,6,4,2,1};
    // int n = 6;
    // int tgt = 7;
    // int lo = 0;
    // int hi = n-1;
    // bool flag = false;
    // int ans = -1;
    // while(lo<=hi){
    //     int mid = lo + (hi-lo)/2;
    //     if(a[mid] == tgt){
    //         flag = true;
    //         ans = mid;
    //         break;
    //     }
    //     else if(a[mid]>tgt) lo = mid+1;
    //     else hi = mid-1; 
    // }
    // if(flag==false) cout<<"target not present";
    // else cout<<ans;

    //answer 2
    // int a[] = {1,2,4,5,6,8,9,11,14,15,17,18,19,20,21,22,23,24,25,26,28};
    // int lo = 0;
    // int hi = 1;
    // int tgt = 14;
    // while(lo<=hi){
    //     int mid = lo + (hi-lo)/2;
    //     if(a[mid] == tgt) {
    //         cout<<mid;
    //         break;
    //     }
    //     else if(a[mid]>tgt) hi = mid-1;
    //     else{
    //         lo = mid+1;
    //         hi *= 2;
    //     }
    //}

    //answer 3
    int matrix[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int m = 3;
    int n = 4;
    int target = 3;
    int lo = 0;
    int hi = m*n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        int row = mid/n;
        int col = mid%n;
        if(matrix[row][col] == target) {
            flag = true;
            break;
        }
        else if(matrix[row][col] > target) hi = mid-1;
        else lo = mid+1;
    }
    if(flag == false) cout<<"Not present";
    else cout<<"Present";
}