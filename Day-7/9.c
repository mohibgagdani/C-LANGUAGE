#include<stdio.h> 

int main()    
{    
    int m1=0,m2=1,m3,i,number;    
    printf("Enter the number of elements:");    
    scanf("%d",&number);
    
    for(i=0;i<number;++i)   
    {    
        printf(" %d",m3);   
        m3=m1+m2;
        m1=m2;    
        m2=m3; 
        
        
    }  

 }    