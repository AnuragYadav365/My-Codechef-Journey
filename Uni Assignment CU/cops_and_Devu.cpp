//https://www.codechef.com/CUPP2101/problems/COPS
//Anurag Yadav 20BCS5427

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    int x,y,M;
    while(T--){
        cin >> M >> x >> y;
        int tot_house=x*y;

        int house[101] = {0};
        int cop_at=0;
        for(int i=0; i<M; i++){
            cin >> cop_at;

            int lower = max(cop_at-tot_house, 1);
            int upper = min(cop_at+tot_house,100);

            for(int j=lower; j<upper+1; j++){
                house[j]=1;
            }
        }

        int safe_house=0;
        for(int k=1; k<101; k++){
            //cout << k << " k at is " << house[k] <<endl;
            if(house[k]==0){
                safe_house++;
            }
        }
        cout << safe_house <<endl;
    }
    return 0;
}