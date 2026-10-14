#include <bits/stdc++.h>
using namespace std;
void pattern22(int N){
    for (int i=1; i<=2*N-1; i++){
        for (int j=1; j<=2*N-1; j++){
            int top = i-1;
            int left = j-1;
            int bottom= (2*N-2)-(i-1);
            int right = (2*N-2)-(j-1);
            int minDist = min(min(top,bottom),min(left,right));

            cout<<(N-minDist)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int N;
    cin>>N;
    pattern22(N);
    return 0;
}