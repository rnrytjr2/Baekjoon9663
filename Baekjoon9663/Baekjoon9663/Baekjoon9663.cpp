// Baekjoon9663.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
int answer;
int checkers[15];
int N;

void Queen(int count);

int main()
{
	cin >> N;
	Queen(0);
	cout << answer;
}
void Queen(int count)
{
	if (count == N)
	{
		answer++;
		return;
	}
	for (int i = 0; i < N; i++)
	{
		checkers[count] = i;
		bool check = true;
		for (int j = 0; j < count; j++)
		{
			int checker = checkers[count] - checkers[j];
			if (checker < 0)
			{
				checker *= -1;
			}
			if (checkers[count] == checkers[j] ||count - j == checker)
			{

				check = false;
				break;
			}
		}
		if (check)
		{
			Queen(count + 1);
		}
	}
}