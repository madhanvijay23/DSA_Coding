// Extract Digits from the given numbers//
#include <bits/stdc++.h>
using namespace std;
void Extract(int n){
    if( n==0){
        return ;
    }
    int ld = n%10;
    
    Extract(n/10);
    cout<<ld<<endl;

}
int main(){
    int n;
    cin>>n;
    Extract(n);
    return 0;
}