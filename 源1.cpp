#include<stdio.h>

int main()
{
	char *p1[5] = {
		(char*)"�ñ�̸ı�����",
		(char*)"Just do it",
		(char*)"1111sss",
		(char*)"sdfsrdfvzxc",
		(char*)"dfdsflove"
	};
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", p1[i]);//��Ҫ�����ַ���
	}
	return 0;
}