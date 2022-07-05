//(Autor: Miguel Teixeira)
//Este programa calcula o consumo de combustivel do carro por quilometro.
//Combustivel.CPP
#include<iostream.h>
#include<conio.h>

void main () {
clrscr();
float Kmf, Kmi, Lts, Cons;
cout<<"\n Digite o Quilometro Final: ";
cin>>Kmf;
cout<<"\n Digite o Quilometro Inicial: ";
cin>>Kmi;
cout<<"\n Digite a quantidade de gasolina: ";
cin>>Lts;
Cons=(Kmf-Kmi)/Lts;
cout<<"\n F¢rmula:\n";
cout<<"\n (kmf-Kmi)/Lts = ("<<Kmf<<" - "<<Kmi<<") / "<<Lts<<" = "<<Cons;
cout<<"\n\n O consumo de combustivel do carro por quilometro ‚ igual a: "<<Cons<<" km/litro";
cout<<"\n\n Tecle qualquer coisa para sair..";
getch();
}