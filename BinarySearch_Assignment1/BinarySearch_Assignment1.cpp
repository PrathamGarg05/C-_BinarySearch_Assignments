#include<iostream>
#include<climits>
using namespace std;
int main(){
    //answer 1
    int arr[] = {1,2,3,3,4,4,4,50};
    int x = 4;
    int n = 8;
    int idx = -1;
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == x){
            idx = mid;
            lo = mid+1;
        }
        else if(arr[mid] < x) lo = mid+1;
        else hi = mid-1;
    }
    cout<<idx;

    //answer 2
    int arr[] = {0,0,0,0,0,0,0,1,1,1,1};
    int n = 11;
    int lo = 0;
    int hi = n-1;
    int left = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == 1){
            left = mid;
            hi = mid-1;
        }
        else if(arr[mid] == 0) lo = mid+1;
    }
    cout<<"number of 1's are "<<n-left;

    //answer 3
    int arr[4][4] = {{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,0}};
    int m = 4;
    int n = 4;
    int maxONE = 0;
    int row = 0;
    for(int i = 0;i<m;i++){
        int lo = 0;
        int hi = n-1;
        int left = -1;
        int count = 0;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[i][mid] == 1){
                left = mid;
                hi = mid-1;
            }
            else lo = mid+1;
        }
        if(left != -1) count = n-left;
        if(count > maxONE) {
            maxONE = count;
            row = i;
        }
    }
    cout<<"Row with maximum 1 is "<<row;

    //answer 4
    int arr[] = {1,2,3,4,5,5};
    int n = 6;
    int lo = 0;
    int hi = n-1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == mid+1) lo = mid+1;
        else hi = mid-1;
    }
    cout<<"repeated element is "<<arr[hi];

    //answer 5
    int n = 35;
    int lo = 0;
    int hi = n;
    bool flag = false;
    while(lo<=hi){
        long long mid = lo + (hi-lo)/2;
        if(mid*mid == n) {
            flag = true;
            break;
        }
        else if(mid*mid > n) hi = mid-1;
        else lo = mid+1; 
    }
    if(flag == true) cout<<"yes";
    else cout<<"no";

    //answer 6
    int n = 8;
    int lo = 1;
    int hi = n;
    int k =0;
    while(lo<=hi){
        long long mid = lo + (hi-lo)/2;
        if(mid*(mid+1)/2 <= n){
            k = mid;
            lo = mid+1;
        }
        else hi = mid-1;
    }
    cout<<k;
    
}