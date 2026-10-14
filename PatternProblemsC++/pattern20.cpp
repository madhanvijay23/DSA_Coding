#include <bits/stdc++.h>
using namespace std;
void pattern20(int N){
    
    int iniS = (2*N)-2;
    for (int i=1; i<=2*N-1; i++){
        int stars = i;
        if(i>N) stars = 2*N-i;
        for (int j=1; j<=stars; j++){
            
            cout<<"*";
        }
        for (int j=1; j<=iniS; j++){
            cout<<" ";
        }
        for (int j=1; j<=stars; j++){
            cout<<"*";
        }
        if(i<N) iniS -=2;
        else iniS +=2;

        cout<<endl;
    }
    
}
int main(){
    int N;
    cin>>N;
    pattern20(N);
    return 0;
}