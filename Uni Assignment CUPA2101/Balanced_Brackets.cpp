//https://www.codechef.com/CUPA2101/problems/BALBRACK
//Anurag Yadav 20BCS5427

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
        int N;
        cin >> N;

        string s;
        cin >> s;

        int right_count = 0;
        int left_count = 0;
        for(int i=0; i<N; i++){
            if(s[i]=='(')
                left_count++;
            else
                right_count++;
        }

        int temp = N - abs(left_count-right_count);
        cout << temp;
    }
    return 0;
}