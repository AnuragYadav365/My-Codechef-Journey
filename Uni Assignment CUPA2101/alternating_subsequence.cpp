//https://www.codechef.com/CUPA2101/problems/CHEFALT
//Anurag Yadav 20BCS5427

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int T;
    cin >> T;

    while(T--){
        long long int N;
        cin >> N;

        long long int A[N], ev_sum=0, odd_sum=0, max_num=0;
        for(int i=0; i<N; i++){
            cin >> A[i];
            if(i%2==0){
                ev_sum+=A[i];
                if(A[i]>max_num){
                    max_num = A[i];
                }
            }
            else{
                odd_sum+=A[i];
                if(A[i]>max_num){
                    max_num = A[i];
                }
            }
        }

        if(max(ev_sum, odd_sum)<max_num){
            cout << max_num << endl;
        }
        else{
            cout << max(ev_sum, odd_sum) << endl;
        }
    }
    return 0;
}