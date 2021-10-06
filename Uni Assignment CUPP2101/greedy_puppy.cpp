//https://www.codechef.com/CUPP2101/problems/GDOG
//Anurag Yadav 20BCS5427


#include<bits/stdc++.h>
using namespace std;

int main(){

    //number of test cases
    int T;
    cin >> T;

    //initializing required variables
    int N=0,K=0;

    //loop until there are 0 test cases
    while(T--){

        //max_coins temporary variable to check coins count
        int max_coins=0;

        //taking input of N and K values
        cin >> N >> K;

        //loop from 2 because if l=1,
        //then Tuzik will not get any coins
        for(int l=2; l<=K; l++){

            //left over coins by number of people
            int left_coins = N%l;

            //if the leftover coins in this case
            //is more than previous case
            //change the value of max_coins
            if(left_coins>max_coins){
                max_coins = left_coins;
            }
        }

        //output the maximum coins Tuzik can get
        cout << max_coins << endl;
    }
    return 0;
}