#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    printf("Palindromic Number Checker\n");
    char num1[100];
    printf("enter a number: ");
    scanf("%s",num1);
    //num1 is string , string is array of char
    //for example: num1 =["","","",""]
    int size = strlen(num1);
    //to get the size of the array num1;

    char num2[size];
    //new string with the size of the first string
    //so we can place the numbers reversed in it;
    int counter = 0;
    //the starting point for num2 in the loop

    for(int i = size-1; i>=0; i--)
    {
        // num2 = the last index in num1
        num2[counter]= num1[i];
        counter++;
    }
    printf("reversed number: %s\n", num2);

    int c1, c2;
    c1 =atoi(num1);
    c2= atoi(num2);
    //converting strings to integers

    if(c1 == c2)
    {
        printf("Are the same\n");
    }
    else
    {
        printf("Are not the same\n");
    }
}