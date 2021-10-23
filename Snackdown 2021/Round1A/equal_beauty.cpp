//https://www.codechef.com/SNCK1A21/problems/EQBEAUTY
//Anurag Yadav
//https://github.com/AnuragYadav365

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int T;
    cin >> T;
    while(T--){
        long long int N;
        cin >> N;

        long long int A[N];
        for(long long int i=0;  i<N; i++){
            cin >> A[i];
        }

        sort(A,A+N);

        if(N==2){
            cout << "0" << endl;
            continue;
        }

        else if(N==3){
            cout << min(A[1]-A[0], A[2]-A[1]) << endl;
            continue;
        }

        long long int temp1=0, temp2=0;
        for(long long i=0; i<N-1; i++){
            temp1 += abs(A[i]-A[(N-1)/2]);
        }

        for(long long j=1; j<N; j++){
            temp2 += abs(A[j]-A[1+(N-1)/2]);
        }

        long long int m = min(temp1, temp2);
        long long int x=1, y=N-2;

        long long int diff1, diff2;
        while(x<y){
            diff1=A[y]-A[0];
            diff2=A[N-1]-A[x];

            m=min(m, abs(diff1-diff2));

            if(diff1<diff2){
                x++;
            }
            else{
                y--;
            }
        }
        cout << m << endl;
    }
    return 0;
}