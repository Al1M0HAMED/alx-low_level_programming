#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>

unsigned int decimal_to_binary(char *binary, unsigned long int decimal);
unsigned int decimal_too_binary(char *binary, unsigned long int *decimal);
void rev_string(char *s);
char *conv_dic(int decimal, char *binary);
unsigned int binary_to_uint(const char *b);
unsigned long int *binary_too_uint(char *str);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
