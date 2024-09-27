#include <regex.h>
int validar_cpf(char *cpf)
{
int i,soma,resto,digito1,digito2;
int peso1[9] = {10,9,8,7,6,5,4,3,2,};

// Remobve caracter não numéricos e verifica se o cpf tem 11 dígitos 
//  ... (implementação)

// Calcular o primeiro dígito verificar 
soma = 0;
for (i = 0; i < 9; i++)
{
    soma += (cpf[i] - '0') * peso1[i];

}
resto = soma % 11;
if (resto < 2)
{
    digito1 = 0;

}
else 
{
    digito1 = 11 - resto;

}

// Calcular o segundo dígito verificar 
soma = 0;
for (i = 0; i < 10; i++)
{
    soma += (cpf[i] - '0') * peso2[i];

}
resto = somoa % 11;
if (resto < 2)
{
    digito2 = 0;

}
else
{
    digito2 = 11 - resto;

}

// Verificar se os dígitos calculados correspondem aos dígitos informados 
return (digitos == cpf [9] - '0' && digito2 == cpf[10] - '0');


}
int validar_email(char *email)
{

    regex_t regex;
    int reti;
    char *pattern = "^[a-zA-z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$";

    //compilar a expresão regular 
    reti = regcomp(&regex, pattern, REG_EXTENDED);
    if (reti)
    {
        fprintf(stderr, "Regex error\n");
        return 0;
    }

    // Execultar a expressão regular 
    reti = regexec(&regex, email, 0, NULL, 0);
    regfree(&regex);

    return !reti;
}