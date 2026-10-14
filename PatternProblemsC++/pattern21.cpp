#include <bits/stdc++.h>
using namespace std;
void pattern21(int N){

    for (int i=1; i<=N; i++){
        for (int j=1; j<=N; j++){
            if(i==1 || i==N || j==1 || j==N)
            cout<<"* ";
            else cout<<" "<<" ";
        }
        cout<<endl;

    }
}
int main(){
    int N;
    cin>>N;
    pattern21(N);
    return 0;
}