#include <stdio.h>
#include <string.h>

int main()
{
	char key[80] = "사과";
	char buffer[80] = { 0, };
	int result;

	while (1)
	{
		printf("내가 제일 좋아하는 과일은? ");
		scanf_s("%s", buffer, 80);
		result = strcmp(key, buffer);
		if (result == 0)
		{
			printf("맞았습니다.\n");
			break;
		}
	}
}