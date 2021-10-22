//https://www.codechef.com/SNCK1A21/problems/MINLCM1
//Anurag Yadav
//https://github.com/AnuragYadav365

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int T;
    cin >> T;

    while(T--){
        long long int X, K;
        cin >> X >> K;
        K=X*K;

        cout << (X*2) << " " << (K-1)*K;
        cout << endl;
    }
    return 0;
}