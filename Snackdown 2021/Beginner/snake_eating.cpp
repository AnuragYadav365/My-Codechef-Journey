//https://www.codechef.com/SDPCB21/problems/SNAKEEAT
//Anurag Yadav
//https://github.com/AnuragYadav365

#include<bits/stdc++.h>
using namespace std;

int main(){

    //fastio
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T--){
        long long int N, Q;
        cin >> N >> Q;

        long long int L[N];
        for(long long int i=1; i<=N; i++){
            cin >> L[i];
        }

        sort(L+1, L+1+N);

        long long int temp_arr[N];
        for(long long int i=1; i<=N; i++){
            temp_arr[i] =temp_arr[i-1]+L[i];
        }

        while(Q--){
            long long int K;
            cin >> K;

            int index = lower_bound(L+1, L+1+N , K)-L-1;
            int total = N - index;
            int counter=0, temp = index;

            int mid;
            //binary search
            while(counter<temp){
                mid= (counter+temp+1)>>1;

                long long int a = index-mid;
                long long int temp_snake = temp_arr[index]-temp_arr[index-mid];

                temp_snake=(K*mid)-temp_snake;

                if(a>=temp_snake){
                    counter=mid;
                }

                else{
                    temp = mid-1;
                }
            }
            cout << total+1 << endl;
        }
    }
    return 0;
}