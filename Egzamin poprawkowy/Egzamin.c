					
#include<stdio.h>
int i,j,k,n;

void staircase(int n){
	
  for(i=1;i<=n;i++)
	{
    for(k=n-i;k>0;k--)
        {
          printf(" ");
        }
		for(j=1;j<=i;j++)
		  {
		  	printf("#");
		  }
	  printf("\n");
    
	}
  
}

int main()
{
	
staircase(10);
  
}
			
			
