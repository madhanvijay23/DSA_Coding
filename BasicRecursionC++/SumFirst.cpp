//Sum of First N natural numbers//
#include <bits/stdc++.h>
using namespace std;
int Sum(int N){
    if(N==0){
        return 1;
    }
    return N + Sum(N-1);
}
int main(){
    int N;
    cin>>N;
    cout<<Sum(N);
}