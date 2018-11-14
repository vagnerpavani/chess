#ifndef PECA_H_
#define PECA_H_

#define MAX 8

struct peca {
    int x, y;
    const char *nome;  
    char abr;   //abreviacao
};

struct tabuleiro {
    struct peca pecas[MAX][MAX];
};

#endif