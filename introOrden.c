#include <stdio.h>

const int MAX_ELEMENTOS = 10; /* no se usa porque se va invadiendo la memoria contigua*/

int introEnOrden(int mtx[], int ce, int dato)
{
    int ESTA = 0;
    int i = ce;

    while (i >= 0 && !ESTA)
    {

        if (mtx[i] > dato)
        {
            mtx[i + 1] = mtx[i];
            i -= 1;
        }
        else
        {
            ESTA = 1;
        }
    }

    mtx[i + 1] = dato;
    ce += 1;

    return ce;
}

void muestraVector(int arreglo[], int ce)
{
    for (int i = 0; i < ce; i++)
        printf("[%i] : %i\n", i, arreglo[i]);
}

int main(int argc, char **argv)
{

    int arreglo[] = {1, 4, 5, 6, 7, 8, 9};
    int ce = sizeof arreglo / sizeof arreglo[0];

    puts("------------------------------------------------------------------------------- Array original");
    muestraVector(arreglo, ce);

    puts("------------------------------------------------------------------------------- Array con nuevo entero");
    ce = introEnOrden(arreglo, ce, 13);

    muestraVector(arreglo, ce);

    puts("-------------------------------------------------------------------------------");
    return 0;
}