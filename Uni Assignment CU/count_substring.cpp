//https://www.codechef.com/CUPP2101/problems/CSUB
//Anurag Yadav 20BCS5427

#include<bits/stdc++.h>
using namespace std;


int main(){

	//fastio
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	//number of test cases
	int T;
	cin >> T;

	while(T--){
		//size of string
		long long N;
		cin >> N;

		//input string S
		char S[N];
		cin>>S;

		//initializing a temp variable to count pair
		long long one_cnt=0;

		//check for occurences of 1
		//if found increase the count by 1
		long long i;
		for(i=0;i<N;i++){
    		if(S[i]=='1'){
				one_cnt++;
			}
     	}

		//to calculate the pairs
		//formula derived from hanshake mathematical method
		cout << (one_cnt*(one_cnt+1))/2 << endl;
	}

	return 0;
}
