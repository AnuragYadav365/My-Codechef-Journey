#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int T;
    cin >> T;

    while(T--){
        long long int N;
        cin >> N;

        if(N==1){
            cout << "1" << endl;
            continue;
        }
        long long int factor=1;
        while(factor*2 <= N){
            factor*=2;
            //cout << "current factor is: " << factor << endl;
        }

        long long int ans = (N - factor) + 1;
        //cout << "ans is " << ans << endl;

        if(N == factor) cout << factor/2 << endl;
        else cout << max(ans, factor/2) << endl;
    }
    return 0;
}