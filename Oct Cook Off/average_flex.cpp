//https://www.codechef.com/COOK134C/problems/AVGFLEX
//Anurag Yadav
//https://github.com/AnuragYadav365

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        int N, cnt=0;
        cin >> N;

        int A[N];
        for(int i=0; i<N; i++){
            cin >> A[i];
        }

        int l_than, m_than;
        for(int k=0; k<N; k++){
            l_than=0, m_than=0;
            for(int j=0; j<N; j++){
                if(A[j]<=A[k]){
                    l_than++;
                }

                if(A[j]>A[k]){
                    m_than++;
                }
            }

            if(l_than>m_than){
                cnt++;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}