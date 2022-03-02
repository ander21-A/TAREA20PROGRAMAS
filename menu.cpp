//ANDERSON RONALDO RAMOS SOLÓRZANO CARNET: 5990-21-4345
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <sstream>
#include <math.h>
#include <locale.h>
using namespace std;

void convertir(int nume, string &numeross, string aux){
	while(nume>0){
		if(nume%2 ==0){
			numeross = numeross + "0";
		}else{
			numeross = numeross + "1";
		}
		nume = nume/2;
	}
	for(int i=numeross.length()-1;i>=0;i--){
		aux = aux + numeross.at(i);
	}
	numeross = aux;
}



int main(void)
{
	setlocale(LC_CTYPE, "Spanish");
	int op = 0;
	//suma
	int n1, n2, sum, mul, div, numero,nume;
	//conversiones
	float millas, km,k, metros, m, pulgadas, libras,l, kilos;
	char palabra[100], palabraresulta[100];
	int i = 0;
	//arabigos a romanos
	int num, un,de,ce,mi;
	//numeros a letras
	int n, uni,dec,cen,unimil;
	int tab=1,multiplicar=0;
	int res = 0;
	int di[20];
	int decim, resi, resu, t=0;
	int co,ca;
	float h;
	
	do{
		system("cls");
		printf("---------------MENÚ DE OPCIONES--------------\n\n");
		printf("1. SUMA, RESTA, MULTIPLICACION Y DIVISION DE DOS NUMEROS\n");
		printf("2. DETERMINAR SI UN NUMERO ES PAR O IMPAR\n");
		printf("3. Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa\n");
		printf("4. Determinar si una palabra o un número es palíndromo\n");
		printf("5. Conversión de números arábigos a romanos (minimo 1,000)\n");
		printf("6. Conversión de números enteros a letras\n");
		printf("7. Conversión de números enteros con decimal a letras\n");
		printf("8. Una tabla de multiplicar\n");
		printf("9. Todas las tablas de multiplicar del 1 al 10\n");
		printf("10. Crear de forma gráfica la multiplicación manual\n");
		printf("11. Conversión de números decimales a binario\n");
		printf("12. Conversión de números decimales a hexadecimales\n");
		printf("13. Crear Figuras Geométricas Básicas\n");
		printf("14. Mover un punto en toda la pantalla\n");
		printf("15. Simulación de un Cajero (Autómata)\n");
		printf("16. Calcular la hipotenusa\n");
		printf("17. SALIR\n\n");
		printf("---ELIJA SU OPCION---");
		scanf("%d",&op);
		switch(op)
		{
			case 1: 
				system("cls");
				printf("Ingrese el primer numero: ");
				scanf("%d",&n1);
				printf("Ingrese el segundo numero: ");
				scanf("%d",&n2);
				printf("La suma: %d + %d es: %d\n",n1,n2,n1+n2);
				printf("La resta: %d - %d es: %d\n",n1,n2,n1-n2);
				printf("La multiplicacion: %d * %d es: %d\n",n1,n2,n1*n2);
				printf("La division: %d / %d es: %d\n",n1,n2,n1/n2);
				system("PAUSE");
			break;
			case 2:
				system("cls");
				printf("Ingrese el numero: ");
				scanf("%d",&numero);
				if(numero==0){
					printf("El numero es cero\n");
				}
				else if(numero%2==0){
					printf("El numero es par\n");
				}
				else{
					printf("El numero es impar\n");
				}
				system("PAUSE");
			break;
			case 3:
				system("cls");
				printf("Ingrese el valor a convertir (Kilometros-Millas): ");
				scanf("%f",&km);
				printf("Ingrese el valor a convertir (Metros-Pulgadas): ");
				scanf("%f",&metros);
				printf("Ingrese el valor a convertir (Libras-Kilos): ");
				scanf("%f",&libras);
				
				millas = (km*62)/100;
				k = km * 1.61;
				pulgadas = metros * 0.03;
				m = metros * 39.37;
				kilos = libras * 0.45;
				l = libras * 2.20;
				printf("Kilometros a Millas es: %7.2f\n",millas);
				printf("Millas a Kilometros es: %7.2f\n\n",k);
				printf("Metros a Pulgadas es: %7.2f\n",pulgadas);
				printf("Pulgadas a Metros es: %7.2f\n\n",m);
				printf("Libras a Kilos es: %7.2f\n",kilos);
				printf("Kilos a libras es: %7.2f\n",l);
				system("PAUSE");
			break;
			case 4:
				system("cls");
				printf("Ingrese la palabra a verificar: ");
				cin>>palabra;
				for (i = (strlen(palabra) - 1); i >=0 ; i--){
					palabraresulta[strlen(palabra)-1-i] = palabra[i];
				}palabraresulta[strlen(palabra)]='\0';
				if (strcmp(palabra,palabraresulta)==0){
					cout<<"La palabra: "<<palabra<<" es Palindroma"<<endl;
				}else {
					cout<<"La palabra: "<<palabra<<" NO es Palindroma"<<endl;
				}
				system("PAUSE");
			break;
			case 5:{
				system("cls");
				cout<<"Digite un Numero: ";
				cin>>num;
				un = num%10; num/= 10;
				de = num%10; num/=10;
				ce = num%10; num/=10;
				mi = num%10; num/=10;
				switch(mi){
					case 1: cout<<"M";break;
					case 2: cout<<"MM";break;
					case 3: cout<<"MMM";break;
				}
				switch(ce){
					case 1: cout<<"C";break;
					case 2: cout<<"CC";break;
					case 3: cout<<"CCC";break;
					case 4: cout<<"CD";break;
					case 5: cout<<"D";break;
					case 6: cout<<"DC";break;
					case 7: cout<<"DCC";break;
					case 8: cout<<"DCCC";break;
					case 9: cout<<"CM";break;
				}
				switch(de){
					case 1: cout<<"X";break;
					case 2: cout<<"XX";break;
					case 3: cout<<"XXX";break;
					case 4: cout<<"XL";break;
					case 5: cout<<"L";break;
					case 6: cout<<"LX";break;
					case 7: cout<<"LXX";break;
					case 8: cout<<"LXXX";break;
					case 9: cout<<"XC";break;
				}
				switch(un){
					case 1: cout<<"I";break;
					case 2: cout<<"II";break;
					case 3: cout<<"III";break;
					case 4: cout<<"IV";break;
					case 5: cout<<"V";break;
					case 6: cout<<"VI";break;
					case 7: cout<<"VII";break;
					case 8: cout<<"VIII";break;
					case 9: cout<<"IX";break;
				}cout<<endl;
			}system("PAUSE");
			break;
			
			case 6:{
			system("cls");
			cout<<"Escriba un numero: "; cin>>n;
			uni = n%10; n/= 10;
			dec = n%10; n/=10;
			cen = n%10; n/=10;
			unimil = n%10; n/=10;
			
			switch (unimil){
				case 0: cout<<" ";break;
				case 1: cout<<"mil";break;
				case 2: cout<<"dos mil";break;
				case 3: cout<<"tres mil";break;
				case 4: cout<<"cuatro mil ";break;
				case 5: cout<<"cinco mil";break;
				case 6: cout<<"seis mil ";break;
				case 7: cout<<"siete mil";break;
				case 8: cout<<"ocho mil";break;
				case 9: cout<<"nueve mil";break;
			}
			switch (cen){
				case 0: cout<<" ";break;
				case 1: if(dec==0 && uni==0){
						cout<<"cien";
					}else{
						cout<<"ciento ";
					}break;
				case 2: cout<<"doscientos ";break;
				case 3: cout<<"trescientos ";break;
				case 4: cout<<"cuatrocientos ";break;
				case 5: cout<<"quinientos ";break;
				case 6: cout<<"seiscientos ";break;
				case 7: cout<<"setecientos ";break;
				case 8: cout<<"ochocientos ";break;
				case 9: cout<<"nuevecientos ";break;
			}
			switch (dec){
				case 1: switch (uni){
						case 0: cout<<"diez ";break;
						case 1: cout<<"once ";break;
						case 2: cout<<"doce ";break;
						case 3: cout<<"trece ";break;
						case 4: cout<<"catorce ";break;
						case 5: cout<<"quince ";break;
						case 6: cout<<"dieciseis ";break;
						case 7: cout<<"diecisiete ";break;
						case 8: cout<<"dieciocho ";break;
						case 9: cout<<"diecinueve ";break;
				}break;
				case 2: switch (uni){
						case 0: cout<<"veinte "; break;
						case 1: cout<<"veintiuno "; break;
						case 2: cout<<"veintidos "; break;
						case 3: cout<<"veintitres "; break;
						case 4: cout<<"veinticuatro "; break;
						case 5: cout<<"veinticinco "; break;
						case 6: cout<<"veintiseis "; break;
						case 7: cout<<"veintisiete "; break;
						case 8: cout<<"veintiocho "; break;
						case 9: cout<<"veintinueve "; break;
				}break;
				case 3: if (uni==0){
					cout<<"treinta ";
				}else{
					cout<<"treinta y ";
				}break;
				case 4: if (uni==0){
					cout<<"cuarenta ";
				}else{
					cout<<"cuarenta y ";
				}break; 
				case 5: if (uni==0){
					cout<<"cincuenta ";
				}else{
					cout<<"cincuenta y ";
				}break;
				case 6: if (uni==0){
					cout<<"sesenta ";
				}else{
					cout<<"sesenta y ";
				}break;
				case 7: if (uni==0){
					cout<<"setenta ";
				}else{
					cout<<"setenta y ";
				}break;
				case 8: if (uni==0){
					cout<<"ochenta ";
				}else{
					cout<<"ochenta y ";
				}break;
				case 9: if (uni==0){
					cout<<"noventa ";
				}else{
					cout<<"noventa y ";
				}break;
			}
			
			switch (uni){
				case 0: if(unimil==0 && cen==0 && dec==0){
					cout<<"cero";
				}else{
					cout<<" ";
				}break;
				
				case 1: if(unimil==0 && cen==0 && dec==0){
					cout<<"uno";
				}else if(unimil==0 && cen==0 && dec>=2){
					cout<<"uno";
				}else if(unimil==0 && cen>=1 &&dec>=2 || dec==0){
					cout<<"uno";
				}else if(unimil>=1 && cen>=0 && dec>=2 || dec==0){
					cout<<"uno";
				}else{
					cout<<"";
				}break;
				
				case 2: if(unimil==0 && cen==0 && dec==0){
					cout<<"dos";
				}else if(unimil==0 && cen==0 && dec>=2){
					cout<<"dos";
				}else if(unimil==0 && cen>=1 && dec>=2 || dec==0){
					cout<<"dos";
				}else if(unimil>=1 && cen>=0 && dec>=2 || dec==0){
					cout<<"dos";
				}else{
					cout<<"";
				}break;
				
				case 3: if(unimil==0 && cen==0 && dec==0){
					cout<<"tres";
				}else if(unimil==0 && cen==0 && dec>=2){
					cout<<"tres";
				}else if(unimil==0 && cen>=1 && dec>=2 || dec==0){
					cout<<"tres";
				}else if(unimil>=1 && cen>=0 && dec>=2 || dec==0){
					cout<<"tres";
				}else{
					cout<<"";
				}break;
				
				case 4: if(unimil==0 && cen==0 && dec==0){
					cout<<"cuatro";
				}else if(unimil==0 && cen==0 && dec>=2){
					cout<<"cuatro";
				}else if(unimil==0 && cen>=1 && dec>=2 || dec==0){
					cout<<"cuatro";
				}else if(unimil>=1 && cen>=0 && dec>=2 || dec==0){
					cout<<"cuatro";
				}else{
					cout<<"";
				}break;
				
				case 5: if(unimil==0 && cen==0 && dec==0){
					cout<<"cinco";
				}else if(unimil==0 && cen==0 && dec>=2){
					cout<<"cinco";
				}else if(unimil==0 && cen>=1 && dec>=2 || dec==0){
					cout<<"cinco";
				}else if(unimil>=1 && cen>=0 && dec>=2 || dec==0){
					cout<<"cinco";
				}else{
					cout<<"";
				}break;
				
				case 6: if(unimil==0 && cen==0 && dec==0){
					cout<<"seis";
				}else if(unimil==0 && cen==0 && dec>=2){
					cout<<"seis";
				}else if(unimil==0 && cen>=1 && dec>=2 || dec==0){
					cout<<"seis";
				}else if(unimil>=1 && cen>=0 && dec>=2 || dec==0){
					cout<<"seis";
				}else{
					cout<<"";
				}break;
				
				case 7: if(unimil==0 && cen==0 && dec==0){
					cout<<"siete";
				}else if(unimil==0 && cen==0 && dec>=2){
					cout<<"siete";
				}else if(unimil==0 && cen>=1 && dec>=2 || dec==0){
					cout<<"siete";
				}else if(unimil>=1 && cen>=0 && dec>=2 || dec==0){
					cout<<"siete";
				}else{
					cout<<"";
				}break;
				
				case 8: if(unimil==0 && cen==0 && dec==0){
					cout<<"ocho";
				}else if(unimil==0 && cen==0 && dec>=2){
					cout<<"ocho";
				}else if(unimil==0 && cen>=1 && dec>=2 || dec==0){
					cout<<"ocho";
				}else if(unimil>=1 && cen>=0 && dec>=2 || dec==0){
					cout<<"ocho";
				}else{
					cout<<"";
				}break;
				
				case 9: if(unimil==0 && cen==0 && dec==0){
					cout<<"nueve";
				}else if(unimil==0 && cen==0 && dec>=2){
					cout<<"nueve";
				}else if(unimil==0 && cen>=1 && dec>=2 || dec==0){
					cout<<"nueve";
				}else if(unimil>=1 && cen>=0 && dec>=2 || dec==0){
					cout<<"nueve";
				}else{
					cout<<"";
				}break;
			}cout<<endl;
			}system("PAUSE");	
			break;	
			
			case 7:
			system("cls");
			cout<<"No encontrado :("<<endl;
			system("PAUSE");
			break;
			
			case 8:
			system("cls");
			cout <<"Ingrese el numero de tabla:";
			cin>>tab;
 			for (int i=1;i<=10;i++){
 			multiplicar = tab * i;
 			cout<<tab<<" X "<<i<<" = "<<multiplicar<<endl;
 			}system("PAUSE");
 			break;
 			
 			case 9:
 			system("cls");
 			for(int i=1;i<=10;i++){
	 			for(int ii=1;ii<=10;ii++){
 				res = i * ii;
 				cout<<i<< " X "<<ii<<" = "<<res<<endl;}
	 			cout<<"________________________"<<endl;
 			}system("PAUSE");
 			break;
 			
 			case 10:
 			system("cls");
 			cout<<"No encontrado :("<<endl;
			system("PAUSE");
 			break;
 			
 			case 11:
 			system("cls");{
 			string numeross = " ",aux;
 			cout<<"Ingrese el Numero: \n"; cin>>nume;
 			convertir(nume,numeross,aux);
 			istringstream(numeross) >> nume;
 			cout<<"Numero binario \n"<<nume<<endl;}
 			system("PAUSE");
			break;
 			
 			case 12:{
 			system("cls");
 			cout<<"Ingrese el numero a convertir a Hexadecimal: "; cin>>decim;
 			do{
 				resi = decim %16;
				resu = decim /16;
				di[t] = resi;
				decim = resu;
				t++;	
			}while (resu > 15);
			di[t] = resu;
			cout<<"El equivalente es: ";
			for (int m = t; m>=0; m--){
				if (di[m] ==10)
				{
					cout <<"A";
				}
				else if(di[m]==11)
				{
					cout<<"B";
				}
				else if(di[m]==12)
				{
					cout<<"C";
				}
				else if(di[m]==13)
				{
					cout<<"D";
				}
				else if(di[m]==14)
				{
					cout<<"E";
				}
				else if(di[m]==15)
				{
					cout<<"F";
				}else{
					cout<<di[m];
				}
			}cout<<endl;}	
 			system("PAUSE");
 			break;
 			
 			case 13:
 			system("cls");
 			cout<<"No encontrado :("<<endl;
			system("PAUSE");
 			break;
 			
 			case 14:
 			system("cls");
 			cout<<"No encontrado :("<<endl;
			system("PAUSE");
 			break;
 			
 			case 15:
 			system("cls");
 			cout<<"No encontrado. :("<<endl;
			system("PAUSE");
 			break;
 			
 			case 16:{
 			system("cls");
 			cout<<"Escriba el cateto Opuesto: "; cin>>co;
 			cout<<"Escriba el cateto Adyacente: "; cin>>ca;
 			
 			h= sqrt (pow(co,2)+pow(ca,2));
 			cout<<"La Hipotenusa es: "<<h<<endl;
 			}system("PAUSE");
 			break;
		}
		
	}while (op != 17);
}
