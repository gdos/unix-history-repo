/* @(#)printf.c	4.1 (Berkeley) %G% */
#include	<stdio.h>

printf(fmt, args)
char *fmt;
{
	_doprnt(fmt, &args, stdout);
	return(ferror(stdout)? EOF: 0);
}
