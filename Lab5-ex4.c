 
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    char arr1[ 20 ] = "Trumantiger";
    char arr2[ 20 ];
    while(i<20){
        arr2[ i ] = 'A';
        i++;
    }
    strcpy( arr1 , arr2 );
    printf("%s",arr1);
    return 0;
}
