#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	vector<int> n1;
	vector<int> n2;
	
	for(int i=1; i<=a; i++){
		if(a % i == 0){
			n1.push_back(i);
		}
	}
	for(int i=1; i<=b; i++){
		if(b % i == 0){
			n2.push_back(i);
		}
	}
	int _gcd = 0;
	//�ִ� ����� ���ϱ� 
	while(1){
		if(n1.back() > n2.back()){
			n1.pop_back();
		} else if(n1.back() < n2.back()){
			n2.pop_back();
		} else {
			_gcd = n1.back(); // n2.back()�� �Ǿ �������. 
			break; 
		}
	}
	cout << _gcd << "\n" << (a/_gcd) * (b/_gcd) * _gcd;
	
	return 0;
}
