#include <stdio.h>
#include <string.h>
#include <math.h>

#include "Ponto.h"

int main(void) {
    Ponto *m_pto1, *m_pto2;
    float ext_x, ext_y;
    m_pto1 = Cria_ponto(3.0, 2.3);
    m_pto2 = Cria_ponto(6.0, 8.0);

    Acessa_Ponto(m_pto1, &ext_x, &ext_y);
    printf("\n--Ponto 1--\n");
    printf("Valor de x = %f\n",m_pto1->x);
    printf("Valor de y = %f\n",m_pto1->y);

    printf("\n--Ponto 2--\n");
    Acessa_Ponto(m_pto2, &ext_x, &ext_y);
    printf("Valor de x = %f\n",m_pto2->x);
    printf("Valor de y = %f\n",m_pto2->y);

    float dist = Distancia_ponto (m_pto1, m_pto2);
    printf("\nDistancia entre os pontos: %f\n",dist);

    Libera_ponto(m_pto1);
    Libera_ponto(m_pto2);
    return 0;
}
