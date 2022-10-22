#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,length,count;
	char string[100];
	printf("Enter the string :\n");
	gets(string);
	printf("Frequency of letters in the string:\n");
	length=strlen(string);
	for(i=0;i<length;i++)
	{
    count=1;
		if(string[i])
		{
 			for(j=i+1;j<length;j++)  
	    {    
	    	if(string[i]==string[j])
    	  {
          count++;
          string[j]='\0';
	     	}
	    }  
	    printf("'%c' = %d \n",string[i],count);
	 	}
	} 
	return 0;
}