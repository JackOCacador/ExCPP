//(Autor: Miguel Teixeira)
#include<iostream.h>
#include<conio.h>
#include<Areas.h>
#include<ctype.h>
#include<string.h>


//Beep()
#include<dos.h>
void Beep() {
sound(300); delay(500); nosound(); sound(500); nosound();
}

//App para calcular a  rea
void main() {
do{
clrscr();
int op;
float x, y, r;
cout<<"\n Op‡oes de  reas:";
cout<<"\n 1-Circulo";
cout<<"\n 2-Quadrado";
cout<<"\n 3-Retangulo";
cout<<"\n 4-Triangulo";
cout<<"\n 5-Sair";
cout<<"\n\n Digite o n£mero da op‡ao: ";
cin>>op;

switch(op) {
	case 1:
	  cout<<"\n Digite o raio:";
	  cin>>r;
	  cout<<"\n A  rea do circulo ‚: "<<ACirculo;
	 break;

	case 2:
	  cout<<"\n Digite o lado:";
	  cin>>x;
	  cout<<"\n A  rea do quadrado ‚: "<<AQuadrado;
	 break;

	case 3:
	  cout<<"\n Digite a base:";
	  cin>>x;
	  cout<<"\n Digite a altura:";
	  cin>>y;
	  cout<<"\n A  rea do retangulo ‚: "<<ARetangulo;
	 break;

	case 4:
	  cout<<"\n Digite a base:";
	  cin>>x;
	  cout<<"\n Digite a altura:";
	  cin>>y;
	  cout<<"\n A  rea do triangulo ‚: "<<ATriangulo;
	 break;

	case 5:
	 cout<<"\n Aguarde o fim....";
	 delay(1000);
	 return;
	break;
	default:
	  cout<<"\n Op‡ao Invalida";
	  }
	  Beep();
cout<<"\n\n Quer rodar o APP de novo <s/n>: ";
} while(tolower(getch()=='s'));
}