#include <stdio.h>

int main()
{

float percreaj,salario,salarioreaj,maiorsal;
int cont;
maiorsal=0;
printf("Percentual de reajuste salarial:");
scanf ("%f",&percreaj);
for (cont=1;cont<=50;cont++)

{

printf("Informe o sal�rio do funcion�rio:");
scanf("%f",&salario);
salarioreaj=salario+(salario*percreaj/100);
printf("O sal�rio reajustado e : %.2f \n\n",salarioreaj);
if (salarioreaj>maiorsal)
 maiorsal=salarioreaj;
}

printf("O maior sal�rio reajustado e : %.2f",maiorsal);
return 0;

}
