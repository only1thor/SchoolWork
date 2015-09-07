#include "stdio.h"
#include "stdlib.h"

int main()
{
	char input;
	printf("---- Informasjon om studieretningene ved HIVE ----\n");
	printf(
		"D:Datateknikk \n"
		"E:Elektronikk og Eloktro Automasjon \n"
		"M:Microsystemteknologi \n"
		"P:Produktdesign \n"
		"hva vil du vite mer om? \n"
		);
		scanf("%c",&input);
		
	switch(input)
	{
		case 'D' :
		case 'd' :
		system("clear");
		printf("\n"
			"Studieretning Datateknikk \n"
			"Hoegskolelektor: Helge Herheim"
			);
		break;
		case 'E' :
		case 'e' :
		system("clear");
		printf("\nStudieretning Elektronikk \n"
			"Hoegskolelektor: Rune Langøy \n"
			"eller \n"
			"Studieretning Maritime Elektro-Automasjon \n"
			"Hoegskolelaerer: Ragnar N. Berg \n"
			);
		break;
		case 'M' :
		case 'm' :
		system("clear");
		printf("\nStudieretning Mikrosystemteknologi \n"
			"Foersteamanuensis: Kristin Imenes \n"
			);
		break;
		case 'P' :
		case 'p' :
		system("clear");
		printf("\n"
			"Studieretning produktdesign \n"
			"Hoegskolelektor: Birgitte Prebensen"
			);
		break;
		default :
		printf("\nfeil input, prøv igjen...");
		
	}
return 0;
}