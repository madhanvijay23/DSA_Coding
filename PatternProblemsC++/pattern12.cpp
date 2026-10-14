#include <bits/stdc++.h>
using namespace std;
void pattern12(int N){
    for (int i=1; i<=N; i++){
        for (int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        for (int j=1; j<=2*(N-i); j++){
            cout<<" "<<" ";
        }
        for (int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int N;
    cin>>N;
    pattern12(N);
    return 0;
}