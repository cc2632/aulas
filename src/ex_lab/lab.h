
// lab 1
float media(float x, float y);
float distancia(float x1, float y1, float x2, float y2);
float mediaCC2632(float atv, float p1, float p2, float p3, int labs);

// lab 2
float max_float(float x, float y);
float min_float(float x, float y);
int sinal(float x);
int acimaDe(float valor, float limite);

// lab 3
int busca(int valor, int *valores, int tamanho);
float mediaPonderada(float *valores, float *pesos, int tamanho);
int tamanho(char *string);
void copiaString(char *string1, char *string2);
void input(char *print, char *leitura, int tamanho);

// lab 4
void escreveArray(int array[], int tamanho, char *nome);
void leArray(int array[], int tamanho, char *nome);

// lab 5
typedef struct {
  double pi;
  double e;
} Contantes;

void escreveJSON(Contantes c, char *nome);
void leJSON(Contantes *c, char *nome);
void escreveBinario(Contantes c, char *nome);
void leBinario(Contantes *c, char *nome);