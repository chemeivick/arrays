//arrays in c 3D
#include<stdio.h>
int main()
{
//allow the user to enter varriables
	int j,k,l;
	int marks[3][4][5]={{{12,13,14},{1,2,3,4},{10,20,30,40,50}}};
	
	for(j=0;j<3;j++){
		for(k=0;k<4;k++){
			for(l=0;l<5;l++){
			
				printf("marks[%d][%d][%d] =%d\n ",j,k,l,marks[j][k][l]);
					

						
			}
		}
	}
return 0;		
		
	

}