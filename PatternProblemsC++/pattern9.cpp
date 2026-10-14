#include <bits/stdc++.h>
using namespace std;
void pattern9(int N){
    for (int i=1; i<=N; i++){
        for (int j=1; j<=N-i; j++){
            cout<<" ";
        }
        for (int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        for (int j=1; j<=N-i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern10(int N){
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
    pattern9(N);
    pattern10(N);
    return 0;
}