/* prog2_4, 有錯誤的程式  */
#include <stdio.h>   	
#include <stdlib.h>		

int main(void)
{
   printf("恩師好 我是學生陳賢家");
   printf("這是我的c300_16\n");
   char beep='\a';		/* 宣告字元變數beep，並設定其值為'\a' */
   printf("%c", beep);	/* 響一聲警告音 */
   printf("ASCII of beep=%d", beep);  /* 印出beep的ASCII值 */
   
   system("pause");
   return 0;
}
