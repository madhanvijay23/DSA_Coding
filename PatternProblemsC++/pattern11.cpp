#include <bits/stdc++.h>
using namespace std;
void pattern11(int N){
    int start = 1;
    
    for (int i=1; i<=N; i++){
        if(i%2==0) start=0;

        for (int j=1; j<=i; j++){
            cout<<start<<" ";
            start = 1-start;
        }
        cout<<endl;

    }
}
int main(){
    int N;
    cin>>N;
    pattern11(N);
    return 0;
}