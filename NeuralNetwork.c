#include <stdio.h>
#include <stdlib.h>

int hardlims(n)
{
    int a;
    if (n<0)
    {
        a = -1;
    }
    if (n>=0)
    {
        a  = 1;
    }
    return a;
}

int main() {
     FILE *archivo1;
     char caracteres1[50];
     archivo1 = fopen("patrones.txt", "r");

     if (archivo1 != NULL) {
            printf("Patrones propuestos:\n\n");
            while (feof(archivo1) == 0) {
                    fgets (caracteres1, 50, archivo1);
            printf("%s", caracteres1);
            }
            printf("\n\n");
            fclose(archivo1);
            }


	int m,n,p,q,c,d,k,r,sum=0;
	int primera [30][30], segunda [30][30],  w [30][30];
	printf("Patron P (30x3)\n");
	scanf("%d%d", &m, &n);
	printf("Ingresa los elementos de P\n");
	for(c=0;c<m;c++)
	for(d=0;d<n;d++)
	scanf("%d",&primera[c][d]);
	printf("Patron P transpuesta (3x30)\n");
	scanf("%d%d", &p, &q);
	if (n!=p)
	printf("Estas matrices no se pueden multiplicar entre si\n");
	else{
		printf("Ingresa los elementos de P transpuesta\n");
		for(c=0;c<p;c++)
		for(d=0;d<q;d++)
		scanf("%d", &segunda[c][d]);
		for (c=0;c<m;c++)
		{
		for(d=0;d<q;d++){
		for(k=0;k<p;k++){
		sum=sum+primera[c][k]*segunda[k][d];
		}
		w[c][d]=sum;
		sum=0;
	}
		}
}
printf("El producto de las matrices es:\n");
for(c=0;c<m;c++)
{
	for(d=0;d<q;d++)
	printf("%d    ", w[c][d]);
	printf("\n");
}

int ENTRADA[30][1];

	for(k=0; k<30;k++)
        for(r=0; r<1 ;r++)
        {
           	printf("Introduce el patron a reconocer (30x1): ");
			scanf("%d",&ENTRADA[k][r]);
        }

  int xo,i;
  int N1[30][1];

    for (i = 0 ; i < 30 ; i++ )
{
    for (r = 0 ; r < 1 ; r++ )
    {
        xo = 0 ;
        for (k = 0 ; k< 30 ; k++ )
        {
            xo += w[c][d] * ENTRADA[k][r];
            N1[i][r] = xo;
        }

    }
}

for (i=0;i<30;i++){
    N1[i][0] = (hardlims(N1[i][0]));

}

for (i=0;i<30;i+1){
    if ((i = 4) || (i=9) || (i=14) || (i=19) || (i=24) || (i=29)) 
    {
        printf("\n");
    }
    if ((N1[i][0]==1)) 
    {
        printf("x");
    }
    else
    {
        printf("-");
    }
}
}


