#include <stdio.h>
#include <math.h>
int main() {
	int Sx,Sy,x1,x2,x3,x4,y1,y2,y3,y4,a[3][4],b[3][3],c[3][4],i,j,k;
	printf("Enter the value of Sx: ");
	scanf("%d", &Sx);
	printf("Enter the value of Sy: ");
	scanf("%d", &Sy);
	printf("Enter 1st point of Rectangle: ");
	scanf("%d%d",&x1,&y1);
	printf("Enter 2nd point of Rectangle: ");
	scanf("%d%d",&x2,&y2);
	printf("Enter 3rd point of Rectangle: ");
	scanf("%d%d",&x3,&y3);
	printf("Enter 4th point of Rectangle: ");
	scanf("%d%d",&x4,&y4);

	a[0][0]=x1;
	a[0][1]=x2;
	a[0][2]=x3;
	a[0][3]=x4;
	a[1][0]=y1;
	a[1][1]=y2;
	a[1][2]=y3;
	a[1][3]=y4;
	a[2][0]=1;
	a[2][1]=1;
	a[2][2]=1;
	a[2][3]=1;

	b[0][0]=Sx;
	b[0][1]=0;
	b[0][2]=0;
	b[1][0]=0;
	b[1][1]=Sy;
	b[1][2]=0;
	b[2][0]=0;
	b[2][1]=0;
	b[2][2]=1;
	
	for(i = 0; i < 3; i++){
		for( j= 0; j<4; j++){
			c[i][j]= 0;
			
			for(k=0; k<3; k++){
				c[i][j] += b[i][k] * a[k][j];
			}
		}
	}
	
	printf("The result matrix is: \n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
