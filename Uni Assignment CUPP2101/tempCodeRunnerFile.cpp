//https://www.codechef.com/CUPP2101/problems/HORSES
//Anurag Yadav
//https://github.com/AnuragYadav365

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        long long int N;
        cin >> N;

        long long int S[N];
        for(int i =0; i<N; i++){
            cin >> S[i];
        }

        int min = 1000000001;
        for(int j=0; j<N; j++){
            for(int k=j; k<N; k++){
                if(abs(S[j] - S[k])<min){
                    min=abs(S[j] - S[k]);
                }
            }
        }
        cout << min << endl;
    }
}