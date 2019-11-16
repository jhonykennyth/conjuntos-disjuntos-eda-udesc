#define ERRO_CONJUNTO_VAZIO -1

typedef struct ele
{
    void *info;
    struct ele *proximo;//ultimo elemento aponta para null
} Elemento;

typedef struct
{
    Elemento *cabeca;
    int tamInfo, qtd;
} Lista;

typedef struct
{
    Lista multi;
    int tamInfo;
} Conjuntos;

void inicializaConjunto(Conjuntos *c, int t){

}
