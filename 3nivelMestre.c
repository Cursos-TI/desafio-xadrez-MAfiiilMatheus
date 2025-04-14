#include <stdio.h>
// declaração do loop recurssivo para a torre
void moverTorre(int casas)
{
    if (casas >0 ) {
        printf ("Torre para direita\n");
        moverTorre (casas - 1);
    }
  
}
// declaração do loop recurssivo para o bispo
void moverBispo(int casas)
{
    if (casas >0 ) {
        printf ("Bispo para cima e direita\n");
        moverBispo (casas - 1);
    }
  
}
// declaração do loop recurssivo para a rainha
void moverRainha(int casas)
{
    if (casas >0 ) {
        printf ("Rainha para esquerda\n");
        moverRainha (casas - 1);
    }
  
}


int main (){ 

// chamada parado loop torre (primeira peça) que se movimenta 5 vezes para direita
    moverTorre (5);
    printf ("\n");
// chamada do loop bispo (segunda peça) que se movimenta em diagonal 5 vezes
    moverBispo (5);
    printf ("\n");
// chamada do loop rainha (terceira peça) que se moviemta 8 vezes para a esquerda
    moverRainha (8);
    printf ("\n");

//quarta peça "cavalo" , que se movimenta em L sendo duas casa para baixo e uma para esquerda usando While e For aninhados

int cavalo = 1;

while (cavalo --)
{
    for (int i = 0; i < 2; i++)
    {
        printf ("Cavalo para baixo\n");
    
    }

    printf ("Cavalo para esquerda\n");
    printf ("\n");
    
}

return 0;
} 