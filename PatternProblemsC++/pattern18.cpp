#include <bits/stdc++.h>
using namespace std;
void pattern18(int N){
    
    for (int i=1; i<=N; i++){
        //char ch='A';
        for (char j='A'+(N-i); j<='A'+(N-1); j++){
            cout<<j<<" ";
            
        }
        cout<<endl;
    }

}
int main(){
    int N;
    cin>>N;
    pattern18(N);
    return 0;
}