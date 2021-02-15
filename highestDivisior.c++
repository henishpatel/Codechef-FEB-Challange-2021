#include<bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define pi (3.141592653589793238)
#define ll long long
#define mod 1000000007
int largest(int arr[], int n) 
{ 
    int i; 
    int max = arr[0];   
    for (i = 1; i < n; i++) 
        if (arr[i] > max) 
            max = arr[i]; 
  
    return max; 
}
int main(){
    ll n;
    int ans;
    int arr[10] = {0,0,0,0,0,0,0,0,0,0};
    cin >> n;
    for(int i=1;i<=10;i++){
        if(n%i==0){
            arr[i] = i;
        }
    }
    cout << largest(arr,10);
}