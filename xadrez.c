#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Implementa funções recursivas para simular o movimento de cada peça

// Função recursiva responsalvel pelos movimentos da Bispo.

void bispo(int direcao, int casas){
    if(casas > 0){
        bispo(direcao, casas-1);
        switch (direcao){
            case 1:
                printf("Cima, ");
                printf("Direita\n");
                break;
            case 2:
                printf("Cima, ");
                printf("Esquerda\n");
                break;
            case 3:
                printf("Baixo, ");
                printf("Direita\n");
                break;
            case 4:
                printf("Baixo, ");
                printf("Esquerda\n");
                break;
        }
    }
}

// Função recursiva responsalvel pelos movimentos da torre.

void torre(int direcao, int casas){
    if(casas > 0){
        torre(direcao, casas-1);
        switch(direcao){
            case 1:
                printf("Esquerda\n");
                break;
            case 2:
                printf("Direita\n");
                break;
            case 3:
                printf("Cima\n");
                break;
            case 4:
                printf("Baixo\n");
                break;
        }
    }
} 

// Função recursiva responsalvel pelos movimentos do cavalo.

void rainha(int direcao, int casas){
    if(casas > 0){
        rainha(direcao, casas-1);
        switch(direcao){
            case 1:
                printf("Direita\n");
                break;
            case 2:
                printf("Esquerda\n");
                break;
            case 3:
                printf("Cima\n");
                break;
            case 4:
                printf("Baixo\n");
                break;
            case 5:
                printf("Cima, ");
                printf("Dirita\n");
                break;
            case 6:
                printf("Cima, ");
                printf("Esquerda\n");
                break;
            case 7:
                printf("Baixo, ");
                printf("Direita\n");
                break;
            case 8:
                printf("Baixo, ");
                printf("Esquerda\n");
                break;
        }
    }
}

// Implementação de váriaveis

int main(){
    
    int movimentoCavalo, opcao, direcao, casas, finalizar;
    
    // implementação do menu de interação com as peças.
    
    do{  
        printf("Escolha qual peça deseja movimentar!\n");
        printf("1. Bispo\n");
        printf("2. Torre\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        printf("5. Sair do jogo.\n");
        scanf("%d", &opcao);
    
        switch (opcao){
            case 1:
    
            // Implementação de Movimentação do Bispo.
        
            do{
                    printf("Qual direção desejar mover o Bispo? \n");
                    printf("1. Cima, Direita.\n");
                    printf("2. Cima, Esquerda.\n");
                    printf("3. Baixo, Direita.\n");
                    printf("4. Baixo, Esquerda.\n");
                    scanf("%d", &direcao);
                    
                    printf("Quantas casas deseja mover o Bispo? (Max. 5)\n");
                    scanf("%d", &casas);
                    printf("\n");
    
                    if(casas < 1 || casas > 5){
                        printf("Quantidade de casas inválida! (max.5) \n");
                    }
                }while (casas < 1 || casas > 5);
            
            bispo(direcao, casas);
                
                break;
            case 2:
            
            // Implementação de Movimentação da Torre.
            
                do{
                    printf("Qual direção desejar mover a Torre? \n");
                    printf("1. Direita.\n");
                    printf("2. Esquerda.\n");
                    printf("3. Cima.\n");
                    printf("4. Baixo.\n");
                    scanf("%d", &direcao);
                    
                    printf("Quantas casas deseja mover a Torre? (Max. 5)\n");
                    scanf("%d", &casas);
                    printf("\n");
    
                    if(casas < 1 || casas > 5){
                        printf("Quantidade de casas inválida! (max.5) \n");
                    }
                }while (casas < 1 || casas > 5);
            
            torre(direcao, casas);
                
                break;
            case 3:
            
            // Implementação de Movimentação da Rainha.
    
            do{
                    printf("Qual direção desejar mover a Rainha? \n");
                    printf("1. Direita.\n");
                    printf("2. Esquerda.\n");
                    printf("3. Cima.\n");
                    printf("4. Baixo.\n");
                    printf("5. Cima, Direita.\n");
                    printf("6. Cima, Esquerda.\n");
                    printf("7. Baixo, Direita\n");
                    printf("8. Baixo, Esquerda.\n");
                    scanf("%d", &direcao);
                    
                    printf("Quantas casas deseja mover a Rainha? (Max. 8)\n");
                    scanf("%d", &casas);
                    printf("\n");
    
                    if(casas < 1 || casas > 8){
                        printf("Quantidade de casas inválida! (max.8) \n");
                    }
                }while (casas < 1 || casas > 8);
            
            rainha(direcao, casas);
                
                break;
            
            // Implementação de Movimentação do Cavalo ("Apenas o movimento inicial do cavalo").

            case 4:
            do{
                printf("Qual direção deseja movimentar o Cavalo?\n");
                printf("1. Cima, Cima, Direita.\n");
                printf("2. Cima, Cima, Esquerda.\n");
                scanf("%d", &movimentoCavalo);
                
                if(movimentoCavalo < 1 || movimentoCavalo > 2){
                    printf("Movimento inválido! (max.5) \n");
                }
            }while(movimentoCavalo < 1 || movimentoCavalo > 2);
    
                switch (movimentoCavalo){
        
                    case 1:

                        for (int i = 0; i < 2; i++){
                            printf("Cima, ");
                        }
                        printf("Direita.\n");
                    break;
                    case 2:
                        for (int i = 0; i < 2; i++){
                            printf("Cima, ");
                        }
                        printf("Esquerda.\n");
                    break;
                    default:
                    printf("Opção Inválida!\n");
                }
                break;
    } 
        
        // Implementação de sistema de repetição/finalização do jogo.
        
        printf("Continuar jogando?\n");
        printf("1. SIM.\n");
        printf("2. NÃO.\n");
        scanf(" %d", &finalizar);
    
        }while (finalizar == 1 );
    
        printf("Jogo encerrado!");
    
    return 0;
}