#include <stdio.h>

void Rec(int height, int width, int filled) {
	for(int i=1; i<=height; i++) {
		for(int j=1; j<=width; j++) {
			if(filled==0){
				if(i==1 || i==height || j==1 || j==width)
					printf("*");
				else
					printf(" ");	
			}
			else if(filled==1){
				if(i<=height || j<=height)
					printf("*");
			}
		}
		printf("\n");
	}
}

//****************************//


void VerTri(int height, int type, int filled) {
	switch(type) {
		case 1:
			for(int i=1; i<=height; i++){
				for(int j=1; j<=height; j++){
					if(filled==0){
						if(j==1 || i==height || i==j)
						printf("*");
						else
						printf(" ");	
					}
					else if(filled==1){
					if(j<=i)
					printf("*");
					else
					printf(" ");
					}
				}
				printf("\n");
			}
			break;
			
		case 2:
			for(int i=1; i<=height; i++){
				for(int j=1; j<=height; j++){
					if(filled==0){
						if(j==height || i==1 || i==j)
						printf("*");
						else
						printf(" ");	
					}
					else if(filled==1){
					if(i<=j)
					printf("*");
					else
					printf(" ");
					}
				}
				printf("\n");
			}
			break;
			
		case 3:
			for(int i=1; i<=height; i++){
				for(int j=1; j<=height; j++){
					if(filled==0){
						if(j==1 || i==1 || i==height-j+1)
						printf("*");
						else
						printf(" ");	
					}
					else if(filled==1){
					if(j<=height-i+1)
					printf("*");
					else
					printf(" ");
					}
				}
				printf("\n");
			}
			break;
			
		case 4:
			for(int i=1; i<=height; i++){
				for(int j=1; j<=height; j++){
					if(filled==0){
						if(j==height || i==height || i==height-j+1)
						printf("*");
						else
						printf(" ");	
					}
					else if(filled==1){
					if(j>=height-i+1)
					printf("*");
					else
					printf(" ");
					}
				}
				printf("\n");
			}
			break;
	}
}

//*************************************************************//

void IsoTri(int height, int type, int filled){
	switch(type){
		case 1:
			for(int i=1; i<=height; i++){
				for(int j=1; j<=height*2-1; j++){
					if(filled==0){
						if(j==height-i+1 || j==height+i-1 || i==height)
						printf("*");
						else
						printf(" ");	
					}
					else if(filled==1){
					if(j<=i)
					printf("*");
					else
					printf(" ");
					}
				}
				printf("\n");
			}
			break;
		
	}
	
}










/***************************************************************/



int main()

{
	int choice;
	int height, width;
	int type;
	int filled;

	while(1) {
		printf("Main menu\n");
		printf("1. Rectangle\n");
		printf("2. VerTriangle\n");
		printf("3. IsoTriangle\n");
		printf("4. Exit\n");
		printf("=> ");
		scanf("%d", &choice);

		if(choice==4)break;
		switch(choice) {
			case 1:
				printf("Enter height width filled: ");
				scanf("%d %d %d", &height, &width, &filled);
				Rec(height, width, filled);
				break;
			case 2:
				printf("Enter height type filled: ");
				scanf("%d %d %d", &height, &type, &filled);
				VerTri(height, type, filled);
				break;
			case 3:
				printf("Enter height type filled: ");
				scanf("%d %d %d", &height, &type, &filled);
				IsoTri(height, type, filled);
				break;
		}
	}
}

/*                 if(filled){
                    for(int i=1;i<=height;i++){
                        if(i==1 || i==height){
                          prchar('*',i);
                        }else{
                            printf("*");
                            prchar(' ',i-2);
                            printf("*");
                        }
                        printf("\n");
                    }
                }   */
/*void prchar(char c, int n) {
	for(int i=1; i<=n; i++)
		printf("%c", &c);
}*/

