#include <stdio.h>
#include <string.h>

int main()
{
	char key[80] = "���";
	char buffer[80] = { 0, };
	int result;

	while (1)
	{
		printf("���� ���� �����ϴ� ������? ");
		scanf_s("%s", buffer, 80);
		result = strcmp(key, buffer);
		if (result == 0)
		{
			printf("�¾ҽ��ϴ�.\n");
			break;
		}
	}
}