#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	clock_t start = clock(); // 코드 실행 시작 시간을 저장
	int result = 0;
	int k = 0; // 변수 k로 만들기
	for (int i = 2; i <= 100; i++)
	{
		for (k = 2; k < i; k++)
		{
			if (i % k == 0) break; // i를 k로 나누었을때 값이 0이면 소수가 아님
		}
		if (k == i) // 이때는 소수이므로 결과에 k를 더함
			result += k;
	}
	printf("1부터 100까지 소수의 합 = %d\n", result); // 소수를 모두 더한 값 출력
	clock_t end = clock(); // 코드 실행 종료 시간 저장
	printf("Time: %lf\n", (double)(end - start)); // 걸린 시간을 출력
}