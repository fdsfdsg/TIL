#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int count = 1;
	
	if(n>3){
		for(int i=4; i<=n; i++){
			count += 2;
		}	
	}
	for(int j=0; j<(n*2)-1; j++){
		
		if(j>0 && j<n-1){ // ����� �� 
			for(int i=0; i<j; i++){
				cout << " ";
			}
			cout << "*";
			for(int i=0; i<n-2; i++){
				cout << " ";
			}
			cout << "*";
			
			for(int i=0; i<count; i++){
				cout << " ";
			}
			cout << "*";
			for(int i=0; i<n-2; i++){
				cout << " ";
			}
			cout << "*";
			count-=2;
		}
		if(j==n-1){ // ��� 
			count+=2;
			for(int i=0; i<n-1; i++){
				cout << " ";
			}	
			cout << "*";
			for(int i=0; i<n-2; i++){
				cout << " ";
			}
			cout << "*";
			for(int i=0; i<n-2; i++){
				cout << " ";
			}
			cout << "*";
		}
		if(j>n-1 && j<(n*2)-2){ // ����� �Ʒ� 
			for(int i=j; i<(n*2)-2; i++){
				cout << " ";
			}
			cout << "*";
			for(int i=0; i<n-2; i++){
				cout << " ";
			}
			cout << "*";
			
			for(int i=0; i<count; i++){
				cout << " ";
			}
			cout << "*";
			for(int i=0; i<n-2; i++){
				cout << " ";
			}
			cout << "*";
			count+=2;
		} 
		if(j==0 ||j==(n*2)-2){  //�� ��, �� �Ʒ�
			for(int i=0; i<n; i++){  
				cout << "*"; 
			}
			for(int i=0; i<(n*2)-3; i++){  
				cout << " ";
			}		
			for(int i=0; i<n; i++){
				cout << "*";		
			}	
		} 	
		cout << "\n";
	}
	return 0;
}
