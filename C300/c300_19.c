
#include <stdio.h>   	
#include <stdlib.h>		

int main(void)
{
   printf("���v�n �ڬO�ǥͳ���a");
   printf("�o�O�ڪ�c300_20\n");
  char ch;			/* ��ҔY?�]?ch */
   float num;			/* ����|��?�]?num */	
   
   printf("sizeof(2L)=%d\n",sizeof(2L));	/* ڨ��??2L?���x?? */
  
   printf("sizeof(ch)=%d\n",sizeof(ch));	/* ڨ���Y?�]?ch?���x?? */
   printf("sizeof(num)=%d\n",sizeof(num));	/* ڨ���]?num?���x?? */

   printf("sizeof(int)=%d\n",sizeof(int));	/* ڨ��int��??���x?? */
   printf("sizeof(long)=%d\n",sizeof(long));	/* ڨ��long��??���x?? */
   printf("sizeof(short)=%d\n",sizeof(short));	/* ڨ��short?���x?? */

   system("pause");
   return 0;
}
