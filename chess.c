#include <stdio.h>
#include <stdbool.h>
#include <structs.h>

char Tabuleiro[8][8] = {
    'T', 'C', 'B', 'Q', 'K', 'B', 'C', 'T', 
    'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 
    'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 
    'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 
    'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 
    'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 
    'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 
    'T', 'C', 'B', 'Q', 'K', 'B', 'C', 'T'
};

void MostrarTabuleiro(){
    int i, j;
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++)
            printf("%c", Tabuleiro[i][j]);
        printf("\n");
    }
    printf("\n");
}

void Turno(){
    MostrarTabuleiro();
    If(Rei = false){
        printf("GAME OVER");
    }
    VarTurno++;
}

void main(){
    int VarTurno = 1;
    Turno();
    
}

