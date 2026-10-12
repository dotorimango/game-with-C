//컴퓨터는 임의의 숫자를 결정하고(1~100)
//플레이어는 숫자를 입력하고 임의의 숫자보다 낮으면 "Low"를 출력
//임의의 숫자보다 크면 "High" 출력
//같으면 맞았습니다 라고 출력
//이때, 숫자를 몇번에 맞췄는지 출력

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int com;
	int player;
	int count = 0;

	srand(time(NULL));
	com = rand() % 100 + 1;
	while (1)
		{
			count++;
			printf("In put your num:");
			scanf_s("%d", &player);

			if (player < com)
			{
				printf("Low\n");
			}
			else
			{
				if (player > com)
				{
					printf("High\n");
				}
				else
				{
					printf("Your correct\n");
					printf("total time %d", count);
					break;
				}

			}
		}
	system("pause");
	return 0;

}