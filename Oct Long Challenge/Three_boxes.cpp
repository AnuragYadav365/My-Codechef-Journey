#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        int A, B, C, D;
        cin >> A >> B >> C >> D;

        if(A<=D and A+B>D) cout << "3" <<endl;
        else if(A+B<=D and A+B+C>D) cout << "2" << endl;
        else cout << "1" << endl;
    }
    return 0;
}