#include <bits/stdc++.h>
using namespace std;
void pattern6(int N){
    for (int i=1;i<=N;i++){
        for (int j=N;j>=i;j--){
            cout<<N-(j-1)<<" ";
        }
        cout << endl;
    }
}
int main(){
    int N;
    cin>>N;
    pattern6(N);
    return 0;
}