#include <stdio.h>

#define Max 50

void prArr(int m[][Max], int N)
{
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }
}

void magic_diag(int m[][Max], int N)
{
    int row=N-1;
    int col=N/2;
    m[row][col]=1;
    for(int i=2;i<=N*N;i++){
            //find next row, col
        if(i%N==1)
            row=(row-1+N)%N;
        else{
            row=(row+1)%N;
            col=(col+1)%N;
        }
        m[row][col]=i;
    }
}

void magic_knight(int m[][Max], int N){
    int row=N-1;
    int col=N/2;
    m[row][col]=1;
    for(int i=2;i<=N*N;i++){
        if(i%N==1)
            row=(row-1+N)%N;
        else{
            row=(row-2+N)%N;
            col=(col+1+N)%N;
        }
        m[row][col]=i;
    }
}


int main()
{
    int m[Max][Max]={0};
    int N=5;

    printf("\nDiagonal Move\n");
    magic_diag(m,N);
    prArr(m,N);

    printf("\nKnight Move\n");
    magic_knight(m,N);
    prArr(m,N);
}
