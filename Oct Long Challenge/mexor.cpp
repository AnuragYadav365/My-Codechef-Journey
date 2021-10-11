//https://www.codechef.com/OCT21C/problems/MEXOR
//Anurag Yadav
//https://github.com/AnuragYadav365

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        int X;
        cin >> X;

        int flag = 1, counter = 0;
        int temp = X;

        if(temp == 0){
            cout << "1" << endl;
            continue;
        }

        while(temp != 0){
            if(temp%2 == 0){
                flag = 0;
            }
            temp/=2;
            counter++;
        }


        if(flag==1){
            cout << X+1 << endl;
        }

        else{
            int s=0;
            counter--;
            while(counter--){
                //getting two's mutliple
                s+=pow(2,counter);
            }

            cout << s+1 << endl;
        }
    }
    return 0;
}