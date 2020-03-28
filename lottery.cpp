#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int judge(int num[7],char x)
{
	int allnum[10] = {0};
	int i, j,temp;
	for (i = 0; i <= 6; i++)
	{
		allnum[num[i]] = 1;
	}
	if (x == 'A')
	{
		if (allnum[0] + allnum[1] + allnum[2] + allnum[3] == 4) return 1;
		else if (allnum[0] + allnum[1] + allnum[4] + allnum[5] == 4) return 1;
		else if (allnum[1] + allnum[3] + allnum[5] + allnum[7] == 4) return 1;
		else if (allnum[0] + allnum[2] + allnum[4] + allnum[6] == 4) return 1;
		else if (allnum[2] + allnum[3] + allnum[6] + allnum[7] == 4) return 1;
		else if (allnum[4] + allnum[5] + allnum[6] + allnum[7] == 4) return 1;
		else if (allnum[0] + allnum[2] + allnum[8] == 3) return 1;
		else return 0;
	}
	else if (x == 'B')
	{
		if (allnum[0] + allnum[1] + allnum[2] + allnum[3] == 4) return 1;
		else if (allnum[4] + allnum[5] + allnum[6] + allnum[7] == 4) return 1;
		else if (allnum[0] + allnum[1] + allnum[8] + allnum[9] == 4) return 1;
		else if (allnum[1] + allnum[3] + allnum[9] == 3) return 1;
		else return 0;
	}
	else if (x == 'C')
	{
		if (allnum[0] + allnum[1] + allnum[4] + allnum[5] == 4) return 1;
		else if (allnum[2] + allnum[3] + allnum[6] + allnum[7] == 4) return 1;
		else if (allnum[0] + allnum[1] + allnum[8] + allnum[9] == 4) return 1;
		else if (allnum[0] + allnum[4] + allnum[8] == 3) return 1;
		else return 0;
	}
	else if (x == 'D')
	{
		if (allnum[1] + allnum[5] + allnum[9] == 3) return 1;
		else if (allnum[1] + allnum[3] + allnum[5] + allnum[7] == 4) return 1;
		else if (allnum[0] + allnum[2] + allnum[4] + allnum[6] == 4) return 1;
		else return 0;
	}
	else if (x == 'E')
	{
		if (allnum[0] + allnum[1] + allnum[2] + allnum[3] == 4) return 1;
		else if (allnum[0] + allnum[1] + allnum[4] + allnum[5] == 4) return 1;
		else if (allnum[1] + allnum[3] + allnum[5] + allnum[7] == 4) return 1;
		else if (allnum[2] + allnum[3] + allnum[6] + allnum[7] == 4) return 1;
		else if (allnum[4] + allnum[5] + allnum[6] + allnum[7] == 4) return 1;
		else if (allnum[0] + allnum[2] + allnum[4] + allnum[6] == 4) return 1;
		else return 0;
	}
	else if (x == 'F')
	{
		if (allnum[0] + allnum[1] + allnum[2] + allnum[3] == 4) return 1;
		else if (allnum[4] + allnum[5] + allnum[6] + allnum[7] == 4) return 1;
		else if (allnum[0] + allnum[1] + allnum[8] + allnum[9] == 4) return 1;
		else return 0;
	}
}

void main()
{
	srand((int)time(0));
	char x;
	int num[7];
	int i, j, temp, mask, sum = 0,times;
	for (times = 1; times <= 10000; times++)
	{
		num[0] = 0, num[1] = 1;
		for (i = 2; i <= 6; i++)
		{
			num[i] = rand() % 10;
		}
		j = rand() % 6;
		switch (j)
		{
		case 0:x = 'A'; break;
		case 1:x = 'B'; break;
		case 2:x = 'C'; break;
		case 3:x = 'D'; break;
		case 4:x = 'E'; break;
		case 5:x = 'F'; break;
		}
		mask = judge(num, x);
		sum += mask;	
	}
	printf_s("%d", sum);
	system("pause");
}

