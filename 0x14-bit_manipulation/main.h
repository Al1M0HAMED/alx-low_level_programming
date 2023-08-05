#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

unsigned int decimal_to_binary(char *binary, unsigned int decimal);
void rev_string(char *s);
char *conv_dic(int decimal, char *binary);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
