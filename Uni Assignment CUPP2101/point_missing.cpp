//https://www.codechef.com/CUPP2101/problems/BOOKCHEF
//Anurag Yadav

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        int N;
        cin >> N;

        long long int X[4*N-1];
        long long int Y[4*N-1];

        for(int i=0; i<(4*N-1); i++){
            cin >> X[i] >> Y[i];
        }
        sort(X, X+(4*N-1));
        sort(Y, Y+(4*N-1));

        int j=0;
        for(j; j<(4*N-1); j++){
            if(X[j]==X[j+1]){
                j++;
            }
            else{
                break;
            }
        }
        int X_pnt = X[j];

        j=0;
        for(j; j<(4*N-1); j++){
            if(Y[j]==Y[j+1]){
                j++;
            }
            else{
                break;
            }
        }
        int Y_pnt = Y[j];

        cout << X_pnt << " " << Y_pnt << endl;
    }
    return 0;
}