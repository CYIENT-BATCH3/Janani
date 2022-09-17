#include <stdio.h>   //preprocessor directive to include standard input and output
#include <math.h>    //preprocessor directive to include maths operation functions
int main()    //main function as int return type
{
              setbuf(stdout,NULL);
    int decimalnum;  //declaring a variable to get binary number
    printf("Enter a Decimal Number: ");    //asking user to enter the binary number
    scanf("%d", &decimalnum);    //reading the input from the keyboard
    printf("Equivalent Binary Number is: %d", decimalToBinary(decimalnum));   //printing the binary number returning from the function
    return 0;
}
int decimalToBinary(int decimalnum)   //function to perform decimal to binary conversion
{
    int binarynum = 0;   //declaring binarynum variable
    int rem, temp = 1;   //declaring remainder and temperory variable

    while (decimalnum!=0)   //while loop to perform until it condition fails
    {
        rem = decimalnum%2;    //decimal number is divided by 2 and remainder is stored in rem variable
        decimalnum = decimalnum / 2;  // the decimal number is divided by 2 and stored in decimalnum variable
        binarynum = binarynum + rem*temp;//binary number storing
        temp = temp * 10;
    }
    return binarynum;   //returning the binarynumber output to main function
}