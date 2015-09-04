#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
#define line "--------------------------------------------------\n"
/*
int main() {
	char quit = 'j';
	char choice;
	do {
		system("cls");
		printf(line);
		printf("---- Informasjon om studieretningene på HBV ----\n");
		printf(line);
		printf("D: DA\n");
		printf("E: EN-EA\n");
		printf("M: MNT\n");
		printf("P: PD\n");
		printf("Tast inn en av bokstaven for mer informasjon: ");
		scanf("%c", &choice);
		getchar();
		switch (choice) {
			case 'D':
			case 'd':
				system("cls");
				printf(line);
				printf("\tD Studieretning datateknikk\n");
				printf("\tHoegskolelektor: Helge Herheim\n");
				printf(line);
				break;
			case 'E':
			case 'e':
				system("cls");
				printf(line);
				printf("\tE Studieretning elektronikk\n");
				printf("\tHoegskolelektor: Rune Langøy\n");
				printf("eller:");
				printf("\tE Studieretning elektro-automasjon\n");
				printf("\tHoegskolelektor: Ragnar N. Berg\n");
				printf(line);
				break;
			case 'M':
			case 'm':
				system("cls");
				printf(line);
				printf("\tM Studieretning mikro/nanoteknologi\n");
				printf("\tHoegskolelektor: Kristin Imenes\n");
				printf(line);
				break;
			case 'P':
			case 'p':
				system("cls");
				printf(line);
				printf("\tP Studieretning produktdesign\n");
				printf("\tHoegskolelektor:  Birgitte Prebensen\n");
				printf(line);
				break;
			default:
				printf("Vi har ikke noe studieretning med denne bokstaven\n");
				break;
		}
		printf("Vil du tilbake(j/n)? ");
		scanf("%c", &quit);
		getchar();
	} while (quit != 'n' || quit != 'N');


	//system("PAUSE");
	return 0;
}
*/



/* Program 1
int teller = 1;


while (teller <= 10) {
printf("%d\n", teller);
++teller;
}
*/

/*Program 2 Evig summering inntil 0 for å stoppe
int svar = 1;
int sum = 0;
int tall;

while (svar) {
printf("Skriv inn et tall: ");
scanf("%d", &tall);
sum += tall;
printf("Summen er: %d\n", sum);
printf("Vil du fortsette? Tast 1(fortsett) eller 0(stopp): ");
scanf("%d", &svar);
}
*/

/*Program 3 Summering
int tall = 0;
int sum = 0;
printf("Vennligst tast inn et heltall som vi skal summere opp til: ");
scanf("%d", &tall);

for (int i = 0; i < tall; i++) {
sum += i;
}

printf("Summen av alle talla gir: %d\n", sum);
*/

/*Program 4 Gjennomsnittsberegning
int tall = 0;
float sum = 0;
printf("Vennligst tast inn et og et heltall, 5 ganger. Disse skal vi ta gjennomsnitt av: ");

for (int i = 0; i < 5; i++) {
scanf("%d", &tall);
sum += tall;
}

printf("Gjennomsnitt av alle talla gir: %.2f\n", sum/5);
*/

/*Program 5 Renteberegning
double money;
double renter = 0;
int years;
float rentefot;
printf("Vennligst tast inn onsket belop for renteberegning: ");
scanf("%lf", &money);
printf("Vennligst tast inn antall hele ar du onsker og beregne for: ");
scanf("%d", &years);
printf("Vennligst oppgi rentefoten i prosent: ");
scanf("%f", &rentefot);

for (int i = 0; i < years; i++) {
money += money * rentefot / 100;
}
printf("Pengene vil etter %dar ha okt til %.2lfkr\n", years, money);

*/

/*Program 6 Netto + mva beregning

double nettopris = 0;
float mva = 0.23;
double bruttopris;

while (nettopris >= 0) {
printf("Vennligst skriv inn nettoverdien til varen (negativ verdi vil avslutte programmet): ");
scanf("%lf", &nettopris);
if (nettopris < 0) {
break;
}
bruttopris = nettopris + nettopris*mva;
printf("Nettopris %.2lfkr\n", nettopris);
printf("+23%% mva %.2lfkr\n", (nettopris*mva));
printf("------------------------\n");
printf("Bruttopris %.2lf\n\n", bruttopris);
}


*/

//Program 7 Printer ut det laveste tallet en taster inn

int main() {
int tall = 0;
int currentNum = 0;
printf("Tast inn tall, det minste tallet du tastet inn vil bli vist på slutten av programmet.\n");
scanf("%d", &tall);
currentNum = tall;
while(tall >= 0) {
scanf("%d", &tall);
if (currentNum > tall && tall >= 0) {
currentNum = tall;
}
else if (tall < 0) {
break;
}
}
printf("Det minste tallet du tastet inn var %d\n", currentNum);
return 0;
}


/*Program 8 Printer ut multiplikasjonstabell for n gitt tall

int i;
int multiplikator = 2;
char svar = 'j';
while (svar == 'j' || svar == 'J'){
printf("Vennligst oppgi hvilken multiplikasjonstabell du ønsker oppgitt: ");
scanf("%d", &multiplikator);
for (i = 0; i <= 10; i++) {

printf("\n %d * %d = %d", i, multiplikator, i*multiplikator);
}
printf("\nVil du fortsette(j/n)?");
scanf(" %c", &svar);
getchar();
multiplikator++;
}

*/

/* Program 9 multiplikasjonstabell med øvre grense
int i;
int multiplikator = 2;
int grense;
printf("Vennligst oppgi grense for antall multiplikasjonstabell fra 2 du ønsker printet ut: ");
scanf("%d", &grense);
for (int j = 0; j < grense; j++){
for (i = 0; i <= 10; i++) {

printf("\n %d * %d = %d", i, multiplikator, i*multiplikator);
}
multiplikator++;
printf("\n-------------------------------------\n");
}


*/

/* Program 10 med øvre og nedre grense

int i;
int multiplikator = 2;
int nedreGrense;
int øvreGrense;
printf("Vennligst oppgi nedre grense for antall multiplikasjonstabell: ");
scanf("%d", &nedreGrense);
printf("Vennligst oppgi øvre grense for antall multiplikasjonstabell: ");
scanf("%d", &øvreGrense);
multiplikator = nedreGrense;

for (int j = 0; j <= øvreGrense-nedreGrense; j++){
for (i = 0; i <= 10; i++) {

printf("\n %d * %d = %d", i, multiplikator, i*multiplikator);
}
multiplikator++;
printf("\n-------------------------------------\n");
}

*/