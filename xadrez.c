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





int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    int cavalo = 1;
    int opcao;
    
    // Menu de interação com as peças
    
    printf("Escolha qual peça deseja movimentar!\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("Sair do jogo.\n");
    scanf("%d", &opcao);
    
    switch (opcao){
    case 1:
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    moverBispo(5);
    break;
    case 2:
    // Implementação de Movimentação da Torre
    
    moverTorre(5);
    
    break;
    case 3:
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    moverRainha(8);
    break;

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    case 4:
    
    int movimentoCavalo;
    
    printf("Qual direção deseja movimentar o Cavalo?\n");
    printf("1. Cima, Cima, Direita.\n");
    printf("2. Cima, Cima, Esquerda.\n");
    printf("3. Baixo, Baixo, Direita.\n");
    printf("4. Baixo, Baixo, Esquerda.\n");
    printf("5. Direita, Direita, Cima.\n");
    printf("6. Direita, Direita, Baixo.\n");
    printf("7. Esquerda, Esquerda, Cima.\n");
    printf("8. Esquerda, Esquerda, Baixo.\n");
    scanf("%d", &movimentoCavalo);
    
    switch (movimentoCavalo){
        
    case 1:
    
    while (cavalo--){
        for (int i = 0; i < 2; i++){
            printf("Cima\n");
        }
        printf("Direita.\n");
    }
    break;
    case 2:
    
    while (cavalo--){
        for (int i = 0; i < 2; i++){
            printf("Cima\n");
        }
        printf("Esquerda.\n");
    }
    break;
    case 3:
    
    while (cavalo--){
        for (int i = 0; i < 2; i++){
            printf("Baixo\n");
        }
        printf("Direita.\n");
    }
    break;
    case 4:
    
    while (cavalo--){
        for (int i = 0; i < 2; i++){
            printf("Baixo\n");
        }
        printf("Esquerda.\n");
    }
    break;
    case 5:
    
    while (cavalo--){
        for (int i = 0; i < 2; i++){
            printf("Direita\n");
        }
        printf("Cima.\n");
    }
    break;
    case 6:
    
    while (cavalo--){
        for (int i = 0; i < 2; i++){
            printf("Direita\n");
        }
        printf("Baixo.\n");
    }
    break;
    case 7:
    
    while (cavalo--){
        for (int i = 0; i < 2; i++){
            printf("Esquerda\n");
        }
        printf("Cima.\n");
    }
    break;
    case 8:
    
    while (cavalo--){
        for (int i = 0; i < 2; i++){
            printf("Esquerda\n");
        }
        printf("Baixo.\n");
    }
    break;
    default:
        printf("Opção Inválida!\n");
    }
    
    // Finaliza o jogo.
    
    default:
        printf("Saindo do jogo...\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    }
    return 0;
}