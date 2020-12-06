// Assignment_III.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author : Sahil Jangra

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    //1. Write a C program to find power of a number using for loop
    int n, m, i;

    double res = 1; 

    printf("Base:");
    scanf_s("%d", &n);
    
    printf("Exponent:");
    scanf_s("%d", &m);

    for (i = 1; i <= m; i++)
    {
        res *= n;
    }

    printf("Result: %lf", res);
    
    //2. Write a C program to find all factors of a number
    int n, i;

    printf("Number:");
    scanf_s("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d \n", i);
        }
    }

    //3. Write a C program to find HCF (GCD) of two numbers
    int i, num1, num2, small, hcf = 1;

    printf("Enter any two numbers: \n");
    scanf_s("%d%d", &num1, &num2);

    if (num1 < num2) {
        small = num1;
    }
    else
        small = num2;

    for (i = 1; i <= small; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }

    }

    printf("HCF:%d", hcf);
    
    //4. Write a C program to find LCM of two numbers.
    int i, num1, num2, large, lcm = 1;

    printf("Enter any two numbers: \n");
    scanf_s("%d%d", &num1, &num2);

    if (num1 > num2) {
        large = num1;
    }
    else
        large = num2;

    i = large;

    while (1) {
        if (i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }
        i += large;
    }

    printf("LCM:%d", lcm);
    
    //5. Write a C program to find all prime factors of a number
    int n, m, i, isPrime, j;

    printf("Number:");
    scanf_s("%d", &n);

    printf("Prime Factors:");

    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 1;
            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime == 1)
            {
                printf("%d ", i);
            }
        }
    }    

    //6. Write a C program to check whether a number is Strong number or not
    int i, cN, n, lastDigit, sum;
    long fact;

    printf("Number:");
    scanf("%d", &n);

    cN = n;
    sum = 0;

    while (n > 0)
        {
        lastDigit = n % 10;
        fact = 1;

        for (i = 1; i <= lastDigit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if (sum == cN)
    {
        printf("Strong number");
        }
        else
        {
        printf("Not a strong number");
    }
    
    //7. Write a C program to print all Strong numbers between 1 to n
    int i, j, currentNo, lastDigit, n;
    long long fact, sum;

    printf("Upper limit: ");
    scanf_s("%d", &n);

    printf("Strong numbers b/w 1 to %d are: ", n);

    for (i = 1; i <= n; i++)
    {
        currentNo = i;
        sum = 0;

        while (currentNo > 0)
        {
            fact = 1;
            lastDigit = currentNo % 10;

            for (j = 1; j <= lastDigit; j++)
            {
                fact = fact * j;
            }

            sum += fact;
            currentNo /= 10;
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    //8. Write a C program to convert Hexadecimal to Decimal number system
    char hex[17];
    long long decimal, place;
    int i = 0, val = 0, length;

    decimal = 0;
    place = 1;

    printf("Hexadecimal number: ");
    gets(hex);

    length = strlen(hex);
    length--;

    for (i = 0; hex[i] != '\0'; i++)
    {

        if (hex[i] >= '0' && hex[i] <= '9')
        {
            val = hex[i] - 48;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f')
        {
            val = hex[i] - 97 + 10;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, length);
        length--;
    }

    printf("Hexadecimal number: %s\n", hex);
    printf("Decimal number: %lld", decimal);
    
    //9. Write a C program to input week number and print weekday
    int week;

    printf("Enter week number (1-7): ");
    scanf_s("%d", &week);

    switch (week) {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Wrong input.");
        break;
    }

    /*  10.Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics 
        and Computer.Calculate percentage and grade according to following :
        Percentage >= 90 % : Grade A
        Percentage >= 80 % : Grade B
        Percentage >= 70 % : Grade C
        Percentage >= 60 % : Grade D
        Percentage >= 40 % : Grade E
        Percentage < 40 %  : Grade F */

        int marks[5], i, sum = 0;
        long float per;
        printf("Enter your marks(Physics, Chemistry, Biology, Mathematics and Computer):");
        for ( i = 0; i <= 4; i++)
        {
            scanf_s("%d", &marks[i]);
            sum += marks[i];
        }

        per = (sum / 5.0);
        
        printf("Percentage: %lf\n", per);
      
        if (per >= 90)
        {
            printf("Grade A");
        }
        else if (per >= 80)
        {
            printf("Grade B");
        }
        else if (per >= 70)
        {
            printf("Grade C");
        }
        else if (per >= 60)
        {
            printf("Grade D");
        }
        else if (per >= 40)
        {
            printf("Grade E");
        }
        else
        {
            printf("Grade F");
        }

}

