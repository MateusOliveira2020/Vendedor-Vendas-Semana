#include <stdio.h>

int main(void) {
  char nomeVendedor[30];
  float totalVendas;
  printf("Digite o nome do vendedor\n");
  scanf("%s", nomeVendedor);
  printf("Digite o valor total das vendas da semana\n");
  scanf("%f" ,&totalVendas);
  printf("O Nome do vendedor e: %s, e teve um total de vendas de: %f",nomeVendedor, totalVendas);
  return 0;
}