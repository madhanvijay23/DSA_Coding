#include <bits/stdc++.h>
using namespace std;
void pattern16(int N){
    for (char i='A'; i<='A'+N-1; i++){
        for (int j='A'; j<=i; j++){
            cout<<i<<" ";     
        }
        cout<<endl;
    }
}
int main(){
    int N;
    cin>>N;
    pattern16(N);
    return 0;
}