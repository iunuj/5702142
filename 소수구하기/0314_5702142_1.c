#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	clock_t start = clock(); // �ڵ� ���� ���� �ð��� ����
	int result = 0;
	int k = 0; // ���� k�� �����
	for (int i = 2; i <= 100; i++)
	{
		for (k = 2; k < i; k++)
		{
			if (i % k == 0) break; // i�� k�� ���������� ���� 0�̸� �Ҽ��� �ƴ�
		}
		if (k == i) // �̶��� �Ҽ��̹Ƿ� ����� k�� ����
			result += k;
	}
	printf("1���� 100���� �Ҽ��� �� = %d\n", result); // �Ҽ��� ��� ���� �� ���
	clock_t end = clock(); // �ڵ� ���� ���� �ð� ����
	printf("Time: %lf\n", (double)(end - start)); // �ɸ� �ð��� ���
}