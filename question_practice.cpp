#include <stdio.h>//standard header file
#include <stdlib.h>//standard library
#include<time.h>
int main()//starting point
{
    int word;//variable declare
     
     
        srand(time(NULL));//for random value and current time
        word =rand()%9;//used rand func where max is 9 and min is 0
        printf("randamly generated character is %d",word);
     

}