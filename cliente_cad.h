#include <stdio.h>
#include <string.h>
#include "cliente.h"
#include "validacao.h"

// Função para cadastra um cliente
void cadastra_cliente(Cliente *cliente)
{
    printf("Digite o nome do cliente:   ");
    fgets(cliente->nome, sizeof(cliente->nome), stdin);
    cliente->nome[strcspn(cliente->nome, "\n")] = 0; //remove a nova linha 

    do{

        printf{"Digite o CPF do cliente: "};
        fgets(cliente->cpf, sizeof(cliente->cpf), stdin);
        cliente->cpf[strcspn(cliente->cpf, "\n")] =0;
    }while(!validar_cpf(cliente->cpf));

      do
      {
        printf("Digite o email do cliente: ");
        fgets(clinte->email, sizeof(cliente->email), stdin);
        cliente->email[strcspn(cliente->email, "\n")] = 0;
      } while (!validar_email(cliente->email));

      printf("Digite a idade do cliente: ");
      scanf("%d", &clinte->idade);
      getchar(); // Limpa o buffer do teclado 
      

} 