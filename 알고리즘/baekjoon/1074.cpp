#include <bits/stdc++.h>
using namespace std;

int r,c;
int cnt = 0;

void Z(int s, int a,int b){
	if(s!=2){
		for(int i=a; i<a+s; i+=s/2){
			for(int j=b; j<b+s; j+=s/2){
				Z(s/2,i,j);
			}
		}
	} else {
		if(a==r && b==c){ //1��и�  
			cout<<cnt; 
			return ;
		}
		cnt++;
		if(a==r && b+1==c){ //2��и� 
			cout<<cnt;
			return ;
		}
		cnt++;
		if(a+1==r && b==c){ //3��и�
			cout<<cnt;
			return ;
		}
		cnt++;
		if(a+1==r && b+1==c){ //4��и�
			cout<<cnt;
			return ;
		}
		cnt++;
	}
}

int main(){
	
	int N;
	cin >> N >> r >> c;
	N = pow(2,N);

	Z(N,0,0);
	
	return 0;
}
