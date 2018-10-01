#include <stdio.h>

int main()

{
    int choice;
    int height, width;

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
            break;
      case 2:
          printf("Enter height and width: ");
          scanf("%d %d", &height, &width);
          for(int i=1;i<=height;i++)
          {
              for(int j=1;j<=width;j++)
              {
                  if(i==1 || j==width || i==j)
                    printf("*");
                  else
                    printf(" ");
              }
              printf("\n");
          }
            break;
    }
    }
}
