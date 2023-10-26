#include <stdio.h>
#include <string.h>

int main() {

  int pessoas = 1, servPrestado, A = 0, B = 0, C = 0, M = 0, V = 0, N = 0,
      pMais = 0, pMenos = 0, eMais = 0, eMenos = 0;
  float percent, elevadorMedio;
  char periodo, elevador, elevadorMais[15], elevadorMenos[15], periodoMais[15],
      periodoMenos[15];

  for (int num = 0; num <= 6; num++) {

    printf("\nDigite qual o elevador voce mais utiliza no predio: ");
    scanf("%c", &elevador);
    __fpurge(stdin);
    printf("\nDigite o periodo que mais utiliza o elevador: ");
    scanf("%c", &periodo);
    __fpurge(stdin);

    switch (periodo) {

    case 'M':
      M++;
      break;
    case 'V':
      V++;
      break;
    case 'N':
      N++;
      break;
    default:
      printf("\nOpcao invalida, tente novamente.");
    }

    // verificar elevador mais usado
    if (M > N && M > V) {
      pMais += M;
      strcpy(periodoMais, "Matutino");
    } else if (V > N && V > M) {
      pMais += V;
      strcpy(periodoMais, "Vespertino");
    } else {
      pMais += N;
      strcpy(periodoMais, "Noturno");
    }
    // verificar periodo menos usado
    if (M < N && M < V) {
      pMenos += M;
      strcpy(periodoMenos, "Matutino");
    } else if (V < N && V < M) {
      pMenos += V;
      strcpy(periodoMenos, "Vespertino");
    } else {
      pMenos += N;
      strcpy(periodoMenos, "Noturno");
    }

    switch (elevador) {

    case 'A':
      A++;
      break;
    case 'B':
      B++;
      break;
    case 'C':
      C++;
      break;
    default:
      printf("\nOpcao invalida, tente novamente");
    }
    if (A > B && A > C) {
      eMais += A;
      strcpy(elevadorMais, "A");
    } else if (C > B && C > A) {
      eMais += C;
      strcpy(elevadorMais, "C");
    } else {
      eMais += B;
      strcpy(elevadorMais, "B");
    }
    // verificar periodo menos usado
    if (A < B && A < C) {
      eMenos += A;
      strcpy(elevadorMenos, "A");
    } else if (C < B && C < A) {
      eMenos += C;
      strcpy(elevadorMenos, "C");
    } else {
      eMenos += B;
      strcpy(elevadorMenos, "B");
    }

  }

  percent = ((float)(pMais - pMenos) / pMais) * 100;
  elevadorMedio = (float)(eMais + eMenos) - 6;

  printf("\nMedio: %f", elevadorMedio);
  printf("\nO periodo mais utilizado: %s", periodoMais);
  printf("\nElevador mais frequentado: %s", elevadorMais);
  printf("\nPorcentual entre o periodo mais usado e o menos usado: %.2f%%",
         percent);
  printf("\nPorcentual no total de servicos prestados : %.2f%%", elevadorMedio);
}