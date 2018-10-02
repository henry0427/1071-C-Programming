#include <stdio.h>

void Rec(int height, int width)
{
            for(int i=1;i<=height;i++)
            {
            for(int j=1;j<=width;j++)
                {
                if(i==1 || i==height || j==1 || j==width)
                    printf("*");
                else
                    printf(" ");
                }
                printf("\n");
        }
}

//****************************//

void prchar(char c, int n){
    for(int i=1; i<=n; i++)
        printf("%c", &c);
}

//******************************//

void VerTri(int height, int type, int filled)
{
    switch(type)
          {
            case 1:
                for(int i=1;i<=height;i++){
                    prchar('*',i);
                    printf("\n");
                }
                    break;
            case 2:

                    break;
            case 3:

                    break;
            case 4:

                    break;
          }
}

//*************************************************************//



int main()

{
    int choice;
    int height, width;
    int type;
    int filled;

    while(1){
        printf("Main menu\n");
        printf("1. Rectangle\n");
        printf("2. Triangle\n");
        printf("3. Exit\n");
        printf("=> ");
        scanf("%d", &choice);

    if(choice==3)break;
    switch(choice)
    {
      case 1:
        printf("Enter height and width: ");
        scanf("%d %d", &height, &width);
        Rec(height, width);
            break;
      case 2:
          printf("Enter height type filled: ");
          scanf("%d %d %d", &height, &type, &filled);
          VerTri(height, type, filled);

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

