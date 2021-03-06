#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define ORG 'X'
#define VAZ ' '
#define TAM 101

#define TOTAL_DE_CICLOS 100

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

char** alocaMatriz(int nL, int nC){
    char **m;
    m = (char**)malloc(nL*sizeof(char*));
    for(int i = 0; i < nL; i++){
        m[i] = (char*)malloc(nC*sizeof(char));
    }
    return m;
}

void copiaMatriz(char **m, char **aux, int nL, int nC){
    for(int i = 0; i < nL; i++){
        for(int j = 0; j < nC; j++){
            m[i][j] = aux[i][j];
        }
    }
}

void imprimeMatriz(char **m, int nL, int nC){
    for(int i = 0; i < nL; i++){
        for(int j = 0; j < nC; j++){
            printf("%c ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void desalocaMatriz(char **m, int nL){
    for(int i = 0; i < nL; i++){
        free(m[i]);
    }
    free(m);
}

void limpaMatriz(char **m, int nL, int nC)
{
    int i,j;
    for(i=0;i<nL;i++)
     for(j=0;j<nC;j++)
        m[i][j]=VAZ;
}

void inicBlinker(char **m, int nL, int nC)
{
  char padrao[1][3]={{ORG,ORG,ORG}};
  int i,j, xInic=nL/2, yInic=nC/2;

  limpaMatriz(m,nL,nC);

 for(i=0;i<1;i++)
    for(j=0;j<3;j++)
      m[xInic+i][yInic+j]=padrao[i][j];
}

void inicBloco(char **m, int nL, int nC)
{
 char padrao[2][2]={{ORG,ORG},{ORG,ORG}};
  int i,j,xInic=nL/2, yInic=nC/2;


 limpaMatriz(m,nL,nC);


 for(i=0;i<2;i++)
    for(j=0;j<2;j++)
      m[xInic+i][yInic+j]=padrao[i][j];
}


void inicSapo(char **m, int nL, int nC)
{

 char padrao[2][4]={{VAZ,ORG,ORG,ORG},{ORG,ORG,ORG,VAZ}};
  int i,j,xInic=nL/2, yInic=nC/2;

  limpaMatriz(m,nL,nC);


   for(i=0;i<2;i++)
      for(j=0;j<4;j++)
      m[xInic+i][yInic+j]=padrao[i][j];

}


void inicGlider(char **m, int nL, int nC)
{
char padrao[3][3]={{ORG,ORG,ORG},{ORG,VAZ,VAZ},{VAZ,ORG,VAZ}};
 int i,j,xInic,yInic;

 limpaMatriz(m,nL,nC);

 xInic=nL-4;
 yInic=nC-4;

 for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      m[xInic+i][yInic+j]=padrao[i][j];
}


void inicLWSS(char **m, int nL, int nC)
{
char padrao[4][5]={{VAZ,ORG,VAZ,VAZ,ORG},{ORG,VAZ,VAZ,VAZ,VAZ},{ORG,VAZ,VAZ,VAZ,ORG},{ORG,ORG,ORG,ORG,VAZ}};
 int i,j,xInic,yInic;

 limpaMatriz(m,nL,nC);

 xInic=nL-5;
 yInic=nC-6;

 for(i=0;i<4;i++)
    for(j=0;j<5;j++)
      m[xInic+i][yInic+j]=padrao[i][j];

}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void jogaJogoVida(char **m, int nL, int nC)
{
  char **aux;
  int viz,k;
  int i,j;

  aux = alocaMatriz(nL,nC); //matriz que devera ser usada para atualizar cada jogada

   ////laco de repeticao para jogar TOTAL DE CICLOS
   for(int k = 0; k < TOTAL_DE_CICLOS; k++){
        for(int i = 0; i < nL; i++){
            for(int j = 0; j < nC; j++){
                int celulas_vivas = 0;
                if(i - 1 >= 0 && m[i - 1][j]  == ORG) celulas_vivas++;
                if(i + 1 < nL && m[i + 1][j]  == ORG) celulas_vivas++;
                if(j - 1 >= 0 && m[i][j-1] == ORG) celulas_vivas++;
                if(j + 1 < nC && m[i][j+1] == ORG) celulas_vivas++;

                if(i - 1 >= 0 && j - 1 >= 0 && m[i-1][j-1] == ORG) celulas_vivas++;
                if(i - 1 >= 0 && j + 1 < nC && m[i-1][j+1] == ORG) celulas_vivas++;

                if(i + 1 < nL && j + 1 < nC && m[i+1][j+1] == ORG) celulas_vivas++;
                if(i + 1 < nL && j - 1 >= 0 && m[i+1][j-1] == ORG) celulas_vivas++;


                if(celulas_vivas < 2) aux[i][j] = VAZ;
                if(celulas_vivas > 3) aux[i][j] = VAZ;
                if(celulas_vivas == 2 || celulas_vivas == 3) aux[i][j] = m[i][j];
                if(celulas_vivas == 3) aux[i][j] = ORG;
            }
      }
      copiaMatriz(m, aux,nL,nC); //implemente uma funcao que copia uma matriz em outra
      system("cls");
      imprimeMatriz(aux,nL,nC);
      Sleep(100);
   }


   ////fim do laco de repeticao para jogar TOTAL DE CICLOS

  desalocaMatriz(aux,nL);

}

void menuInicJogo(char **mat, int nL, int nC)
{
    int opcao;

    printf("(1)Bloco\n(2)Blinker\n(3)Sapo\n(4)Glider\n(5)LWSS\nEntre com a opcao: ");
    scanf("%d",&opcao);
    switch(opcao)
    {
      case 1:   inicBloco(mat,nL,nC); break;
      case 2:   inicBlinker(mat,nL,nC); break;
      case 3:   inicSapo(mat,nL,nC); break;
      case 4:   inicGlider(mat,nL,nC); break;
      case 5:   inicLWSS(mat,nL,nC); break;
    }

    imprimeMatriz(mat,nL,nC);

    printf("Se inicializacao correta digite qualquer tecla para iniciar o jogo...");
    while(getchar()!='\n'); getchar();
}


int main()
{
    char **mat;

    int nL=20,nC=20; //ou fornecido pelo usuario


    mat = alocaMatriz(nL,nC);

    menuInicJogo(mat,nL,nC);

    jogaJogoVida(mat,nL,nC); //defina o numero de ciclos que o jogo vai rodar (def. pelo usuario ou constante)

    desalocaMatriz(mat,nL);
}
