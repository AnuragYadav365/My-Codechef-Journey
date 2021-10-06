//https://www.codechef.com/CUPA2101/problems/CHEDIV
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
        //N--> Number of elements
        //X--> Number must be less than this value
        //Y--> Number must be divisible by this value
        int N, X, Y;
        cin >> N >> X >> Y;

        int A[N];
        //counter variable
        int count=0;

        //taking N value for Array A
        for(int i=0; i<N; i++){
            cin >> A[i];

            //subsequently, checking for the condition
            //if value is <= X value and
            //value is divisible by Y value
            if(A[i]<=X and A[i]%Y==0){
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}