					
#include<stdio.h>
int i,j,n;

void staircase(int n){
	
  for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("#");
		}
		printf("\n");
	}
}

int main()
{
	
staircase(6);
  
}
			
			
