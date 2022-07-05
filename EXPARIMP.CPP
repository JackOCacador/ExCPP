//EXParImpar (Autor: Miguel Teixeira)
#include<conio.h>
#include<stdio.h>
void main () {
clrscr();
int N, Resto;
printf ("\n\n Verificar se um n£mero Ç par ou impar.");
printf ("\n\n Digite um n£mero int: ");
scanf ("%i",&N);
Resto=N%2;
if (Resto==0){
printf ("\n ê um n£mero par");}
else{
printf ("\n ê um n£mero impar");}
getch();
}
