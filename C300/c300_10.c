/* prog2_4, 有錯誤的程式  */
#include <stdio.h>   	
#include <stdlib.h>		

int main(void)
{
   printf("恩師好 我是學生陳賢家");
   printf("這是我的c300_10\n");
   short sum,s=32767;        /* 宣告短整數變數sum與s */
   
   sum=s+1;
   printf("s+1= %d\n",sum);	/* 列印出sum的值 */
   
   sum=s+2;
   printf("s+2= %d\n",sum); 	/* 列印出sum的值 */   

   system("pause");
   return 0;
} 


