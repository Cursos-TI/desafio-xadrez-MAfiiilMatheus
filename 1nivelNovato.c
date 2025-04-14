#include <stdio.h>
int main (){ 

// programa em c que simula a movimentação de 3 peças (torre, bispo e rainha) no jogo de xadrez 
// utilizando estruturas de repetição For / While / Do While

//declarando as variaves 

    int bispo = 1, rainha = 1; 

//primeira peça "torre" , que se movimenta cinco casas para a direita usando For

    for (int torre = 0; torre < 5; torre ++)
    {
        printf ("Torre para direita\n"); // imprime a movimentação da peça
    }

//segunda peça "bispo" , que se movimenta cinco casas na diagnal usando while

    while (bispo <= 5)
    {
        printf ("Bispo para cima e direita\n"); // imprime a movimentação da peça

        bispo ++; //incremento para encerrar o loop
    }

//terceira peça "rainha" , que se movimenta oito casas para esquerda usando do while

    do
    {
        printf ("Rainha para esquerda\n"); // imprime a movimentação da peça
        rainha ++; //incremento para encerrar o loop
    } while (rainha <= 8); 
    
    

return 0;
}