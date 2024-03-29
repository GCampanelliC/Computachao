//========================================================================================================
// Cálculo de Integral Dupla Via Regra de 3/8 de Simpson
// Aluno: Rafael Yuri M. Barbosa
// Graduando em Engenharia Química
//========================================================================================================

//========================================================================================================
//Bibliotecas
//========================================================================================================
#include <iostream>
#include <fstream>
#include <math.h>
#include <stdlib.h>
//========================================================================================================

//========================================================================================================
//Constantes
//========================================================================================================
#define PI acos( -1 )
#define euler exp( 1 )
//========================================================================================================

//========================================================================================================
//Definição do Padrão C++
//========================================================================================================
using namespace std ;
//========================================================================================================

//========================================================================================================
//Função a ser integrada
//========================================================================================================
double fxy ( double x , double y )
{
  return ( x * y ) ;
}
//========================================================================================================

//========================================================================================================
//Cálculo da integral dupla
//========================================================================================================
double integral ( double a , double b , double c , double d , int nx , int ny )
//a, b, c e d são os limites de integração
{
  double hx , hy ; //espaçamento em x e y, respectivamente.
  hx = ( b - a ) / ( 3 * nx ) ;
  hy = ( d - c ) / ( 3 * ny ) ;
  //Aplicando 3/8 de Simpson adaptado para integral dupla
  double aux = 0 ;
  double aux1, aux2 ;
  double k = 3 * hx ;
  double l = 3 * hy ;
  aux1 = c ;
  aux2 = l ;
   while ( k <= b )
    {
        while ( l <= d )
	{
	   for ( int i = 0 ; i <= 3 ; i++ )
	     {
	       for ( int j = 0 ; j <= 3 ; j++ )
		 {
		   if ( i == 0 or i == 3 )
		     {
		       if ( j == 0 or j == 3 )
			 {
			   aux = aux + fxy ( ( a + i * hx ) , ( c + j * hy ) ) ;
			 }
		       else
			 {
			   aux = aux + 3 * fxy ( ( a + i * hx ) , ( c + j * hy ) ) ;
			 }
		     }
		   else
		     {
		       if ( j == 0 or j == 3 )
			 {
			   aux = aux + 3 * fxy ( ( a + i * hx ) , ( c + j * hy ) ) ;
			 }
		       else
			 {
			   aux = aux + 3 * 3 * fxy ( ( a + i * hx ) , ( c + j * hy ) ) ;
			 }
		     }
		 }
	     }
	    c = l ;
	   l = l + 3 * hy ;
	}
       a = k ;
       k = k + 3 * hx ;
       c = aux1 ;
       l = aux2 ;
    }
   return ( ( 3 * hx / 8 ) * ( 3 * hy / 8 ) * aux ) ;
}
//========================================================================================================

//========================================================================================================
//Função principal
//========================================================================================================
int main ( )
{
  //Declaração de Variáveis
  double a , b , c , d ;
  int nx , ny ;
  //Declaração do arquivo de saída
  fstream arquivo ( "saida.dat" , ios::in | ios::out | ios::trunc ) ;
  
  //Entrada dos dados
  cout << "Digite os limites de integração em x: " ;
  cin >> a >> b ;
  cout << "Digite os limites de integração em y: " ;
  cin >> c >> d ;
  cout << "Digite o numero de divisoes em x: " ;
  cin >> nx ;
  cout << "Digite o numero de divisoes em y: " ;
  cin >> ny ;

  //Escrevendo resultados no arquivo
  if ( arquivo.is_open ( ) )
    {
      arquivo << "O valor da integral dupla eh: \n" ;
      arquivo << integral ( a , b , c , d , nx , ny ) ;
    }
  arquivo.close ( ) ;

  //Fim do programa
  return 0 ;
}
