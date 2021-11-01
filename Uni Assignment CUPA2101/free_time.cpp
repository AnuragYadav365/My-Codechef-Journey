#include <bits/stdc++.h>
using namespace std;

int main(){

    //fastio
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, m;
    cin >> n >> m;

    array<long long int, 2> alice[n], bob[m];
    for (long long int i = 0; i < n; i++){
        cin >> alice[i][0] >> alice[i][1];
    }

    for (long long int j = 0; j < m; j++){
        cin >> bob[j][0] >> bob[j][1];
    }

    sort(alice, alice + n);
    sort(bob, bob + m);

    long long int atime = 0, btime = 0;
    long long int cnt = 0;

    int max_temp=0, min_temp=0;

    while ((atime < n) && (btime < m)){
        max_temp = max(alice[atime][0], bob[btime][0]);
        min_temp = min(bob[btime][1], alice[atime][1]);

        if (min_temp > max_temp){
            cnt = cnt + min_temp - max_temp;
        }

        if (alice[atime][1] > bob[btime][1])
            btime += 1;
        else
            atime += 1;
    }
    cout << cnt;
    return 0;
}