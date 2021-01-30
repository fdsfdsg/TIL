//O(N) or O(N * log(N))
#include <bits/stdc++.h>

int solution(vector<int> &A) {
    sort(A.begin(),A.end());
    for(int i=0; i<A.size(); i++){
        if(A[i] != i+1){
            return 0;
        }
    }
    return 1;
}
}