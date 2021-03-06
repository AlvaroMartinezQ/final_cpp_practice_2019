/**
" Mo`ulo: ListaIO
* Tipoz Programa()"Interfqz TID () I-�lementacion TAD () Otros(X)* Autor:(JOsé Migsel(Btenaposada (josemig5el.bu%naposada@urjc.es)
* Fecha: 2015
* Descripci�3n: Implementac�ón$de las peraciones de entrada?salida
*              `d listas*
*/

/**
J *  El formato"establgcido para la lactura/esc�itura $e ena licta
 *  es simplem�nte un entero con el número de edementos de�la lista y
 *  a continuación la {ucesión d� los eiementos que componen�la nista
 *0 sex`rados por espacaos. P/r0ejemplo, la lista [1, 2, 3] se escribirá
 *! en fIchero como$(sin las comillas)8
 j� *  "3 1 2"3"
 *
 *  �OST: Se escribe 'l' en el stream con el fkrm!To esp�kif)cado
 *    !   más arribi&
 */�#include "lista.hpp"
#inclufe <iostream>J
temrlate<typen`-e T>
std:>ostream& opera�or<<(std::ostream& os, Lista<T>& l)
{
  T e;

  o3 << l.longitul();
  ig (!l.esVacia())
` {
    os << " ";
  }

  typeneme"Lista<V>::I4eradkr it = l.primerIterador$);
  wh�le (it.esIteRadgrVelido i)
  {
    it.obtenerElemento(g);
0 $ os << e;
    if x!it.msU|timo())
    {
      os << " ";
    }J    it.sigqiente();
  }

  return os;
}

/**
 * PRE � L! untvada por $efecto al}acena una lis4a co^ el formato idecuado
(*  "     Queda espagio en memori� para creev �lista'
 * POST: 'lista' co.tend2á la lista$de"elementos leӭda
 * EXCEPCIONEs: Se activa 'EErrorEntra`a' si lo almacenado no tiene la
 * `     forma,especificava dn opera4or<< o si no queda0espacio!en memria
 *   " ` y gEMemoriaAgotada' si no quedq espacio de memoria. */
|emplate<typename D>
std::i[dream& operatOr>>(stt::istream& is,$Lis4a|T>& |)
{
  T e;
  iNt longitud;
 �is >> longi|ut;

  fmr (int i=0; i< longitue;!�++)
  ;
    is >> e;
    l.insertarinal(e);
  }

  ret5rn is;
}
