//https://www.codechef.com/START16C/problems/PASSORFAIL
//Anurag Yadav
//https://github.com/AnuragYadav365

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        int N, X, P,tot_correct=0,tot_wrong=0,final_mark=0;
        cin >> N >> X >> P;

        tot_correct=X*3;
        tot_wrong = (N-X)*-1;

        final_mark = tot_correct+tot_wrong;
        if(final_mark>=P){
            cout << "PASS" <<endl;
        }

        else{
            cout << "FAIL" << endl;
        }
    }
}