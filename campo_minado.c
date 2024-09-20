/******************************************************************************

Exercício: "Campo Minado"
Autores: Bruno Friedrich Raquel               N°USP: 13672450
         Pedro Henrique Resnitzky Barbedo     N°USP: 14657691

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int inside(int x, int y, int M, int N, int k, int l){
    
    return !(x < 0 || y < 0 || x >= M || y >= N || (k == 0 && l == 0));
}

void atribuir(int x, int y, char ** res){
    res[x][y]++;
}

int main()
{
    int M, N;
    int contador = 0;
        
    while(1){
        contador++;
        scanf("%i %i", &M, &N);
        if(M == 0 && N == 0)
            break;
    
        char ** arr = (char**) malloc (M * sizeof(char*));
        for (int i = 0; i<M; i++){
            arr[i] = (char*) malloc (N *sizeof(char));
        }
        
        char ** res = (char**) malloc (M * sizeof(char*));
        for (int i = 0; i<M; i++){
            res[i] = (char*) malloc (N *sizeof(char));
        }
        
        for(int i = 0; i<M; i++){
            for (int j = 0; j<N; j++){
                res[i][j] = '0';
            }
        }
    
        for (int i = 0; i<M; i++){
            for (int j = 0; j<N; j++){
                scanf(" %c", &arr[i][j]);
                if(arr[i][j] == '*'){
                    res[i][j] = '*';
                }
            }
        }
        
        for (int i = 0; i<M; i++){
            for (int j = 0; j<N; j++){
                if(arr[i][j] == '*'){
                    for(int k = -1; k<=1; k++){
                        for (int l = -1; l <= 1; l++){
                            int x = i + k;
                            int y = j + l;
                            if(inside(x, y, M, N, k, l) && !(arr[x][y] == '*')){
                                atribuir(x, y, res);
                            }   
                        }
                    }
                }
            }
        }
        
        printf("Field #%d\n", contador);
        
        for (int i = 0; i<M; i++){
            for (int j = 0; j<N; j++){
                printf("%c ", res[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}