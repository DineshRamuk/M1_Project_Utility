#ifndef __FUNCTION_H__
#define __FUNCTION_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "assert.h"
#endif 


int enterchoice(void);
void details(void);

int ListofMovies(void);
int movieselect(void);
int changepriceticket(int);


void show1(int choice,char name[10],int id1,int price);

void show2(int choice,char name[10],int id1,int price);

void reserveticket(int *,int,int );

void cancelticket(int *); 


#endif 
