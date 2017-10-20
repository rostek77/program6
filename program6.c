
#include <stdio.h>

int mnoz (int a, int b){
	printf("wynik mnozenia: %i\n", a * b);
	return a*b;
}
int dziel (int a, int b){
	printf("wynik dzielenia: %i\n", a / b);
	return a/b; 
}

int dodaj (int a, int b){
	printf("wynik dodawania: %i\n", a + b);
	return a + b;
 }
int odejmij (int a, int b) {
	printf("wynik odejmowania:%i\n", a - b);
	return a - b;
}
int main(void)

{
int a , b ; /*deklaracja wraz z inicjalizacja*/ /* if (wyrazenie) {blok jest wyrazenie prawdziwe} else {blok jest wyrazenie falszywe}*/
char wybor;
 printf("podaj wartosc a: ");
scanf("%i", &a );
printf("podaj wartosc b: ");	
scanf("%i", &b);
printf("podaj znak: ");
scanf("\n%c", &wybor); /*czytaj z konsoli i zapisz pod wybor */
if(wybor == '*') {
	mnoz (a,b);
}else if (wybor == '/') {
	dziel (a , b );
}else if(wybor == '+') {
	dodaj(a, b);
} else if(wybor == '-'){
	odejmij(a,b);

}; /*ten srednik jest opcjonalny jezeli wystepuje klamra*/
return 0;

}


