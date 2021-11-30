#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_esame {
	char nome[128];
	int voto;
}t_esame;

typedef struct s_pila {
	t_esame *v;
	int primo_libero;
	int dimensione;
}t_pila;

void inizializza_pila(t_pila *pila,int dimensione) {
	pila->v = (t_esame*)malloc(dimensione * sizeof(t_esame));
	pila->primo_libero = 0;
	pila->dimensione = dimensione;
}

void estendi_pila(t_pila* pila, int nuova_dimensione) {
	t_esame* vettore_appoggio;
	pila->v = (t_esame*)malloc(nuova_dimensione * sizeof(t_esame));
}

void push(t_pila* pila, t_esame e) {
	if (pila->primo_libero == pila->dimensione)
		return
	pila->v[pila->primo_libero] = e;
	++(pila->primo_libero);
}

int main(void) {
	t_pila una_pila;
	int n;
	scanf("%d", &n);
	inizializza_pila(&una_pila, n);
}