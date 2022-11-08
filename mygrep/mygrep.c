#include <stdio.h>
#include <sys/types.h>
#include <string.h>

#define LINESIZE 1024

int main (int argc, char **argv, char **envp)
{
    int i;
    char line[LINESIZE+1];
    int cont_com;
    char *comp;
    char *tag;

    strcpy(tag, argv[2]);

    FILE* arq;
    arq = fopen (argv[1], "r");

    if ( ! arq )
    {
      perror ("Erro ao abrir arquivo strava_activities.");
      return 0;
    }
  
    //pegar o primeiro argumento e abrir o diretorio para achar o strava_activities
    
    fgets (line, LINESIZE, arq);   // tenta ler a próxima linha
    while (! feof (arq))              
    {
        if((strstr(line, tag)) != NULL){
            cont_com++;
        }
        fgets(line, LINESIZE, arq);
    }

    printf("%d\n", cont_com);
 
  return (0) ;
}