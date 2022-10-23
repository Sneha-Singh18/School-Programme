#include<stdio.h>
int main(){
    int list[100],i,n,mode,sum=0;
    int max=0,newlist[100];int k=0;
    float mean,median;
    printf("Enter the no of elements : ");
    scanf("%d",&n);
    printf("Enter the  elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&list[i]);
    }
    /*MEAN OF THE LIST*/
    for(i=0;i<n;i++){
        sum+=list[i];
    }
    mean=sum/n;
    printf("MEAN : %f\n",mean);
    /*MEDIAN */
    for(i=0;i<n;i++)
  	{
  		for(int j=0;j<n-i-1;j++)
   		{
   			if(list[j]>list[j+1])
    			{
    				int temp=list[j];
    				list[j]=list[j+1];
    				list[j+1]=temp;
    			}
   		}
  	}
    if (n%2==0){
        median=(float)((list[n/2]+list[n/2-1])/2);
        printf("MEDIAN : %f\n",median);    
    }
    else
        printf("MEDIAN : %d\n", list[n/2]);

    /*MODE OF THE LIST*/
    for(i=0;i<n-1;i++)
  	{
  		mode=0;
  		for(int j=i+1;j<n;j++)
   		{
   			if(list[i]==list[j])
   				mode++;
        }
        
  		if((mode>max)&&(mode!=0))
   		{
   			
   			max=mode;
   			newlist[k]=list[i];
			k++;
		}	  
   		else if(mode==max)	   		
  		{
			newlist[k]=list[i];
		}
  	}
	printf("MODE : ");
    //printf("%d",newlist[k]);//
    for(i=0;i<k;i++)
        printf("%d ",newlist[i]);
    
} 