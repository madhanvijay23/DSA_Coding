#include <bits/stdc++.h>
using namespace std;
void pattern15(int N){
    for (int i=1; i<=N; i++){
        for (char j='A'; j<='A'+(N-i); j++){
            cout<<j<<" ";
            }
                      cout<<endl;
    }
}
int main(){
    int N;
    cin>>N;
    pattern15(N);
    return 0;

}