//ExAppMF (Autor: Miguel Teixeira)
#include<conio.h>
#include<stdio.h>
void main() {
clrscr ();
int NC;
float NT1, NT2, NT3, MF;
char turma[30], disciplina[12], nome[30];
printf ("\n Boletim");
printf ("\n Digite sua turma: ");
scanf ("%s" , turma);
printf ("\n Digite sua disciplina: ");
scanf ("%s" , disciplina);
printf ("\n Digite o seu n£mero da chamada: ");
scanf ("%i" , &NC);
printf ("\n Digite o seu nome: ");
scanf ("%s" , nome);
printf ("\n Digite a m‚dia do primeiro trimestre: ");
scanf ("%f" , &NT1);
printf ("\n Digite a m‚dia do segundo trimestre: ");
scanf ("%f" , &NT2);
printf ("\n Digite a m‚dia do terceiro trimestre: ");
scanf ("%f" , &NT3);
MF = (3*NT1 + 3*NT2 + 4*NT3)/10;
if (MF >= 6.0)
{
printf ("\n Boletim    Turma: %s  Disciplina: %s", turma, disciplina);
printf ("\n N£mero: %i Nome: %s", NC, nome);
printf ("\n NT1: %3.1f  NT2: %3.1f   NT3: %3.1f", NT1, NT2, NT3);
printf ("\n M‚dia Final:  %3.1f", MF);
printf ("\n Promovido");}
else
{
printf ("\n Boletim    Turma: %s  Disciplina: %s", turma, disciplina);
printf ("\n N£mero: %i  Nome: %s", NC, nome);
printf ("\n NT1: %3.1f   NT2: %3.1f    NT4: %3.1f", NT1, NT2, NT3);
printf ("\n M‚dia Final:  %3.1f", MF);
printf ("\n Recupera‡ao Final");}
getch();
}