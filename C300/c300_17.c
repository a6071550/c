
#include <stdio.h>   	
#include <stdlib.h>		

int main(void)
{
   printf("®¦®v¦n §Ú¬O¾Ç¥Í³¯½å®a");
   printf("³o¬O§Úªºc300_18\n");
   float num1=123.45F;		/* úä”Ònum1ûnÅ|íå?Ş•Ñ?üGûn123.45F */
   float num2=4.56E-3F;	/* úä”Ònum2ûnÅ|íå?Ş•Ñ?üGûn4.56E-3F */   
   
   printf("num1=%e\n",num1); 	/* “lû\?úYúË?“ò“|num1úYüG */
   printf("num2=%f\n",num2); 	/* “lÅ|íå?úYúË?“ò“|num2úYüG */   
   
   system("pause");   
   return 0;
}
