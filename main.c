#include <stdio.h>
#include <stdlib.h>
//burada ilk olarak yazaca��m�z fonksiyonu tan�ml�yoruz
float calc_abs(float);
int main()
{
    float n;
    printf("enter  n: ");
    scanf("%f",& n);
    printf("|%.3f| = %.3f\n", n, calc_abs(n));
    return 0;
}
    float calc_abs(float n)
    {


        if (n>=0)


        {
            return n;
        }

        return -n;
        /*burada de�er e�er 0 dan k�c�k olursa sayiyi eksi ile carpip
        mutlak de�erli gibi yap�yoruz yukar�da mutlak de�er koydu�umuz i�in
        */
    }






