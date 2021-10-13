//https://www.codechef.com/SDPCB21/problems/KTTABLE
//Anurag Yadav
//https://github.com/AnuragYadav365

#include<bits/stdc++.h>
using namespace std;

int main(){

    //fastio
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //test cases
    int T;
    cin >> T;

    //loop
    while(T--){
        long long int N;
        cin >> N;

        long long int A[N]; //alloted time
        long long int B[N]; //required time

        for(long long int j=0; j<N; j++){
            cin >> A[j];
        }
        for(long long int j=0; j<N; j++){
            cin >> B[j];
        }

        int allot_time = A[0]-0;
        int req_time = 0;
        long long int valid_cnt=0;

        for(long long int i=0; i<N; i++){
            req_time=B[i];
            //cout << "allot time " << allot_time << " req_time " << req_time << endl;
            if(req_time<=allot_time){
                valid_cnt++;
            }
            allot_time=A[i+1]-A[i];
        }

        cout << valid_cnt << endl;
    }
    return 0;
}