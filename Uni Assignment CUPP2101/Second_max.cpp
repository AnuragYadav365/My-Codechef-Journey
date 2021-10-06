//https://www.codechef.com/CUPP2101/problems/SNDMAX
//Anurag Yadav


#include<bits/stdc++.h>
using namespace std;

int main(){

    //N is the number of triplets
    int N;
    cin >> N;

    //declare triplet variable array
    int triplet[3];

    //take input of each triplet for range N
    for(int i=0; i<N; i++){

        //since triplet consists 3 elements
        //take only 3 inputs
        cin >> triplet[0] >> triplet[1] >> triplet[2];

        //since we know the size of triplet would be 3
        //no need to calculate manually

        //use sort() stdl function to sort the triplet
        sort(triplet, triplet+3);

        //print 2nd element as it will be the second maximum element
        //in a sorted triplet
        cout << triplet[1] << endl;
    }
    return 0;
}