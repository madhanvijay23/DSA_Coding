#include <bits/stdc++.h>
using namespace std;
void pattern8(int N){
    for (int i=1; i<=N; i++){
        for (int j=1; j<=i-1; j++){
            cout<<" ";
        }
        for (int j=1; j<=2*N-((2*i)-1); j++){
            cout<<"*";
        }
        for (int j=1; j<=i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int N;
    cin>>N;
    pattern8(N);
    return 0;
}