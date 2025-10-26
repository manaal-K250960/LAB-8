#include<stdio.h>
int main(){
	int c,d,t,high;
	printf("enter number of cities: ");
	scanf("%d",&c);
	printf("enter number of days: ");
	scanf("%d",&d);
	printf("enter number of times you recorded the temperature: ");
	scanf("%d",&t);
	int temp[c][d][t];
	for(int i=0;i<c;i++){
		for(int j=0;j<d;j++){
			for(int k=0;k<t;k++){
				printf("enter temp of %d city %d day %d time: ",i+1,j+1,k+1);
				scanf("%d",&temp[i][j][k]);	
			}
			
		}
	}
	printf("MATRIX \n");
		for(int i=0;i<c;i++){
		for(int j=0;j<d;j++){
		for(int k=0;k<t;k++){
		printf("%d\t",temp[i][j][k]);	
		}
		printf("\n");
		}
		printf("\n");
	}
	high=temp[0][0][0];
	for(int i=0;i<c;i++){
		for(int j=0;j<d;j++){
		for(int k=0;k<t;k++){
			if(temp[i][j][k]>high){
			high=temp[i][j][k];
			}	
	}
	}
	}
		printf("%d is the highest temperature",high);	


		
	return 0;
}