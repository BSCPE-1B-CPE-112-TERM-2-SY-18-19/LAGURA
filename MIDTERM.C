#include <stdio.h>
main()
{
long num[1000], digit[1000], factor[1000], rem[1000], r[1000], count[1000], remainder[1000], bin[1000], pdrem[1000], biny[1000], temp[1000], rev[1000], key[1000];
long range, i, real,b,  x, n, t, j, y, base, a , pdrange ;
clrscr();
printf("ENTER RANGE:");
scanf(" %ld", &range);
real=2;

for (i=2; i<range; i++)
	{
	num[i]=real;
	real++;
	}

for (i=2; i<range; i++)
	{
	n=num[i];
	x=n;
	digit[i]=0;
	for (;n!=0;)
		{
		n=n/10;
		digit[i]++;
		}
	t=0;
	b=0;
	j=2;
	factor[i]=0;
	for (;x!=0;)
		{
		if (x%j==0)
			{
			x=x/j;
			rem[t]=j;
			r[b]=rem[t];
			t++;
			b++;
			factor[i]++;
			if (x==1)
				{
				break;
				}
			}
		else
			{
			j++;
			}
		}
	if (factor[i]>digit[i])
		{
		printf("\nWASTEFUL NUMBER: %ld	", num[i]);
		for (j=0; j<factor[i]; j++)
			{
			printf("\nFACTOR:	%ld", r[j]);
			bin[j]=0;
			base=1;
			for (;r[j]!=0;)
				{
				remainder[j]=r[j]%2;
				bin[j]=bin[j]+remainder[j]*base;
				base=base*10;
				r[j]=r[j]/2;
				}
			key[j]=bin[j];
			temp[j]=0;
			rev[j]=0;
			for (;key[j]!=0;)
				{
				temp[j]=key[j]%10;
				key[j]=key[j]/10;
				rev[j]=temp[j]+(rev[j]*10);
				}
			if (rev[j]==bin[j])
				{
				printf(" - %ld = PALINDROMIC PRIME FACTOR/BINARY", rev[j]);
				}
			}
		}
	}



getch();
}

