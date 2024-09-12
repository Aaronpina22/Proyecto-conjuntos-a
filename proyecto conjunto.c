// jaiker figueredo 30916384//
//aaron piña 31026016//
//Sebastian Devies//
//Jose Ignacio//
//Genderson piñango//
//Luis Rodriguez//
//Luis Moreno//
//Alejandro Vargas //
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include <math.h>

void juego(){
	
	int elec; 
	char rese1, rese2, rese3, resg1, resg2, resg3, resc1, resc2, resc3;
	
	inicio:
	printf("\n\nBienvenido a Millonario\nElige el tema en el que deseas participar");
    printf("\n1. Ecuaciones exponenciales");
	printf("\n2. Grafos");
	printf("\n3. Volver");
		printf("\n\nIngrese la opcion que desee -> ");
	scanf("%d",&elec);
	
	while(elec<0 || elec>3){
		printf("\n\nPor favor ingrese una opcion valida");
    printf("\n1. Ecuaciones exponenciales");
	printf("\n2. Grafos");
	printf("\n3. Volver");
		printf("\n\nIngrese la opcion que desee -> ");
	scanf("%d",&elec);		
	}
	
	switch(elec){
		
		case 1: {
			
			printf("\n\nNIVEL ECUACIONES EXPONENCIALES\n\nModo de Juego:\nResponde solo con letras de la A a la D, de lo contrario seras eliminado.");
			
			printf("\n\nPregunta 1");
			printf("\n\nCual es la base de la expresion 2^5?");
			printf("\n\nA. 3");
			printf("\nB. 5");
			printf("\nC. 2");
			printf("\nD. ^");
			printf("\n\nIngrese su opcion -> ");
			scanf(" %c",&rese1);
			
			if(rese1 == 'c'){
				printf("\n\nTu respuesta es correcta!\nAvanzas a la siguiente pregunta!");
			}
			else{
				printf("\n\nTu respuesta es incorrecta :(\nQuedas Eliminado");
				goto inicio;
			}
			
			
			
			printf("\n\nPregunta 2");
			printf("\n\nSi 3^x = 27, Â¿cual es el valor de x?");
			printf("\n\nA. 2");
			printf("\nB. 3");
			printf("\nC. 4");
			printf("\nD. y");
			printf("\n\nIngrese su opcion -> ");
			scanf(" %c",&rese2);
			
			if(rese2 == 'b'){
				printf("\n\nTu respuesta es correcta!\nAvanzas a la siguiente pregunta!");
			}
			else{
				printf("\n\nTu respuesta es incorrecta :(\nQuedas Eliminado");
				goto inicio;
			}
			
			printf("\n\nPregunta 3");
			printf("\n\nEl crecimiento exponencial lo podemos ver en:");
			printf("\n\nA. Finanzas");
			printf("\nB. Biologia");
			printf("\nC. Fisica");
			printf("\nD. Todas las anteriores");
			printf("\n\nIngrese su opcion -> ");
			scanf(" %c",&rese3);
			
			if(rese3 == 'd'){
				printf("\n\nTu respuesta es correcta!\nGanaste el Nivel de Ecuaciones Exponenciales!");
			}
			else{
				printf("\n\nTu respuesta es incorrecta :(\nQuedas Eliminado");
				goto inicio;
			}			
			
			break;
		}
	
	
	case 2: {
			
			printf("\n\nNIVEL GRAFOS\n\nModo de Juego:\nResponde solo con letras de la A a la D, de lo contrario seras eliminado.");
			
			printf("\n\nPregunta 1");
			printf("\n\nCual de las siguientes opciones NO es un elemento fundamental de un grafo?");
			printf("\n\nA. Nodos");
			printf("\nB. Aristas");
			printf("\nC. Divisiones");
			printf("\nD. Ciclos");
			printf("\n\nIngrese su opcion -> ");
			scanf(" %c",&resg1);
			
			if(resg1 == 'c'){
				printf("\n\nTu respuesta es correcta!\nAvanzas a la siguiente pregunta!");
			}
			else{
				printf("\n\nTu respuesta es incorrecta :(\nQuedas Eliminado");
				goto inicio;
			}
			
			
			
			printf("\n\nPregunta 2");
			printf("\n\nCual de los siguientes ejemplos cotidianos NO podria representar un grafo");
			printf("\n\nA. Una red Social");
			printf("\nB. Un Mapa de calles");
			printf("\nC. un onigrama de una empresa ");
			printf("\nD. El motor de un carro");
			printf("\n\nIngrese su opcion -> ");
			scanf(" %c",&resg2);
			
			if(resg2 == 'd'){
				printf("\n\nTu respuesta es correcta!\nAvanzas a la siguiente pregunta!");
			}
			else{
				printf("\n\nTu respuesta es incorrecta :(\nQuedas Eliminado");
				goto inicio;
			}
			
			printf("\n\nPregunta 3");
			printf("\n\nCual de las siguientes afirmaciones es falsa?");
			printf("\n\nA. Google utiliza grafos para indexar la web");
			printf("\nB. Los grafos fueron inventados en 2011");
			printf("\nC. plataformas como Facebook y Twitter modelan sus redes de usuarios como grafos");
			printf("\nD. Los grafos se utilizan en IA para representar datos estructurado");
			printf("\n\nIngrese su opcion -> ");
			scanf(" %c",&resg3);
			
			if(resg3 == 'b'){
				printf("\n\nTu respuesta es correcta!\nGanaste el Nivel de GRAFOS!");
			}
			else{
				printf("\n\nTu respuesta es incorrecta :(\nQuedas Eliminado");
				goto inicio;
			}			
			
			break;
		}
	
	case 3:{
		printf("\n\nGracias por Jugar :)");
		break;
	}
	}
	
}



