/* File             : nyobaTabel.c */
/* Penulis          : Fauzyah Hadirahma, email faubelajar@gmail.com */
/* Deskripsi        : aktifitas kreatif */

#include <stdio.h>
int main ()
{
    /* KAMUS */
    int Tab [5] = {1, 2, 3, 4, 5};
    
    int i; /* untuk iterasi indeks tabel */
    
    /* menuliskan isi Tab urut ke bawah */
    for (i=0; i<5; i++)
        {
            printf ("Tab [%d] = %d;\n", i, Tab [i]);
        }
    
    return 0;
}
