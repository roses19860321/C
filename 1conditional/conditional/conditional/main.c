#include <stdio.h>
#define AG 687
#define E 91996  
//�� 
//#define E

void condi1()
{
	#if 0
		printf("������ȥ������\n");
	#else
		printf("1�������Ʋ�����\n");
	#endif
}

void condi2()
{
	#if 1
		printf("2������ȥ������\n");
	#else
		printf("�������Ʋ�����\n");
	#endif
}

void condi3()
{
	#if (defined AG)
			printf("3������ȥ������\n");
	#else
			printf("�������Ʋ�����\n");
	#endif
}

void condi4()
{
	#if AG==687
		printf("4������ȥ������\n");
	#elif
		printf("�������Ʋ�����\n");
	#endif
}

void condi5()
{
	#ifdef E
			printf("5������ȥ������\n");
	#else
			printf("�������Ʋ�����\n");
	#endif
}


int main()
{
	condi1();
	condi2();
	condi3();
	condi4();
	condi5();
	return 0;
}
