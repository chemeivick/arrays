//arrays in c 2D

#include <stdio.h>
int main()
{
//allow the user to enter variables	
	int i,j;
	int results[3][4]={{10,20,30,},{40,50,60,70}};
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("results[%d][^d]=%d\n",i,j,results[i][j]);
		}
	}	
		
			
	
return 0;
}