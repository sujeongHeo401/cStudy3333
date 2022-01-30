#include <vector>
#include <string>
#include <unordered_map> // 해쉬맵 사용 
#include <iostream> // 메인 출력용 

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
	string answer = "";
	unordered_map<string, int> temp;
	for (string name : participant) {
		// 해쉬 테이블에 key값으로 name 을 주고 값을 더함
		temp[name]++;
	}
	for (string name : completion)
	{
		// name key 로 접근하여 값을 감소
		temp[name]--;
	}
	// 처음부터 해쉬테이블 순회
	for (auto pair : temp)
	{
		if (pair.second > 0)
		{
			answer = pair.first;
			break;
		}
	}
	return answer;
}

int main() {
	vector<string> a = { "marina", "josipa", "nikola", "vinko", "filipa" };
	vector<string> b = { "josipa", "filipa", "marina", "nikola" };
	cout << solution(a, b) << endl;
	return 0;
}