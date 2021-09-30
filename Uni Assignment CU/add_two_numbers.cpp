//https://www.codechef.com/CUPP2101/problems/FLOW001
//Anurag Yadav 20BCS5427

#include<bits/stdc++.h>
using namespace std;

int main(){

    //number of test cases
    int T;
    cin >> T;

    //initializing required variables
    //A and B for taking two integer values
    int A=0, B=0;
    int sum = 0;

    //loop until T becomes 0
    while(T--){
        //take input values of A and B
        cin >> A >> B;

        //get sum by adding both inputted numbers
        sum = A + B;
        //display the sum in each test case
        cout << sum << endl;
    }
    return 0;
}