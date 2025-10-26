#include<stdio.h>
int main(){
	int f,r,b,count=0;
	printf("enter number of floors: ");
	scanf("%d",&f);
	printf("enter number of rooms: ");
	scanf("%d",&r);
	printf("enter number of beds: ");
	scanf("%d",&b);
	int build[f][r][b];
	for(int i=0;i<f;i++){
		for(int j=0;j<r;j++){
			for(int k=0;k<b;k++){
				printf("enter bed status of %d floor %d room %d bed: ",i+1,j+1,k+1);
				scanf("%d",&build[i][j][k]);	
			}
			
		}
	}
	printf("MATRIX \n");
		for(int i=0;i<f;i++){
		for(int j=0;j<r;j++){
		for(int k=0;k<b;k++){
		printf("%d\t",build[i][j][k]);	
		}
		printf("\n");
		}
		printf("\n");
	}
	for(int i=0;i<f;i++){
		for(int j=0;j<r;j++){
		for(int k=0;k<b;k++){
			if(build[i][j][k]==0){
			count++;
			}	
	}
	}
	}
		printf("%d beds are empty",count);	


		
	return 0;
}