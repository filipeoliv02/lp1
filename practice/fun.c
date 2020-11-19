#include "fun.h"

void primeNumbers(int num) {
  int count = 0;                                    //Conta o numero de vezes que um numero e divisivel
  for (int i = 0; i <= num; i++) {                  //percorre os numeros todos desde 0 ate ao valor escolhido
    if (i <= 1)                                     //se o numero for 0 ou 1 o numero nao e primo
      continue;
    for (int j = 2; j <= i / 2; j++) {              //comeca so a testar a partir do numero 2 até
      if (i % j == 0)                               //metade do numero escolhido se algum numero e divisivel
        count++;
    }
    if (count == 0)                                 //se o numero for divisivel entao e primo
      printf("%d ", i);
    count = 0;
  }
}


