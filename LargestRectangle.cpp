//********nikhiljugale007**********//

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<set>
#include<iterator>

using namespace std;

#define fast        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll          long long 
#define v           vector<ll int>
#define it          iterator it
#define pb          push_back
#define f(a,b)      for(long long int i=a;i<b;i++)
#define fv(v)       for(auto i=v.begin() ; i!=v.end();i++)
#define min         min_element
#define max         max_element
#define hell        1000000007


int leftCount(int arr[],int pos){
    int temp = arr[pos];
    int count = 0;
    for(int i=pos-1;i>=0;i--){
        if(arr[i]>=temp){
            count++;
        }
        else{
            break;
        }
    }
    return count;
}
int rightCount(int arr[],int pos,int n){
    int temp = arr[pos];
    int count = 0;

    for(int i=pos+1;i<n;i++){
        if(arr[i]>=temp){
            count++;
        }
        else{
            break;
        }
    }
    return count;
}
int main(){

    fast;

    ll n;
    cin>>n;
    int arr[n];
    f(0,n){
        cin>>arr[i];
    }

    int result = 0;
    for(int i=0;i<n;i++){
        int left = leftCount(arr,i);
        int right = rightCount(arr,i,n);

        int max = arr[i]*(left+right+1);
            if(max>result){
            result = max;
        }
    }
    cout<<result<<endl;
}
