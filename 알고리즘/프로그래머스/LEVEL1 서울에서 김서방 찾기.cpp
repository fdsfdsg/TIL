#include <string>
#include <vector>
using namespace std;
string solution(vector<string> seoul) {
    string answer = "";
    for(int i=0; i<seoul.size(); i++){
        if(seoul[i] == "Kim"){
            string str = to_string(i);
            answer = "�輭���� "+ str +"�� �ִ�";
            return answer;
        }
    }
}