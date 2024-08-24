#include <stdio.h>

int main() {
  int press;

  // Loop infinito
  while (1) {
    printf("Digite o número zero: ");
    scanf("%d", &press);

    // Verifica se o valor digitado é zero
    if (press == 0) {
      printf("Adeus\n");
      break; // Encerra o loop
    } else {
      // Se o valor não for 0, continua pedindo o número
      printf("Você não digitou zero. Tente novamente.\n");
    }
  }

  return 0;
}
