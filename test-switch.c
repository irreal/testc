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
        switch (r)
        {
        case 1:
            printf("1");
            break;
        case 2:
            printf("2");
            break;
        case 3:
            printf("3");
            break;
        case 4:
            printf("4");
            break;
        case 5:
            printf("5");
            break;
        case 6:
            printf("6");
            break;
        case 7:
            printf("7");
            break;
        case 8:
            printf("8");
            break;
        case 9:
            printf("9");
            break;
        case 10:
            printf("10");
            break;
        case 11:
            printf("11");
            break;
        case 12:
            printf("12");
            break;
        case 13:
            printf("13");
            break;
        case 14:
            printf("14");
            break;
        case 15:
            printf("15");
            break;
        case 16:
            printf("16");
            break;
        case 17:
            printf("17");
            break;
        case 18:
            printf("18");
            break;
        case 19:
            printf("19");
            break;
        case 20:
            printf("20");
            break;
        case 21:
            printf("21");
            break;
        case 22:
            printf("22");
            break;
        case 23:
            printf("23");
            break;
        case 24:
            printf("24");
            break;
        case 25:
            printf("25");
            break;
        case 26:
            printf("26");
            break;
        case 27:
            printf("27");
            break;
        case 28:
            printf("28");
            break;
        case 29:
            printf("29");
            break;
        case 30:
            printf("30");
            break;
        case 31:
            printf("31");
            break;
        case 32:
            printf("32");
            break;
        case 33:
            printf("33");
            break;
        case 34:
            printf("34");
            break;
        case 35:
            printf("35");
            break;
        case 36:
            printf("36");
            break;
        case 37:
            printf("37");
            break;
        case 38:
            printf("38");
            break;
        case 39:
            printf("39");
            break;
        case 40:
            printf("40");
            break;
        case 41:
            printf("41");
            break;
        case 42:
            printf("42");
            break;
        case 43:
            printf("43");
            break;
        case 44:
            printf("44");
            break;
        case 45:
            printf("45");
            break;
        case 46:
            printf("46");
            break;
        case 47:
            printf("47");
            break;
        case 48:
            printf("48");
            break;
        case 49:
            printf("49");
            break;
        case 50:
            printf("50");
            break;
        }
    }

    clock_t end = clock();

    // calculate elapsed time by finding difference (end - begin) and
    // dividing the difference by CLOCKS_PER_SEC to convert to seconds
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    printf("The elapsed time is %f seconds", time_spent);

    return 0;
}
