#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>
using namespace std;

int solveproblem(vector<int> v)
{
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		if (v[i] == 1)
		{
			count++;
		}
	}

	if (count == 2 || count > 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void solution(int n)
{
	int num = 0;

	vector<vector<int>> v(n, vector<int>(3));

	if (n == 0 || n < 0)
	{
		cout << "your input is not vaild";
		return;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{

			for (int j = 0; j < 3; j++)
			{

				v[i][j] = rand() % 2;
			}
			num += solveproblem(v[i]);
		}
		cout << "Total number of problem solve by friends group is :" << num << endl;
	}
}

int main()
{
	int n;
	cout << "how many problem is available?" << endl;
	srand(time(0));
	cin >> n;
	solution(n);

	return 0;
}