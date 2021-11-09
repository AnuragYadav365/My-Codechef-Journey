//https://www.codechef.com/CUPA2101/problems/ARRQUERY
//Anurag Yadav
//https://github.com/AnuragYadav365

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,Q;
    cin >> n >> Q;

    long long int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    long long int count;
    while(Q--){
        long long int l,r,x;
        cin >> l >> r >> x;

        long long int count = -1;

        long long int left, right, mid;
        left=l-1;
        right=r-1;

        //Bin search
        while(left<=right){
            mid=((left+right)/2);
            if (a[mid]>=x){
                count=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        if (count==-1){
            cout<<"0\n";
        }
        else{
            cout<<(r-count)<<"\n";
        }
    }
    return 0;
}