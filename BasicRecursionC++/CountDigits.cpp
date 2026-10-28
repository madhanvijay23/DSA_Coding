//Counting the digits from the given number//
#include <bits/stdc++.h>
using namespace std;
int count(int cnt,int n){
    if (n==0) return cnt;
    cnt = cnt + 1;
    return count(cnt,n/10);
}
int main(){
    int n;
    cin>>n;
    cout<<count(0,n);
    return 0;
}