#include <bits/stdc++.h>
using namespace std;

int N;
double arr[1000];
double sum = 0.0;�� 

int main(){
	cin >> N;
	double max_value = 0;
	for(int i=0; i<N; i++){
		cin >> arr[i];
		max_value = max(max_value, arr[i]);
	}
	for(int i=0; i<N; i++){
		sum += (double)((arr[i]/(double)max_value)*100);
	
	}
	
	cout <<fixed; //�Ҽ��� ����ϰ��� 
	cout.precision(2); //�ι����ڸ��� 
	cout << (double)(sum / N);
	
	return 0;
}
