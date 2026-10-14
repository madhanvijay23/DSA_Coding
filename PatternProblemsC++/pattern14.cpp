#include <bits/stdc++.h>
using namespace std;
void pattern14(int N){
    for (int i=0; i<=N-1; i++){
        for( char j='A'; j<='A'+i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int N;
    cin>>N;
    pattern14(N);
    return 0;
}