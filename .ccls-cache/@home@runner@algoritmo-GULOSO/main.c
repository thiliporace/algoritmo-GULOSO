#include <stdio.h>

void guloso(float v[], float S, int tamanho){
  int count;
  float quantidade = 0.0;
  float x = 0;
  for(int i = 0; i <= tamanho; i++){
    count = 0;
    while(S >= v[i]) {
      quantidade += v[i];
      S = S - v[i];
      printf("\n GULOSO comeu %f",v[i]);
      count += 1;
      if (v[i] == 0)
        break;
    }
    v[i] = count;
}
  printf("\n O monstro GULOSO comeu %f.",quantidade);
}


int main() {
  float v[12] = {100,50,20,10,5,2,1,0.5,0.25,0.1,0.05,0.01}, S = 576.73;
  int tamanho = 12;
  guloso(v, S, tamanho);
}