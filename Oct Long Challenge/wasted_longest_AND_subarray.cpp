#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int T;
    cin >> T;

    while(T--){
        long long int N;
        cin >> N;

        long long int count = 1, max=1;
        int i=1;
        while(i!=N){
            if((i & i+1) > 0){
                //cout << "greater than 0  " << i << endl;
                count++;
                if(count>max){
                    max=count;
                }
            }

            else
                count=1;
            i++;
        }
        cout << max << endl;
    }
    return 0;
}