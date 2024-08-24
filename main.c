#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

//confere
int confere(char *tab, int *linha, char simb){
    int tam, i, j;
tam = *linha;
  
    printf("Vez do símbolo %c !\n", simb);
    while(1){
          printf("Digite a linha e coluna");
        scanf("%d", &i);
        scanf("%d", &j);
i= i-1;
  j= j-1;
       if(*(tab + i * tam + j) != ' '){
            printf("Casa cheia, tente novamente\n");
        }
        else{
            (*(tab + i * tam + j) = simb);
            break;
        }
    }
    return 1;
}



//inicializa
void inicializa(char *tab, int linhas){
    for(int i=0; i<linhas; i++){
  for (int j=0; j<linhas; j++){
  *tab = ' ';
    tab++;
  }
}
}

void linhas(int linhas){
  printf("--");
  for( int i = 1; i <= linhas;i++){
    printf("-----");
  }
  printf("\n");
}

//imprime
void print_tab(char *tab, int linha){
for(int i=0; i < linha; i++){
  printf("   ");
  printf("%d ", i + 1);

  }
  for(int i=0; i<linha; i++){
    printf("\n%d ", i +1);
    for(int j=0; j<linha; j++){
       printf("%c  ",*tab);
      tab++;
       if (j<linha){
         printf(" |");
       }
      
    }
printf("\n");
    linhas(linha);
  }

    for(int i=0; i<linha; i++){
      for(int j=0; j<linha; j++){
    }
  }
}
int main(){

  char nome1[30], nome2[30];
  char p1, p2;
  int win=1;
  int k=0, l=0, inicio=10, linha , coluna;
  
  printf("Insira o nome dos jogadores\n");
    scanf(" %[^\n]s", nome1);
    scanf(" %[^\n]s", nome2);

  
printf("Insira o simbolo do jogador %s \n", nome1);
scanf(" %c", &p1);
  
printf("Insira o simbolo do jogador %s \n", nome2);
scanf(" %c", &p2);
  
  printf("Insira o tamanho do tabuleiro \n");
  scanf(" %d", &linha);
  char tab[linha][linha];
    system("clear");

  
  printf("       Bem vindo jogador %s \n", nome1);

  printf("       Bem vindo jogador %s \n", nome2);
  
  printf("\n       Boa sorte jogadores %s e %s ! \n", nome1, nome2);

  
inicializa(tab[0], linha);
  


print_tab(tab[0],linha);
  
while(win==1){

confere(tab[0], &linha, p1);
  int cont=0;
  for(int i=0; i<linha; i++){
    
      for (int j=0; j<linha; j++){
        if(tab[i][j] == p1){
      cont++;
    }
    else{
      cont=0;
        }
    if (cont == 3){
        system("clear");
    printf("Simbolo %c ganhou!! \n",p1);
print_tab(tab[0],linha);
      return 0;
    }
  }

  }
  for(int i=0; i<linha; i++){
    cont=0;
      for (int j=0; j<linha; j++){
       if(tab[j][i] == p1){
      cont++;
    }
        }
    if (cont == 3){
        system("clear");
    printf("Simbolo %c ganhou!! \n",p1);
print_tab(tab[0],linha);
      return 0;
    }
    }


  cont=0;
for(int i=0; i<linha; i++){
 
         if(tab[i][i] == p1){
      cont++;
    }
  if (cont == 3){
        system("clear");
    printf("Simbolo %c ganhou!! \n",p1);
print_tab(tab[0],linha);
      return 0;
    }
    }
cont = 0;
   for(int i=0; i<linha; i++){
         if(tab[i][linha - i - 1] == p1){
      cont++;
    }
  if (cont == 3){
        system("clear");
    printf("Simbolo %c ganhou!! \n",p1);
print_tab(tab[0],linha);
      return 0;
    }
    }

  system("clear");
print_tab(tab[0],linha);
  
    confere(tab[0],&linha ,p2);
   cont=0;


  for(int i=0; i<linha; i++){
    
      for (int j=0; j<linha; j++){
        if(tab[i][j] == p2){
      cont++;
    }
    else{
      cont=0;
        }
    if (cont == 3){
        system("clear");
      print_tab(tab[0],linha);
    printf("Simbolo %c ganhou!!\n",p2);

      return 0;
    }
  }
  }


  

  for(int i=0; i<linha; i++){
    cont=0;
      for (int j=0; j<linha; j++){
       if(tab[j][i] == p2){
      cont++;
    }

        }
    if (cont == 3){
        system("clear");
    printf("Simbolo %c ganhou!! \n",p2);
print_tab(tab[0],linha);
      return 0;
    }
    }

 
  for(int i=0; i<linha; i++){
         if(tab[i][i] == p2){
      cont++;
    }
  if (cont == 3){
        system("clear");
    printf("Simbolo %c ganhou!! \n",p2);
print_tab(tab[0],linha);
      return 0;
    }
    }
cont=0;

   for(int i=0; i<linha; i++){
         if(tab[i][linha - i - 1] == p2){
      cont++;
    }
  if (cont == 3){
        system("clear");
    printf("Simbolo %c ganhou!! \n",p2);
print_tab(tab[0],linha);
      return 0;
    }
    }




  
    system("clear");
print_tab(tab[0],linha);
}
  return 0;
}