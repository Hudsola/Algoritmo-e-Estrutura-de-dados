#include <stdio.h>
#include <stdlib.h>

int main(){

int j1,  j2, j3; // apostas dos jogadores
int pa;         // peso das apostas
int x;          // Valor de cada 1% do premio
float p;        // Valor total do Premio
float y;        // Valor que cada jogador recebera

printf("Facam suas respectivas apostas!\n");
scanf("%d %d %d", &j1, &j2, &j3);
printf("Bolao jogador 1  R$: %d\n", j1 );
printf("Bolao jogador 2  R$: %d\n", j2 );
printf("Bolao jogador 3  R$: %d\n", j3 );
printf("Digite o valor do premio: \n ");
scanf("%f", &p);
printf("Valor do premio: %.1f \n", p);

pa = j1 + j2 + j3;
x = p/pa;
y = x * j1;
printf("valor do premio do jogador 1: %.1f \n", y);
y = y/j1;
y = y*j2;
printf("valor do premio do jogador 2: %.1f \n", y);
y = y/j2;
y = y*j3;
printf("valor do premio do jogador 3: %.1f \n", y);

return 0;
}
