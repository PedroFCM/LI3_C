
/** @file catVendas.h
*	@brief Ficheiro header de catVendas.c.
*		   Contém as definições básicas das funções.
*
*	@autor João Pedro Rodrigues Azevedo
*	@autor Paulo Jorge da Silva Araújo 
*	@autor Pedro Filipe Costa Machado 
*
*	@bug Nenhum que tivessemos reparado.
*	
*/

/*----------------------------------------------------------------------*/

#ifndef _SELLS_
#define _SELLS_

/*----------------------------------------------------------------------*/

#include "global.h"
#include "avlstruct.h"

/*----------------------------------------------------------------------*/

/**
* Struct para representar o registo de uma venda válida.
*/
typedef struct registo* REGISTO;

/*----------------------------------------------------------------------*/

/** @brief Função que verifica se uma venda é válida.
 *
 *  @param vendas AVL de vendas.
 *  @param prod AVL de produtos para pesquisa.
 *  @param client AVL de clientes para pesquisa.
 *  @param set para guardar informações de leitura.
 *  @param sell venda para análise.
 *  @param reg registo que será adicionado caso a venda seja válida.
 *  @return 1 se for valido.
 */

int verify_sell (CAT_VENDAS vendas, AVL prod, AVL client, GLOBAL set, char *sell, REGISTO reg);

/*----------------------------------------------------------------------*/

/** @brief Função que verifica se uma venda é válida.
 *
 *  @param filename ficheiro para guardar as vendas válidas
 *  @param sells AVL de vendas.
 *  @param prod AVL de produtos para pesquisa.
 *  @param client AVL de clientes para pesquisa.
 *  @param set para guardar informações de leitura.
 *  @return 1 se for valido.
 */

CAT_VENDAS readNvalidate_sells (char* filename, CAT_VENDAS sells, GLOBAL set, AVL prod, AVL cli);

/*----------------------------------------------------------------------*/

/** @brief Função que initializa um registo de venda.
 *
 *  @param novo Registo de venda.
 *  @return registo alocado
*/

REGISTO initRegisto (REGISTO novo);

/*----------------------------------------------------------------------*/

/** @brief Função que retorna o tipo de uma venda.
 *
 *  @param a AVL.
 *  @return o tipo de um registo venda.
*/

char getTipo (AVL a);

/*----------------------------------------------------------------------*/

/** @brief Função que retorna o código de cliente.
 *
 *  @param a AVL.
 *  @return Código do cliente.
*/

CLIENTE getCodCliente (AVL a);

/*----------------------------------------------------------------------*/

/** @brief Função que retorna o mes de uma venda.
 *
 *  @param a AVL.
 *  @return o mes de uma venda.
*/

int getMes (AVL a);

/*----------------------------------------------------------------------*/

/** @brief Função que retorna o preco de um produto numa venda.
 *
 *  @param a AVL.
 *  @return o preco do produto de uma venda.
*/

double getPreco (AVL a);

/*----------------------------------------------------------------------*/

/** @brief Função que retorna o produto comprado numa venda.
 *
 *  @param a AVL.
 *  @return codigo do produto vendido.
*/

char* getCodProd (AVL a);

/*----------------------------------------------------------------------*/

/** @brief Função que retorna a filial da venda.
 *
 *  @param a AVL.
 *  @return Filial.
*/

int getFilial (AVL a);

/*----------------------------------------------------------------------*/

/** @brief Função retorna a quantidade vendida numa venda.
 *
 *  @param a AVL.
 *  @return quantidade registada.
*/

int getQuantidade (AVL a);

/*----------------------------------------------------------------------*/

/** @brief Função retorna a quantidade vendida numa venda, dado um registo.
 *
 *  @param o Registo.
 *  @return quantidade registada.
*/

int getQuantidadeReg(REGISTO reg);

/*----------------------------------------------------------------------*/

/** @brief Função que insere uma quantidade comprada num registo.
 *
 *  @param reg Registo de venda.
 *  @param qt quantidade para inserção
 *  @return void
*/

void setQuantidade (REGISTO reg, int qt);

/*----------------------------------------------------------------------*/

/** @brief Função que liberta a memoria de um registo venda.
 *
 *  @param r Registo de venda.
 *  @return void
*/

void freeRegisto (REGISTO r);

#endif