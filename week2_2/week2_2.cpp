#include<stdio.h>
int main()
{
	int input1, input2;
	scanf_s("%d%d", &input1, &input2);
	if (input1 < input2)
	{
		for (int i = input1; i <= input2; i++)
		{
			printf("%d ", i);
		}
	}
	else
	{
		for (int i = input1 ;i >= input2; i--)
		{
			printf("%d ", i);
		}
	}
	return 0;
}