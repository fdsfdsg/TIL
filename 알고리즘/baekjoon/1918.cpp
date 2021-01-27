#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin >> str;
	string result;
	stack<char> s;

	for (int i = 0; i < str.length(); i++)
	{
		if ('A' <= str[i] && str[i] <= 'Z') {
			result += str[i];
		} else {
			switch (str[i]){
				case '(':
					s.push(str[i]);
					break;
				case '*':
				case '/':
					//�켱���� ���� �����Ƿ� ���� ��ȣ�� pop
					while (!s.empty() && (s.top() == '*' || s.top() == '/'))
					{
						result += s.top();
						s.pop();
					}
					s.push(str[i]);
					break;
				case '+':
				case '-':
					//�켱���� ���ų� ���� ��ȣ�� pop
					while (!s.empty() && s.top() != '(')
					{
						result += s.top();
						s.pop();
					}
					s.push(str[i]);
					break;
				case ')':
					//'('�� ���� ������ �� pop
					while (!s.empty() && s.top() != '(')
					{
						result += s.top();
						s.pop();
					}
					//'(' pop
					s.pop();
					break;
			}
		}
	}
	while (!s.empty())
	{
		result += s.top();
		s.pop();
	}
	cout << result;
	return 0;
}
