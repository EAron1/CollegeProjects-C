// aplikacija za usmeni ispit iz kolegija Programiranje II. Aplikacija rezerviranja mjesta u avionu. Aron Gaspic
// exam application for Programming II subject on college. Plane seat booking/checking app. Aron Gaspic 
#include <stdio.h>
#include "Methods.h" // my header file

int main()
{
	printf("Dobrodosli u aplikaciju za rezervaciju avionskih mjesta.\n");
	//printf("Welcome to application. \n");
	flightName = (char*)malloc((FLIGHTNAMELONG) * sizeof(char)); // allocate memory for flight name

	setFlightName();

	free(flightName);
	return 0;
}


