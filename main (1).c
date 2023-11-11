/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int media, faltas;
    printf("%s","digite a media");
    scanf("%d",&media);
    printf("%s","digite o numero de faltas");
    scanf("%d",&faltas);
    
    if(media>=6)
        if(faltas<=30)
    printf("%s","\nAluno aprovado!");
    
   if(media<6)
    if(faltas>30)
    printf("%s","Aluno reprovado!");
    

    return 0;
}
