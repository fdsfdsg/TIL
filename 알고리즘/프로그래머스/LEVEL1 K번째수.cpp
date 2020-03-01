#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    for(int i=0; i<commands.size(); i++){
        int slice_s = commands[i][0]-1;
        int slice_e = commands[i][1]-1;
        for(int j=slice_s; j<=slice_e; j++){
            temp.push_back(array[j]);
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp[commands[i][2]-1]);
        temp.clear();
    }
    
    return answer;
}