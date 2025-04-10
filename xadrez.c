#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int casasTorre){
    if (casasTorre > 0){
        printf("Direita\n");
        moverTorre(casasTorre - 1);
    }
}
    
void moverBispo(int casasBispo){
    while (casasBispo--){
        for (int i = 0; i < 1; i++){
            printf("Direita, ");
        }
        printf("Cima\n");
    }
}
void moverRainha(int casasRainha){
    if (casasRainha > 0){
        printf("Esquerda\n");
        moverRainha(casasRainha - 1);
    }
}

int main(){
    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    int movimentoBispo, movimentoTorre, movimentoRainha;
    int opcao;
    char finalizar;
    int movimentoCavalo;
    
    // Menu de interação com as peças
    
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
    
            // Implementação de Movimentação do Bispo
        
            do{
                printf("Quantas casas deseja mover? (max.5)\n");
                scanf("%d", &movimentoBispo);
                
                if(movimentoBispo < 1 || movimentoBispo > 5){
                    printf("Quantidade de casas inválida! (max.5) \n");
                }
            }while(movimentoBispo < 1 || movimentoBispo > 5);
        
            moverBispo(movimentoBispo);
    
            break;
            case 2:
        
            // Implementação de Movimentação da Torre
        
            do{
                printf("Quantas casas deseja mover? (max.5)\n");
                scanf("%d", &movimentoTorre);
                
                if(movimentoTorre < 1 || movimentoTorre > 5){
                    printf("Quantidade de casas inválida! (max.5) \n");
                }
            }while(movimentoTorre < 1 || movimentoTorre > 5);
        
            moverTorre(movimentoTorre);

            break;
            case 3:
            
    // Implementação de Movimentação da Rainha
    
            do{
                printf("Quantas casas deseja mover? (max.5)\n");
                scanf("%d", &movimentoRainha);
                
                if(movimentoRainha < 1 || movimentoRainha > 5){
                    printf("Quantidade de casas inválida! (max.5) \n");
                }
            }while(movimentoRainha < 1 || movimentoRainha > 5);
        
            moverRainha(movimentoRainha);
            break;

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
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
        
    printf("Continuar jogando?(S/N)\n");
    scanf(" %c", &finalizar);
    
    }while (finalizar == 's' || finalizar == 'S');
    
        printf("Jogo encerrado!");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    
    return 0;
}