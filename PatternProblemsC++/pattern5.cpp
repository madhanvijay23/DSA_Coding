#include <bits/stdc++.h>
using namespace std;
void pattern5(int N){
    for (int i=0; i<=N; i++){
        for (int j=1; j<=N-i; j++){
            cout<<"* ";
        }
        cout<<endl;
      }
}
int main(){
    int N;
    cin>>N;
    pattern5(N);
    return 0;
}