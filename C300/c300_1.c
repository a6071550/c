/* prog1_1, 第一個C程式碼 */ 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 
   printf("恩師好 我是學生陳賢家");
   printf("這是我的c300_1\n");
   char ch;
   printf("Input a character:");
   scanf("%c",&ch);	  /*由鍵盤輸入字元並指定給變數ch*/
   printf("ch=%c, The ASCII code is %d\n",ch,ch);
   system("pause");
   return 0; 
}

