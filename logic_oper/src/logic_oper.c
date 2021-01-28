/*
 ============================================================================
 Name        : logic_oper.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
enum stateenum{
	live =1U,
	dead = 0U
}state_cell;
int live_neighbours = 4;
int update_env[10][10];
int r=0, c=0;
update_env[0][0] = 1;
state_cell = dead;

if((live_neighbours ==3)||((state_cell == live)&&(live_neighbours ==2)))
{
	update_env[r][c] = live;
}


else
	update_env[r][c] = dead;
printf("%d",update_env[r][c]);
return 0;
}
