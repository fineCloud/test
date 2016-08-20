/*
 * =====================================================================================
 *
 *       Filename:  segfault.c
 *
 *    Description:  segfault
 *
 *        Version:  1.0
 *        Created:  08/20/2016 10:34:16 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main()
{
	long li = 1;
	float fli = (float) li;
	const char* str = "aaaaaaaaaa";

	printf("long: %ld, long_to_float: %f, float: %f, str: %s\n", li, li, fli, str);

	return 0;
}
