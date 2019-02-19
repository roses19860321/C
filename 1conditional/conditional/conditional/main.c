#include <stdio.h>
#define AG 687
#define E 91996  
//»ò 
//#define E

void condi1()
{
	#if 0
		printf("Áº¹ÚÃ÷È¥ËÀ£¡£¡\n");
	#else
		printf("1Áº¹ÚÃ÷ÆÆ²ú£¡£¡\n");
	#endif
}

void condi2()
{
	#if 1
		printf("2Áº¹ÚÃ÷È¥ËÀ£¡£¡\n");
	#else
		printf("Áº¹ÚÃ÷ÆÆ²ú£¡£¡\n");
	#endif
}

void condi3()
{
	#if (defined AG)
			printf("3Áº¹ÚÃ÷È¥ËÀ£¡£¡\n");
	#else
			printf("Áº¹ÚÃ÷ÆÆ²ú£¡£¡\n");
	#endif
}

void condi4()
{
	#if AG==687
		printf("4Áº¹ÚÃ÷È¥ËÀ£¡£¡\n");
	#elif
		printf("Áº¹ÚÃ÷ÆÆ²ú£¡£¡\n");
	#endif
}

void condi5()
{
	#ifdef E
			printf("5Áº¹ÚÃ÷È¥ËÀ£¡£¡\n");
	#else
			printf("Áº¹ÚÃ÷ÆÆ²ú£¡£¡\n");
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
