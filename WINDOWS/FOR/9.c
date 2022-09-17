#include<stdio.h>

int main()
{
	int f1=1,f2=1,f3=1, renglon;
	
	for(renglon=1; renglon<=9; renglon=renglon+1)
	{
		if (renglon==1||renglon==2||renglon==3)
		 f2=1;
		 else
		  if (renglon==4||renglon==5||renglon==6)
		   f2=2;
		 else
		  if (renglon==7||renglon==8||renglon==9)
		   f2=3;
		   
		   
		if (renglon==1||renglon==4||renglon==7)
		 f3=1;
		 else
		  if (renglon==2||renglon==5||renglon==8)
		   f3=2;
		 else
		  if (renglon==3||renglon==6||renglon==9)
		   f3=3;
		 
		 
         printf("%i %i %i\n",f1,f2,f3);
		 f1=f1+1;
	 
	 
    }
    
    return 0;
}