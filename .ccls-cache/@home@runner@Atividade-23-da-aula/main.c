//Crie um programa que determine se um número digitado é positivo, negativo ou zero

#include <stdio.h>

int main() {
  int numero;

  // Solicita ao usuário que insira um número
  printf("Digite um numero inteiro:\n");
  scanf("%d", &numero);

  // Verifica se o número é positivo, negativo ou zero
  if (numero > 0) {
      printf("O numero %d digitado e POSITIVO.\n", numero);
  } else if (numero < 0) {
      printf("O numero %d digitado e NEGATIVO.\n", numero);
  } else {
      printf("O numero %d digitado e ZERO.\n", numero);
  }
  return 0;
}