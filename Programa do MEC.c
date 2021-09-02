#include <stdio.h>
#include <string.h>

typedef struct {

  int codigo,alunos,tutores,labinformatica,labciencias;
  char cidade[20];
  float verba;

} Pesquisa;

int main(void) {
  Pesquisa polos[20];
  int qT = 0, resp = 0;
  
  do{   

    setbuf(stdin, 0);
    printf("\ncidade: ");
    fgets(polos[qT].cidade, 20, stdin);
    polos[qT].cidade[strcspn(polos[qT].cidade, "\n")] = '\0';
    
    printf("codigo: ");
    scanf("%d",&polos[qT].codigo);

    printf("quantidade de alunos: ");
    scanf("%d",&polos[qT].alunos);

    printf("quantidade de tutores: ");
    scanf("%d",&polos[qT].tutores);

    printf("possui laboratorio de informática?(1-sim/0-nao): ");
    scanf("%d",&polos[qT].labinformatica);

    printf("possui laboratorio de ciencias?(1-sim/0-nao): ");
    scanf("%d",&polos[qT].labciencias);

    polos[qT].verba = (polos[qT].alunos * 100) + (polos[qT].tutores * 500);
    
    if (polos[qT].labciencias == 0) {

      polos[qT].verba += 17000.00;

    }
  
    if (polos[qT].labinformatica == 0) { 

      polos[qT].verba += 20000.00;

    }  

    printf("deseja cadastrar mais? (1-sim 2-não): ");
    scanf("%d", &resp);

    qT++;

  } while (resp == 1);
    
  printf("\n\nMinisterio da EducaNuelkk");
  printf("\n\nListagem Geral");
  printf("\n|-----------------------------------------------------------------------------|");
  printf("\n| Codigo | Cidade               | Alunos | Tutores | LI | LC | Verba Liberada |");
  printf("\n|-----------------------------------------------------------------------------|");
  for (int  i = 0; i < qT ; i++) {
    printf("\n| %-6d | %-20s | %-6d | %-7d | %-2d | %-2d | %-14.2f |", polos[i].codigo, polos[i].cidade, polos[i].alunos, polos[i].tutores, polos[i].labinformatica, polos[i].labciencias, polos[i].verba);
  }
  printf("\n|-----------------------------------------------------------------------------|");
}
