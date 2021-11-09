//https://www.codechef.com/CUPA2101/problems/SACKNAP
//Anurag Yadav
//https://github.com/AnuragYadav365

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int T;
    cin >> T;
    while (T--)
    {
        long long int N, C, K;
        cin >> N >> C >> K;

        long long int W[N], i, j;

        for (i = 0; i < N; i++)
            cin >> W[i];

        long long int cnt=0, ans=0, sum=0;

        for (i=0; i<N; i++){
            cnt=0;
            sum=0;
            for (j=i; j<N; j++){
                sum = sum + W[j];
                cnt++;
                if (sum > C){
                    sum = sum - W[j];
                    cnt--;
                    break;
                }
            }
            if (sum<K){
                cnt = 0;
            }
            ans = max(cnt, ans);
        }
        cout << ans << endl;
    }
}