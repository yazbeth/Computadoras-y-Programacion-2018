#include <stdio.h>
#include <string.h>
#include  "alumnos.h"

int  main ( int argc, char * argv []) {
	
	ALUMNO var1;
	
	var1 = nuevoAlumno ();
	
	printf ( " Edad:% d nombre:% s " , var1. edad , var1. nombre );

	return  0 ;
	
}
