#include<stdio.h>

int main()
{
	char *p1[5] = {
		(char*)"让编程改变世界",
		(char*)"Just do it",
		(char*)"1111sss",
		(char*)"sdfsrdfvzxc",
		(char*)"dfdsflove"
	};
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", p1[i]);//需要的是字符串
	}
	return 0;
}