#include <stdio.h>
#include <stdlib.h>
#define COUNT 10 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int data[COUNT];
	int i,j;
	int temp; //���������ϱ�
	
	printf("���� 10���� �Է��Ͻÿ�: ");
	
	for (i=0;i<COUNT;i++)
	{
		scanf("%d",&data[i]);
	}
	 
	 printf("\n\n���: ");
	 
	 for(j=0; j<COUNT; j++)
   {
      printf("%d ", data[j]);
   }
	
	return 0;
}




