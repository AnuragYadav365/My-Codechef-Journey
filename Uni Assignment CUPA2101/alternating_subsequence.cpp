//https://www.codechef.com/CUPA2101/problems/CHEFALT
//Anurag Yadav 20BCS5427

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        int N;
        cin >> N;

        int A[N], temp=0;
        for(int i=0; i<N; i++){
            cin >>A[i];
            if(A[i] > temp){
                temp = A[i];
            }
        }

        for(int j=0; j<N; j+=2){
            //cout << "\n loop for " << j << " started" << endl;
            int sum=A[j];
            for(int k=j+2; k<N; k+=2){
                //cout << A[k] << endl;
                sum+=A[k];
                //cout << "sum is " << sum;
                if(sum>temp){
                    //cout << "\ngreater than\n";
                    temp=sum;
                }
            }
        }
        for(int j=1; j<N; j+=2){
            //cout << "\n loop for " << j << " started" << endl;
            int sum=A[j];
            for(int k=j+2; k<N; k+=2){
                //cout << A[k] << endl;
                sum+=A[k];
                //cout << "sum is " << sum;
                if(sum>temp){
                    //cout << "\ngreater than\n";
                    temp=sum;
                }
            }
        }
        cout << temp;
    }
    return 0;
}