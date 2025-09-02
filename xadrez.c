#include <stdio.h>
 
void movertorre(int casas) {
    if (casas > 0)
    {
        printf("Direita!\n");
        movertorre(casas - 1);
    }
}
    void moverrainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda!\n");
        moverrainha(casas - 1);
    }
    
}
    


int main() {
    
    char peca, direcao;
    int i;

    printf("Escolha uma peca (T - Torre, B - Bispo, R - Rainha, C - Cavalo): ");
    scanf(" %c", &peca);
    if (peca == 'T') {
        movertorre(5);

        
    } else if (peca == 'B') {
        printf("Você escolheu o bispo. Ele se move 8 casas em qualquer diagonal\n");
        printf("Escolha uma direção (D - direita cima, E - esquerda cima, B - direita baixo, V - esquerda baixo: ");
        scanf(" %c", &direcao);
        if (direcao == 'D') {
            printf("Você escolheu a diagonal direita cima.\n");
        } else if (direcao == 'E') {
            printf("Você escolheu a diagonal esquerda cima.\n");
        } else if (direcao == 'B') {
            printf("Você escolheu a diagonal direita baixo.\n");
        } else if (direcao == 'V') {
            printf("Você escolheu a diagonal esquerda baixo.\n");
        } else {
            printf("Direção inválida.\n");
        }
        i = 0;
        do
        {
            if (direcao == 'D')
            {
                printf("Diagonal direita cima\n");
            } else if (direcao == 'E') {
                printf("Diagonal esquerda cima\n");
            } else if (direcao == 'B') {
                printf("Diagonal direita baixo\n");
            } else if (direcao == 'V') {
                printf("Diagonal esquerda baixo\n");
            }
        
            i++;
        } while (i <= 8);
       

    } else if (peca == 'R') {
        moverrainha(8);
        
    } else if (peca == 'C')
    {
        printf("Você escolheu o cavalo.\n");
        printf("O cavalo se move em L, pulando sobre as peças.\n");
        printf("Movimento: duas casas para frente e uma para o lado.\n");
        printf("Escolha uma direção(D = Cima direia, E = Cima esquerda, B = Baixo direita, V = Baixo esquerda): ");
        scanf(" %c", &direcao);
        if (direcao == 'D') {
            int j = 0;
            while (j < 1)
            {
                for (i = 0; i < 2; i++)
                {
                    printf("Cima\n");
                }
                printf("Direita\n");
                j++;
            }
              } else if (direcao == 'E') {
            int j = 0;
            while (j < 1)
            {
                for (i = 0; i < 2; i++)
                {
                    printf("Cima\n");
                }
                printf("Esquerda\n");
                j++;
            }
              } else if (direcao == 'B') {
            int j = 0;
            while (j < 1)
            {
                for (i = 0; i < 2; i++)
                {
                    printf("Baixo\n");
                }
                printf("Direita\n");
                j++;
            }
              } else if (direcao == 'V') {
            int j = 0;
            while (j < 1)   
            {
                for (i = 0; i < 2; i++)
                {
                    printf("Baixo\n");
                }
                printf("Esquerda\n");
                j++;
            }
            
            
           } else {
            printf("Direção inválida.\n");
           }
        
        
        
    }
     
    else{
        printf("Peça inválida.\n");
    }

    
    
    
    


    return 0;
}