#include <bits/stdc++.h>

int solution(vector<int> &A) {
    sort(A.begin(),A.end());
    for(int i=0; i<A.size(); i+=2){
        if(A[i] != A[i+1]){
            return A[i];
        }
    }
}
