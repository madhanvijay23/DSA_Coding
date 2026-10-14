#include <bits/stdc++.h>
using namespace std;
void pattern17(int N){
    
    for (int i=1; i<=N; i++){
        
        for (int j=1; j<=N-i; j++){
            cout<<" ";
        }
        char ch='A';
        int breakpoint = (2*i-1)/2;
        for (int j=1; j<=(2*i)-1; j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
            
        }
        for (int j=1; j<=N-i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int N;
    cin>>N;
    pattern17(N);
    return 0;
}