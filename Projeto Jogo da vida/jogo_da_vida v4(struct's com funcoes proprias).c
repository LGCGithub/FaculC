#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define ORG 'X'
#define VAZ ' '
#define TAM 101

#define TOTAL_DE_CICLOS 100
#define TAM_LINHAS 22
#define TAM_COLUNAS 30

// Defini os valores do tamanho da matriz como 22x30, escolha arbitraria.

typedef struct tab{
    char nomeJogo[TAM];
    int dim1,dim2;
    char **m;   //Atencao! Essa matriz tera que ser alocada dinamicamente
                //para que a funcao que inicializa possa funcionar
    int ciclosVida; // Define quanto cada jogo vai rodar (ciclos)
}Tab;


//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

char** alocaMatriz(int nL, int nC){
    char **m;
    int i;

    m = (char**)malloc(nL*sizeof(char*));
    for(i = 0; i < nL; i++){
        m[i] = (char*)malloc(nC*sizeof(char));
    }
    return m;
}

void copiaMatriz(char **m, char **aux, int nL, int nC){
    int i, j;
    for(i = 0; i < nL; i++){
        for(j = 0; j < nC; j++){
            m[i][j] = aux[i][j];
        }
    }
}

void imprimeMatriz(char **m, int nL, int nC){
    int i, j;
    for(i = 0; i < nL; i++){
        for(j = 0; j < nC; j++){
            printf("%c ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void desalocaMatriz(char **m, int nL){
    int i;
    for(i = 0; i < nL; i++){
        free(m[i]);
    }
    free(m);
}

void limpaMatriz(char **m, int nL, int nC){
    int i,j;
    for(i=0;i<nL;i++)
        for(j=0;j<nC;j++)
            m[i][j]=VAZ;
}

void alocaMatrizTab(Tab *t){
    int i;

    (*t).m = (char**)malloc((*t).dim1*sizeof(char*));
    for(i = 0; i < (*t).dim1; i++){
        (*t).m[i] = (char*)malloc((*t).dim2*sizeof(char));
    }
}

void copiaMatrizTab(Tab t, char **aux){
    int i, j;
    for(i = 0; i < t.dim1; i++){
        for(j = 0; j < t.dim2; j++){
            t.m[i][j] = aux[i][j];
        }
    }
}

void imprimeMatrizTab(Tab t){
    int i, j;
    for(i = 0; i < t.dim1; i++){
        for(j = 0; j < t.dim2; j++){
            printf("%c ", t.m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void desalocaMatrizTab(Tab t){
    int i;
    for(i = 0; i < t.dim1; i++){
        free(t.m[i]);
    }
    free(t.m);
}

void limpaMatrizTab(Tab t){
    int i, j;
    for(i = 0; i < t.dim1; i++)
        for(j = 0; j < t.dim2; j++)
            t.m[i][j] = VAZ;
}

// Função responsavel por ler e intepretar o arquivo .csv
char** retornaPadraoCSV(){
    FILE *f = fopen("custom.csv", "r");
    char c, strLinha[256], auxStr[256], **padrao;
    int i, j, nI, nJ, elemValido;


    if(f == NULL){
        return NULL;
    }

    padrao = alocaMatriz(TAM_LINHAS, TAM_COLUNAS);
    limpaMatriz(padrao, TAM_LINHAS, TAM_COLUNAS);

    while(fgets(strLinha, 256, f)){
        i = 0;
        nI = 0;

        while(strLinha[i] != ','){
            // Extrai o primeiro numero da linha
            nI = ((int)strLinha[i] - 48) + nI * 10;
            i++;
        }
        i++;

        while(strLinha[i] != '\0'){
            nJ = 0;
            elemValido = 0;
            while(strLinha[i] != ',' && strLinha[i] != '\0'){
                if(strLinha[i] == '\n'){
                    i++;
                    break;
                }
                elemValido = 1;
                nJ = ((int)strLinha[i] - 48) + nJ * 10;
                i++;
            }
            if(elemValido == 1) padrao[nI][nJ] = ORG;
            if(strLinha[i] == ',') i++;
        }
    }

    fclose(f);

    return padrao;
}


//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void inicBlinker(Tab t){
    char padrao[1][3]={{ORG,ORG,ORG}};
    int i,j, xInic=t.dim1/2, yInic=t.dim2/2;

    limpaMatrizTab(t);

    for(i=0;i<1;i++)
        for(j=0;j<3;j++)
            t.m[xInic+i][yInic+j] = padrao[i][j];
}

void inicBloco(Tab t){
    char padrao[2][2]={{ORG,ORG},{ORG,ORG}};
    int i,j, xInic=t.dim1/2, yInic=t.dim2/2;

    limpaMatrizTab(t);

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            t.m[xInic+i][yInic+j] = padrao[i][j];
}


void inicSapo(Tab t){
    char padrao[2][4]={{VAZ,ORG,ORG,ORG},{ORG,ORG,ORG,VAZ}};
    int i,j, xInic=t.dim1/2, yInic=t.dim2/2;

    limpaMatrizTab(t);

    for(i=0;i<2;i++)
        for(j=0;j<4;j++)
            t.m[xInic+i][yInic+j] = padrao[i][j];

}


void inicGlider(Tab t){
    char padrao[3][3]={{ORG,ORG,ORG},{ORG,VAZ,VAZ},{VAZ,ORG,VAZ}};
    int i,j,xInic,yInic;

    limpaMatrizTab(t);

    xInic = t.dim1 - 4;
    yInic = t.dim2 - 4;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            t.m[xInic+i][yInic+j] = padrao[i][j];
}


void inicLWSS(Tab t){
    char padrao[4][5]={{VAZ,ORG,VAZ,VAZ,ORG},{ORG,VAZ,VAZ,VAZ,VAZ},{ORG,VAZ,VAZ,VAZ,ORG},{ORG,ORG,ORG,ORG,VAZ}};
    int i,j,xInic,yInic;

    limpaMatrizTab(t);

    xInic = t.dim1 - 5;
    yInic = t.dim2 - 6;

    for(i=0;i<4;i++)
        for(j=0;j<5;j++)
            t.m[xInic+i][yInic+j] = padrao[i][j];

}

void inicCustom(Tab t){
    char **padrao = retornaPadraoCSV();

    if(padrao == NULL){
        printf("Erro na abertura do arquivo \"custom.csv\". ");
    }

    int i,j;

    limpaMatrizTab(t);

    copiaMatrizTab(t, padrao);
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void jogaJogoVida(Tab t){
    char **aux;
    int viz,k;
    int i,j;

    aux = alocaMatriz(t.dim1, t.dim2); //matriz que devera ser usada para atualizar cada jogada

    ////laco de repeticao para jogar TOTAL DE CICLOS
    for(int k = 0; k < t.ciclosVida; k++){
        for(int i = 0; i < t.dim1; i++){
            for(int j = 0; j < t.dim2; j++){
                int celulas_vivas = 0;
                if(i - 1 >= 0 && t.m[i - 1][j]  == ORG) celulas_vivas++;
                if(i + 1 < t.dim1 && t.m[i + 1][j]  == ORG) celulas_vivas++;
                if(j - 1 >= 0 && t.m[i][j-1] == ORG) celulas_vivas++;
                if(j + 1 < t.dim2 && t.m[i][j+1] == ORG) celulas_vivas++;

                if(i - 1 >= 0 && j - 1 >= 0 && t.m[i-1][j-1] == ORG) celulas_vivas++;
                if(i - 1 >= 0 && j + 1 < t.dim2 && t.m[i-1][j+1] == ORG) celulas_vivas++;

                if(i + 1 < t.dim1 && j + 1 < t.dim2 && t.m[i+1][j+1] == ORG) celulas_vivas++;
                if(i + 1 < t.dim1 && j - 1 >= 0 && t.m[i+1][j-1] == ORG) celulas_vivas++;


                if(celulas_vivas < 2) aux[i][j] = VAZ;
                if(celulas_vivas > 3) aux[i][j] = VAZ;
                if(celulas_vivas == 2 || celulas_vivas == 3) aux[i][j] = t.m[i][j];
                if(celulas_vivas == 3) aux[i][j] = ORG;
            }
        }
    copiaMatrizTab(t, aux); //implemente uma funcao que copia uma matriz em outra
    system("cls");
    imprimeMatriz(aux, t.dim1, t.dim2);
    Sleep(100);
    }
    ////fim do laco de repeticao para jogar TOTAL DE CICLOS

    desalocaMatriz(aux, t.dim1);
}

void menuInicJogo(Tab t){
    int opcao;

    printf("(1)Bloco\n(2)Blinker\n(3)Sapo\n(4)Glider\n(5)LWSS\n(6)Custom (.csv)\nEntre com a opcao: ");
    scanf("%d",&opcao);
    switch(opcao)
    {
        case 1:   inicBloco(t); break;
        case 2:   inicBlinker(t); break;
        case 3:   inicSapo(t); break;
        case 4:   inicGlider(t); break;
        case 5:   inicLWSS(t); break;
        case 6:   inicCustom(t); break;
    }

    imprimeMatrizTab(t);

    printf("Se inicializacao correta digite qualquer tecla para iniciar o jogo...");
    while(getchar()!='\n'); getchar();
}


int main()
{
    Tab tabuleiro;

    tabuleiro.dim1 = TAM_LINHAS;
    tabuleiro.dim2 = TAM_COLUNAS;
    tabuleiro.ciclosVida = 100;
    alocaMatrizTab(&tabuleiro);

    menuInicJogo(tabuleiro);

    jogaJogoVida(tabuleiro); //defina o numero de ciclos que o jogo vai rodar (def. pelo usuario ou constante)

    desalocaMatrizTab(tabuleiro);
}

