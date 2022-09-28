#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
    double time_spent = 0.0;

    clock_t begin = clock();

    for (int i = 0; i < 100000000; i++)
    {
        int r = arc4random();
        if (r == 1)
        {
            printf("1");
        }
        else if (r == 2)
        {
            printf("2");
        }
        else if (r == 3)
        {
            printf("3");
        }
        else if (r == 4)
        {
            printf("4");
        }
        else if (r == 5)
        {
            printf("5");
        }
        else if (r == 6)
        {
            printf("6");
        }
        else if (r == 7)
        {
            printf("7");
        }
        else if (r == 8)
        {
            printf("8");
        }
        else if (r == 9)
        {
            printf("9");
        }
        else if (r == 10)
        {
            printf("10");
        }
        else if (r == 11)
        {
            printf("11");
        }
        else if (r == 12)
        {
            printf("12");
        }
        else if (r == 13)
        {
            printf("13");
        }
        else if (r == 14)
        {
            printf("14");
        }
        else if (r == 15)
        {
            printf("15");
        }
        else if (r == 16)
        {
            printf("16");
        }
        else if (r == 17)
        {
            printf("17");
        }
        else if (r == 18)
        {
            printf("18");
        }
        else if (r == 19)
        {
            printf("19");
        }
        else if (r == 20)
        {
            printf("20");
        }
        else if (r == 21)
        {
            printf("21");
        }
        else if (r == 22)
        {
            printf("22");
        }
        else if (r == 23)
        {
            printf("23");
        }
        else if (r == 24)
        {
            printf("24");
        }
        else if (r == 25)
        {
            printf("25");
        }
        else if (r == 26)
        {
            printf("26");
        }
        else if (r == 27)
        {
            printf("27");
        }
        else if (r == 28)
        {
            printf("28");
        }
        else if (r == 29)
        {
            printf("29");
        }
        else if (r == 30)
        {
            printf("30");
        }
        else if (r == 31)
        {
            printf("31");
        }
        else if (r == 32)
        {
            printf("32");
        }
        else if (r == 33)
        {
            printf("33");
        }
        else if (r == 34)
        {
            printf("34");
        }
        else if (r == 35)
        {
            printf("35");
        }
        else if (r == 36)
        {
            printf("36");
        }
        else if (r == 37)
        {
            printf("37");
        }
        else if (r == 38)
        {
            printf("38");
        }
        else if (r == 39)
        {
            printf("39");
        }
        else if (r == 40)
        {
            printf("40");
        }
        else if (r == 41)
        {
            printf("41");
        }
        else if (r == 42)
        {
            printf("42");
        }
        else if (r == 43)
        {
            printf("43");
        }
        else if (r == 44)
        {
            printf("44");
        }
        else if (r == 45)
        {
            printf("45");
        }
        else if (r == 46)
        {
            printf("46");
        }
        else if (r == 47)
        {
            printf("47");
        }
        else if (r == 48)
        {
            printf("48");
        }
        else if (r == 49)
        {
            printf("49");
        }
        else if (r == 50)
        {
            printf("50");
        }
    }

    clock_t end = clock();

    // calculate elapsed time by finding difference (end - begin) and
    // dividing the difference by CLOCKS_PER_SEC to convert to seconds
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    printf("The elapsed time is %f seconds", time_spent);

    return 0;
}
