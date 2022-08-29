program that prints the storage space taken by float and printing it's range of values


#include<stdio.h>//including header file
#include<float.h>//including float.h
int main()//main file
{
printf("storage space required for float is %zu",sizeof(float));//finding the storage using sizeof operator
printf("minimum float positive values %E\n",FLT_MIN);//finding the minimum float value
printf("maximum float positive value %E\n",FLT_MAX);//finding the maximum float value
}