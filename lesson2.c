#include <stdio.h>

// tema : iterati printr-un vector cu while
// Vectors

int main()
{
    // un vector = sir

    // declare vector static vs dinamic

    // static
    // int vs[10];

    // dinamic
    // int *vd = malloc(sizeof(int) * 10);
    // free(vd);

    // int i[10];
    // float f[20];
    // char c[12];
    // 0 -> index-1

    // int v[3];
    // v[0] = 1;
    // v[1] = 23;
    // v[2] = 12;

    // type char (-128, 127)

    // char c[3];
    // c[0] = 'a';
    // c[1] = '$';
    // c[2] = 'm';

    // PB 1
    //  se da un numar n de la tastura si se cere formarea unui vector de dimensiune 100 in
    //  memorie, vector declarat static(100 elemente) si elem sunt date de la tastatura
    // dupa afiseaza
    // int n;
    // scanf("%d", &n);
    // int v[100];
    // random
    // v[0] = 1232132
    // v[1] = 0
    // v[2] = 5344
    // ....
    // v[99] = -2

    // n = 4
    // int i = 0;
    // if (i < n)
    // {
    //     scanf("%d", &v[i]);
    //     i++;
    // }
    // if (i < n)
    // {
    //     scanf("%d", &v[i]);
    //     i++;
    //  }

    // citire vector

    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &v[i]);
    // }
    // vector creat

    // afisare vector
    // for (int i = 0; i < n; i++)
    // {
    //     printf("v[%d]= %d\n", i, v[i]);
    // }

    // PB 2: citesc vector ca mai sus si vreau sa afisez
    // elementele pare si
    // mai mari decat 7
    // daca nu am elemente pare in vector afiseze "NU EXISTA!"

    // input:
    // 4
    // 1 2 8 12
    // afisez: 8 12

    // input:
    // 3
    // 1 1 1
    // afisez: "NU EXISTA!"

    // input:
    // 3
    // 2 4 2
    // afisez : "NU EXISTA!"

    return 0;
}