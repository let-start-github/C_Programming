
#include<stdio.h>


void *ptr;
int i=9; // integer variable initialization.
int *p; // integer pointer declaration.
float *fp; // floating pointer declaration.
void *ptr; // void pointer declaration.
//p=fp; // incorrect.
//fp=&i; // incorrect
ptr=p; // correct
ptr=fp; // correct
ptr=&i; // correct