#include<stdio.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}
int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	return 0;
}
//int main()
//{
//	float f = 5.5f;
//	return 0;
//}