void game() {
    int choice;
    char exp1, exp2, exp3, graph1, graph2, graph3;

    start:
    printf("\n\nWelcome to Millionaire\nChoose the theme you want to participate in");
    printf("\n1. Exponential Equations");
    printf("\n2. Graphs");
    printf("\n3. Back");
    printf("\n\nEnter the desired option -> ");
    scanf("%d", &choice);

    while (choice < 0 || choice > 3) {
        printf("\n\nPlease enter a valid option");
        printf("\n1. Exponential Equations");
        printf("\n2. Graphs");
        printf("\n3. Back");
        printf("\n\nEnter the desired option -> ");
        scanf("%d", &choice);
    }

    switch (choice) {
        case 1: {
            printf("\n\nLEVEL EXPONENTIAL EQUATIONS\n\nGame Mode:\nAnswer only with letters from A to D, otherwise you will be eliminated.");
            printf("\n\nQuestion 1");
            printf("\n\nWhat is the base of the expression 2^5?");
            printf("\n\nA. 3");
            printf("\nB. 5");
            printf("\nC. 2");
            printf("\nD. ^");
            printf("\n\nEnter your option -> ");
            scanf(" %c", &exp1);

            if (exp1 == 'c') {
                printf("\n\nYour answer is correct!\nYou advance to the next question!");
            } else {
                printf("\n\nYour answer is incorrect :(\nYou are eliminated");
                goto start;
            }

            printf("\n\nQuestion 2");
            printf("\n\nIf 3^x = 27, what is the value of x?");
            printf("\n\nA. 2");
            printf("\nB. 3");
            printf("\nC. 4");
            printf("\nD. y");
            printf("\n\nEnter your option -> ");
            scanf(" %c", &exp2);

            if (exp2 == 'b') {
                printf("\n\nYour answer is correct!\nYou advance to the next question!");
            } else {
                printf("\n\nYour answer is incorrect :(\nYou are eliminated");
                goto start;
            }

            printf("\n\nQuestion 3");
            printf("\n\nWhere can we see exponential growth?");
            printf("\n\nA. Finance");
            printf("\nB. Biology");
            printf("\nC. Physics");
            printf("\nD. All of the above");
            printf("\n\nEnter your option -> ");
            scanf(" %c", &exp3);

            if (exp3 == 'd') {
                printf("\n\nYour answer is correct!\nYou won the Exponential Equations level!");
            } else {
                printf("\n\nYour answer is incorrect :(\nYou are eliminated");
                goto start;
            }

            break;
        }

        case 2: {
            printf("\n\nLEVEL GRAPHS\n\nGame Mode:\nAnswer only with letters from A to D, otherwise you will be eliminated.");
            printf("\n\nQuestion 1");
            printf("\n\nWhich of the following options is NOT a fundamental element of a graph?");
            printf("\n\nA. Nodes");
            printf("\nB. Edges");
            printf("\nC. Divisions");
            printf("\nD. Cycles");
            printf("\n\nEnter your option -> ");
            scanf(" %c", &graph1);

            if (graph1 == 'c') {
                printf("\n\nYour answer is correct!\nYou advance to the next question!");
            } else {
                printf("\n\nYour answer is incorrect :(\nYou are eliminated");
                goto start;
            }

            printf("\n\nQuestion 2");
            printf("\n\nWhich of the following everyday examples could NOT represent a graph?");
            printf("\n\nA. A social network");
            printf("\nB. A street map");
            printf("\nC. An organizational chart of a company");
            printf("\nD. A car engine");
            printf("\n\nEnter your option -> ");
            scanf(" %c", &graph2);

            if (graph2 == 'd') {
                printf("\n\nYour answer is correct!\nYou advance to the next question!");
            } else {
                printf("\n\nYour answer is incorrect :(\nYou are eliminated");
                goto start;
            }

            printf("\n\nQuestion 3");
            printf("\n\nWhich of the following statements is false?");
            printf("\n\nA. Google uses graphs to index the web");
            printf("\nB. Graphs were invented in 2011");
            printf("\nC. Platforms like Facebook and Twitter model their user networks as graphs");
            printf("\nD. Graphs are used in AI to represent structured data");
            printf("\n\nEnter your option -> ");
            scanf(" %c", &graph3);

            if (graph3 == 'b') {
                printf("\n\nYour answer is correct!\nYou won the Graphs level!");
            } else {
                printf("\n\nYour answer is incorrect :(\nYou are eliminated");
                goto start;
            }

            break;
        }

        case 3: {
            printf("\n\nThanks for playing :)");
            break;
        }
    }
}


