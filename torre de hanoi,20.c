#include <stdio.h>
#include <stdlib.h>




#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



void imprime( int *tab, int fil, int col, int ultNum )
/*Esta sección define la función imprime, que se utiliza para imprimir el estado actual de las torres.*/
{
    




    int f, c;
    int i, esp;




    for( c=col-1; c >= 0; c-- )
    {
        for( f=0; f < fil; f++ )
        {
            esp = ( ultNum - tab[col*f+c] )/2;



            for( i=0; i < esp; i++ )
                printf( " " );



            for( i=0; i < tab[col*f+c]; i++ )
                printf( "*" );



            for( i=0; i < esp; i++ )
                printf( " " );



            printf( "\t" );
        };



        printf( "\n" );
    };




};




void mueveDisco( int *tab, int fil, int col, int ultNum, int filOrig, int filDest )
{
    
/* define la función mueveDisco, que se utiliza para mover un disco de una torre a otra.*/ 




    int cO=col-1, cD=col-1;




    while( cO >= 0  &&  tab[col*filOrig+cO] == 0 )
    {
        cO--;
    };
    if( cO < 0 )
        cO = 0;



    while( cD >= 0  &&  tab[col*filDest+cD] == 0 )
    {
        cD--;
    };



    tab[col*filDest+cD+1] = tab[col*filOrig+cO];
    tab[col*filOrig+cO] = 0;




    imprime( tab, fil, col, ultNum );
};



void delay(int tiempo)
{




    int c, d;
    while(tiempo >= 0)
    {
        for (c = 1; c <= 10000; c++)
            for (d = 1; d <= 10000; d++)
            {}
        tiempo--;
    }



}



void hanoi( int *tab, int fil, int col, int disc, int ultNum, int O, int A, int D )
{
    
/*define la función hanoi, que es la función principal que implementa el algoritmo recursivo de las Torres de Hanoi.*/



    if( disc==1 )
    {
        system("cls");
      
        mueveDisco( tab, fil, col, ultNum, O, D );
        if(col<=5) delay(4);
        else if(col<=10) delay(3);
        else if(col<=15) delay(2);
        else if(col>15) delay(1);
    }
    else
    {
        hanoi( tab, fil, col, disc-1, ultNum, O, D, A );



        system("cls");
        
        mueveDisco( tab, fil, col, ultNum, O, D );
        if(col<=5) delay(4);
        else if(col<=10) delay(3);
        else if(col<=15) delay(2);
        else if(col>15) delay(1);



        hanoi( tab, fil, col, disc-1, ultNum, A, O, D );
    };



};





int main()
/*punto de entrada del programa.*/
{
    int fil=3, col, *tablero = NULL;
    int f, c, disc=1, ultNum;


/*Esta sección define algunas variables utilizadas en el programa, como el número de filas, columnas, el número de discos, y el tamaño del tablero.*/


    printf( "Indique el numero de discos: " );
    scanf( "%i", &col );

/*solicita al usuario que ingrese el número de discos que desea utilizar.*/


    tablero = (int *)malloc( sizeof(int)*fil*col );




    for( f=0; f < fil; f++ )
        for( c=col-1; c >= 0; c-- )
            if( f==0 )
            {
                tablero[col*f+c] = disc;
                disc+=2;
            }
            else
                tablero[col*f+c] = 0;

/*inicia el tablero de las torres con los discos.*/

    ultNum = disc;


/*establece el número total de discos en el tablero.*/

    system("clear");
    imprime( tablero, fil, col, ultNum );
    delay(6);

/*Esta sección limpia la pantalla, imprime el tablero inicial y hace una pausa antes de comenzar a resolver las Torres de Hanoi.*/


    
hanoi( tablero, fil, col, col, ultNum, 0, 1, 2 );

/*Esta sección llama a la función hanoi para resolver el problema de las Torres de Hanoi con los parámetros correspondientes.*/




};