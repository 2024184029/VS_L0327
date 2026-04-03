#include <iostream>
#include <vector>

using namespace std;

using byte = unsigned char;
using uint64 = unsigned long long; // 2^32까지만 받을 수 있는 int는 불가능

int main()
{
	uint64 X = 0;
	int N = 0;
	int Result = 0;

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> X;
		for (int j = 0; j < 63; j++)
		{
			//if (X < pow(2, j)) 
			// // 제곱해주는 함수 pow 써도 되지만 
			// ==> Shift 연산해서 제곱해줌
			uint64 NPOT = (1 << j);
			if (X < NPOT)
			{
				Result = Result ^ NPOT;
				break;
			}
		}
	}
	cout << Result;
}

// ----------------------------------------

// 지도 한 변 n ( 1 <= n <= 16 )
// 정수 배열 2개 arr1, arr2

void Map(int n, int arr1[], int arr2[], int PassWord[16])
{
	// 길이 n인 정수 배열 입력 받음
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int Compare = arr1[i] | arr2[i];
		// 하나라도 벽이면 벽, 모두 공백이면 공백
		
	}

	for (int j = n-1; j < n; j++)
	{



	}
}

int main()
{

}