int leer(int numero) {
    
    while (scanf("%d", &numero) != 1) {
    	
        printf("\n\nEsta opcion no es valida\nUtiliza solo numeros para el correcto funcionamiento del sistema\n\nIngresa tu opcion ->");
       
        while (getchar() != '\n');
    }
    return numero;
}


int main (){
	
	
	int opcion, indice;
	
printf("\n                        Bienvenido a tu REVISTA DIGITAL");
	    menu_inicio:{
	printf("\n\nIngrese una opcion:");
    printf("\n\n1. Portada de la revista");
    printf("\n2. Indice de la revista");
	printf("\n3. Ayuda con el sistema");
	printf("\n4. Video");
	printf("\n5. Cambiar idioma/Change lenguage");
	printf("\n6. Salir");
	printf("\n\nIngrese la opcion que desee -> ");
	scanf("%d",&opcion);

}

	while(opcion<1 || opcion>6){
	printf("\n\nEsta opcion no es valida\nPor favor Ingrese una opcion:");
    printf("\n\n1. Portada de la revista");
    printf("\n2. Indice de la revista");
	printf("\n3. Ayuda con el sistema");
	printf("\n4. Video");
	printf("\n5. Cambiar idioma/Change lenguage");
	printf("\n6. Salir");
	printf("\n\nIngrese la opcion que desee -> ");
	scanf("%d",&opcion);
		
}




switch (opcion){
	
	case 1: {
		printf("Se abrira un documento con la portada de la revista");
		
		system("start revista.pdf");
		goto menu_inicio;
		break;
	}
	
	case 2: {
	
	menu_ind:{
	
    printf("\n\nIngrese una opcion:");
    printf("\n\n1. Portada");
    printf("\n2. Ecuaciones exponenciales");
	printf("\n3. Grafos");
	printf("\n4. La Ciberseguridad");
	printf("\n5. Juego MILLONARIO");
	printf("\n6. Calculadora de ecuaciones exonenciales");
	printf("\n7. Volver");
	printf("\n\nIngrese la opcion que desee -> ");
	scanf("%d",&indice);
	
	while(indice<1 || indice>7){
		
	printf("\n\nEsta opcion no es valida\nIntente nuevamente");
    printf("\n\nIngrese una opcion:");
    printf("\n\n1. Portada");
    printf("\n2. Ecuaciones exponenciales");
	printf("\n3. Grafos");
	printf("\n4. La Ciberseguridad");
    printf("\n5. Juego MILLONARIO");
	printf("\n6. Calculadora de ecuaciones exonenciales");
	printf("\n7. Volver");
	printf("\n\nIngrese la opcion que desee -> ");
	scanf("%d",&indice);
	}
	
	switch(indice){
	
	case 1:{
		printf("Se abrira un documento con la portada de la revista");
		
		system("start portada.pdf");
		goto menu_ind;
		break;
	}
	
	case 2:{
		printf("Se abrira un documento con el articulo de ecuaciones exponenciales");
		
		system("start ecuaciones.pdf");
		goto menu_ind;
		break;
	}
	
		case 3:{
		printf("Se abrira un documento con el articulo de grafos");
		
		system("start grafos.pdf");
		goto menu_ind;
		break;
	}
	
		case 4:{
		printf("Se abrira un documento con el articulo de la Ciberseguridad");
		
		system("start seguridad.pdf");
		goto menu_ind;
		break;
	}
	
		case 5: {
		juego();
		goto menu_ind;
		break;
	}
	
	case 6: {
		
		double base, resultado, x;
start:
printf("\n\nEn una ecuacion de tipo a^x=b");

    printf("\n\nIngrese la base (a): ");
    scanf("%lf", &base);

    printf("\n\nIngrese el resultado (b): ");
    scanf("%lf", &resultado);
    
    printf("\n\nSu ecuacion es:  %.2lf^x=%.2lf", base, resultado);

    if (base <= 0 || base == 1) {
        printf("\n\nLa base debe ser un nÃºmero positivo y diferente de 1.\n");
        goto start;
		return 1;
    }

    x = log(resultado) / log(base);

    printf("\n\nEl valor de x es: %.2lf\n", x);
    goto menu_ind;
    return 0;
		break;
	}

    case 7:{
    	goto menu_inicio;
		break;
	}
    
}
		
}
	
	
	
		goto menu_inicio;
		break;
	}
	
	case 3: {
		
		printf("\nse abrira el manual de usuario");
		system("start manual.pdf");
		goto menu_inicio;
		break;
	}
	
	case 4: {
				printf("\nse abrira un documento con los links de los videos de los participantes del equipo");
		system("start links.pdf");
		goto menu_inicio;
		break;
	}
	

	
	case 5: {
		
		int option, index;

menu_start: {
    printf("\n\nEnter an option:");
    printf("\n\n1. Magazine cover");
    printf("\n2. Magazine index");
    printf("\n3. Help with the system");
    printf("\n4. Video");
    printf("\n5. Change language");
    printf("\n6. Exit");
    printf("\n\nEnter the desired option -> ");
    scanf("%d", &option);
}

while (option < 1 || option > 6) {
    printf("\n\nThis option is not valid\nPlease enter an option:");
    printf("\n\n1. Magazine cover");
    printf("\n2. Magazine index");
    printf("\n3. Help with the system");
    printf("\n4. Video");
    printf("\n5. Change language");
    printf("\n6. Exit");
    printf("\n\nEnter the desired option -> ");
    scanf("%d", &option);
}

switch (option) {
    case 1: {
        printf("A document with the magazine cover will be opened");
        system("start magazine_cover.pdf");
        goto menu_start;
        break;
    }

    case 2: {
        menu_index: {
            printf("\n\nEnter an option:");
            printf("\n\n1. Cover");
            printf("\n2. Exponential equations");
            printf("\n3. Graphs");
            printf("\n4. Cybersecurity");
            printf("\n5. MILLIONAIRE game");
            printf("\n6. Exponential equation calculator");
            printf("\n7. Back");
            printf("\n\nEnter the desired option -> ");
            scanf("%d", &index);

            while (index < 1 || index > 7) {
                printf("\n\nThis option is not valid\nTry again");
                printf("\n\nEnter an option:");
                printf("\n\n1. Cover");
                printf("\n2. Exponential equations");
                printf("\n3. Graphs");
                printf("\n4. Cybersecurity");
                printf("\n5. MILLIONAIRE game");
                printf("\n6. Exponential equation calculator");
                printf("\n7. Back");
                printf("\n\nEnter the desired option -> ");
                scanf("%d", &index);
            }

            switch (index) {
                case 1: {
                    printf("A document with the magazine cover will be opened");
                    system("start magazine_cover.pdf");
                    goto menu_index;
                    break;
                }

                case 2: {
                    printf("A document with the article on exponential equations will be opened");
                    system("start exponential_equations.pdf");
                    goto menu_index;
                    break;
                }

                case 3: {
                    printf("A document with the article on graphs will be opened");
                    system("start graphs.pdf");
                    goto menu_index;
                    break;
                }

                case 4: {
                    printf("A document with the article on cybersecurity will be opened");
                    system("start cybersecurity.pdf");
                    goto menu_index;
                    break;
                }

                case 5: {
                    game();
                    goto menu_index;
                    break;
                }

                case 6: {
                    double base, result, x;
                    startt:
                    printf("\n\nIn an equation of the type a^x=b");

                    printf("\n\nEnter the base (a): ");
                    scanf("%lf", &base);

                    printf("\n\nEnter the result (b): ");
                    scanf("%lf", &result);

                    printf("\n\nYour equation is: %.2lf^x=%.2lf", base, result);

                    if (base <= 0 || base == 1) {
                        printf("\n\nThe base must be a positive number and different from 1.\n");
                        goto startt;
                        return 1;
                    }

                    x = log(result) / log(base);

                    printf("\n\nThe value of x is: %.2lf\n", x);
                    goto menu_index;
                    return 0;
                    break;
                }

                case 7: {
                    goto menu_start;
                    break;
                }
            }
        }
        goto menu_start;
        break;
    }

    case 3: {
        printf("\nThe user manual will be opened");
        system("start guide.pdf");
        goto menu_start;
        break;
    }

    case 4: {
        printf("\nA document with the links to the videos of the team participants will be opened");
        system("start links.pdf");
        goto menu_start;
        break;
    }

    case 5: {

        printf("\nLanguage change/cambiar idioma");
        goto menu_inicio;
        break;
    }

    case 6: {
        printf("\nExiting the system");
        break;
    }
}
		break;
	}
	

	
	case 6: {
		printf("\n\nSaliendo del sistema.");
		break;
	}
	
	
	
	
	
	
	
	
	
	
}
}