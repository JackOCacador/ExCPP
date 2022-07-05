//(Autor: Miguel Teixeira)
//Este programa faz a leitura dos CARACTERES inseridos pelo usuario e o retorna ao mesmo.
//CARACTER.CPP
#include<iostream.h>
#include<conio.h>
void main()
{
int i;
char Caracter[10];
clrscr();
cout<<"\n Digite os caracteres:\n";
for(i=1;i<=10;i++)
{ cout<<" Caracter["<<i<<"]= ";
cin>>Caracter[i];
}
cout<<"\n Os caracteres que digitou:  ";
for(i=1;i<=10;i++)
{ cout<<Caracter[i]<<" ";
}
getch();
}
