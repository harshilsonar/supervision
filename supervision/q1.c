#include<stdio.h>
#include<conio.h>

void main()
{
	FILE*evenfile,*oddfile;
	
	int i;
	
	evenfile = fopen("enter even number.txt","w");

	oddfile = fopen("enter odd number.txt","w");

     if (evenfile == NULL || oddfile == NULL)
	  {
        printf("Error opening files.\n"); 
    }
	
	for(i=50;i<=70;i++)
	{
	 if (i% 2 == 0)
	  {
            fprintf(evenfile,"%d\n",i);
        }
		 else
		 {
            fprintf(oddfile,"%d\n",i);
        }
    }
    
    printf("Even and odd numbers written to files successfully.\n");
}
