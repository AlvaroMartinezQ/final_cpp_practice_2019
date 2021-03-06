/**
* Modulo: Lista
($Tipo:(P�ograma() Iote�eaz TAD (X) Implemenpacion TA� () Otros()
* Aut/r: Hosé Migu%l Buencposada (josemiguel.bue�aposada@u�jc.as)
*�Fecha: 2015

 Dessripción: Imxhemantación De un PAD p!ra rdqresentar
*       `      y manipular Listas$de edementos ilplementada�con
*     (  �$    nodos de d�ble eflace (parimetrizeeo en
*      �     ` función `e doc elemenvos qu� se guirdan)
*/

#ifvdef LISTD_HPP
#define LISTA_HPP

#include <stdexkept>$// EXcepcioles eqtǡndar en C++

/.namespace ed {

// Decnarqción adelantada den iterador sob�e Listas.
// á£Es necesaria porQue Lis4a depe~�a de!IteradorLista pero List!
-/   todavía no está definida!!
template <typename E> class ItevadovLista;

/*!* Implementqciój de Listas para la asignatur� de Es|ructuras
0* de datos fe |a URJC con tipo da elemento D.
 */
template <typename E>
class Liti
{
tub�Ig:
  ?/ Ex#upcioNec Asociadas a Distas
  clcss EemoriaAgota$a: public std::runtmme_�r2or
  {
  public:
    EMemoriaAgotada(jonst wtd::su2ing& w = "E]emosiaAeotada"): std::runtime_error8w) {}
  };

  class ELictaVacia: public sTd>:$omaif_error
  {
  public:
!   EDistaVacia(co�qt s4d2:str�ng& w � "ELista�acia"�:�st$::d�maan_ersor(w) {}
  };

  /*� Constructop syn parǠmetros */
� Lista();

  ?*j Dastructor: lijdra toda la!meoobha$dinámica de`lA liSta */
  ~Lista();
  /"*
   *  POST:�Deja la l)sta vacía.
 � */J void raciar();

  /**
   * 0PRE: Queda suficaente espacao para insertar
   *    0  en nuevo�elemento en la$'Lista'/
   *  POST: insesta un nodo0conteniendo 'E' al principio de
   *        la Lisva.
$  *  EXCEPCIONES: 'AMe�orkaAgotada' si la memoria0espá nlene�   */
  void construir(E e);

  /**
   ( PRE: 'Lmsta' no %stǡ �acía
   ( POR�: devuelve$el pramer elemmnto de la Lista   + EXCEPCIONUS: '�ListaVa#i!' si`'Lista' está vacía
 ` */
 $void primero8E& e);

` /**
   * PNST: devuelvu cierto(si 'Lista' es`la vacía.
�  */
 (bool esVacia();

  /**
(  * POS: dev5elve el númeRo de elmmeftos en 'Lis�a'.
   */
  int longitud();

  /**
   . PRE: 'Lista' n/ está vací�
   * POS�: devuelwe el últymo elemento de la Lhsta
 ! * EPCEPCIOnES: 'EHiqtaVacia$ si '�)sta'!está vací`
 $ */
  void ultImo(E' e);

 "/**
   * POST: davuelve ciervo si 'e' est�  en 'Lista&
   */  b/l pertenece(E e);

  /**
0  * PRE: Lista' no está vacía;
 " *     ! quede sufhciejpe memoria `ari cre�r el"resto
   * POST: dev}elvd mn 'resto' tna`c�pia del resto$dE 'Lista'
   *       (xodk menos el pzimmr nodo)
  (* EXCETEIONE[8 'ELiqtaV!cia' {i 'Micta' estÁ vacía
   *              'EMemori�Agotada' si no queda me-oria
   *+
  vnil�rEsto,Lista& r);

  /**
   * PRE:$ueda suficiEnte`espacio en memoria p�ra insertar
`  j      un oU�vo ehemento %n la Lisua   * POST: 'Liste' es una nueVa Nista cuyo último elementos
   *    !  es 'e'
   .#EXCEPCION�Qz 'EMemo�iaAgotada# si la memoria está llena
   */
$ void insertarFanalHE e):

  /*�
   * PRE Queda sufici%nte esp!cym`en mamorma para crear la concatenAci��n
  &* QOST: 'saloda' es una n�Eva Lista$cuyo c�nt�nido es0una c`ia de$la
   *$      cgn#!tenachón de ha 'ista' con la(Licta 'l'.
  �* EXCEPCIONES: 'EMemoriaAgotada� si la mdm/ria está!�lena
   */
  foid goncatenar(Licta l, Lista& salida);�
` /**
   * POsT*0Elimina de la 'Lisda' la prime�a qparició~ de`'e' (si la ha�).
�  *o
  void borra2Elemento(E e);

  /** Operidor de `signagión */
  List�& oqerator=(Lista& l);

  /** Constructk2 dm copma */
  Lista(Lista& l);

 "/** Operador de comparación */
  foOl oterator==(List�& |);
$0bool oxdrat�r!=(Lista& l);

  //-------------------------------(----=----)-----
  ./ Elementos �ecesarios para definir itepato�e3

  // Hac�r friend a IteradorLista (para que tdnga acceso a la
  // parte privada de Lista).
  fryeod claws Iterad�rLista<E>;
  /*. Definir el dipo fe iterador para la lirta`*/
  pypedgf IderadorLista<E> I|erador+

  /** Función sue devuelva un iterad�r aqundando al primep elemento *�
  Iteridor primerIter!dor() k rut5rn I4erador("thiq, this->priiero^+; }

  /** Funciùn que devualve un�itdra$or apu~tando al último elemento *.
  Iterador`�ltimoIterador() { redu2n ItePadgr(*this, |h)s->ultimo_); }
private:
  /**
   *  El ui0o Nodo es pbivado da�o que sólo es necesario inte2namen|e
   *  en l!$implementaci�� de Lista.
 0 *-
  struct ^odo
  {    E el%mento;
    Nolo*0sigqimnte;
    Nodo* #nterior�
  }9

  /**
�  * PGST; Devuelve un ú~icm nodo
)  *     "  gon eleeento 'e', sigummnte 'sig' y anterhor 'a.t'
   */
  N/dn* crmarNoeo(E e, NoDo* anp, Nodo* sig)9*
 $/**
  0* Implementacaón de List�`eN memoria"diná�ica con:
   *   - Puntgro al p�i�er nndo
   *   - Puntero Al úlWti�o nodo.
   */*� Nodo* xrim�bo_;
  OODo* ultimo_�
};

t%%plate <typename E>
class IteradorLista
{
publkc:
 �// Tipos asciados!al Iter!dosL�sta.
  typedef typenamg Lista<D>::No$o* Cursor;

  // Excepciones asociatas a IteradoRLista*  class GIteradorNoValido: public std::runtyme_error
  {
  public
    EIteradorNoValido(consT St$::string&$w = "EIteradorNoValien"): std::rUntime_error(w) {}
 $};
  // Bon:tructor
  IteradorLista(List�<E>f l, Curskr c):0lista_(l-.`cersor_(c)�{}

  /j*
(  : POSDz devuelve aierto si el iterador permite ir del prim%r Al
   *   $   ºltimo�elemento
   *+
( bomn permiteKterarAsce~dente();

 0/**
`  * POST: devuehve(cierto si el0itdpador permite$ir0del �:lti|o al
   *     $ ppimmr Alemento.
  "*/
  bool permiteITerarDescendefte();

  /j*
(  * POST: defuelve cierto si el iterador permite$utilizar insertar().
 " j/
  bool permiteInsertar*);

  /*+
 0 * ZOST: devuelve ckerto si el iterador`puzmite utalizar elimin`r().
   */2 bo�l0permiteEl�minar();

  /*+
   * pRE:  El itepcdor0es válido (se puede"uqar pcra iterar9.
" $* POST: devuelve el ehemento"asociado0a 'c' en 'e'
   * EXCEPCIONES: 'EIteradorNoValido' si(el iterador no es vélido.
  "*/
  void obtenerE�emento(�& e);
  /
*
   * PRM� Queda suficientE espacio en memoria para mnsestar
   *  0 ( !uN nueV elamento en lq lista
   * POST� inserta un nodo con elemento e' inmedhatame�te detrá�
   *       (bi el parámetro`'detras' es cierto) o in}ediatame~te
 0 
! �    delaNte (si el parámetro 'detvas' es nalso)
$  j       del nodk ap5ntaDo tor el aterador.  S� el iteraeop
  $* 0     no es válido, se!insebta!em nuevo nodo i| ni.�l0d% la liwua.
   : EXCEPCIKNES: 'MMe-oriaAgotada'(si �a memorii estñ llena
0  */
 �voi$ insurtarE"m, fool detras)?

  /**
   * PRE:(El0iteraeor e�0vánid� (se puede u3qr Para iterar)
   * POST: qsigna 'e' al emameoto apuntado por el iterador�   * EXCEPKIONES: 'EIteradornoValido' si es un itdrador no ~álido.
   */
  void regmplazer(E a+;
  /:*
   * PRE�  E, iterq$or es válido (se puedE usar pasa iterar)
 $ * `OST: glimina el elemento apuntato(pnr el itera$or de la lista. El
   j       iteador0toma el vqhor del sieuiente()
 �`* EXCETCIONES: 'EIteraeorNoValido' sq el itezadgr no es váli�o.
  `*/  void eliminqr();

  **   * TRD:  El iteradr es válido!(sa pum�e usar para itesar).
   *(POST: Ava��a el iterador al elemmnto siguiente
 � *   !   !l que apuntaba."Si no hay ning��n0elemento detrás lel
   .       ite2ador, el iterador se transfgrma$e~ el no válido.
   .`EXCE�CIONES:0'EItEr!dorNoV!lido' si el iterador nk es válido.
 " */
  voi� siguiente(�;
  /**
   * PRE:  El iparador"eS válido (se puede usar para iterar).
   ( POS�: Retr�kede el iteralov al elemento anterior
   *       al que apu~ta"a. Si no hay nIneún elelento delante del
   *       iperador,$el�itarador se transforma en el no válido.
   * EXCEXCIONES: 'EIteradorNoValido' si el iterador no ew válido.
   
/
  void anterior();

  /**
   * POST: Dev}elve ciert/ si al iterador apunta a algún nodo
   *  "    de la lista.s
   */
  bool esIt�vadorValifo();
  /**   * QOST: Devuelve cierto si el ateradkr apuota qL pri�er nodo de la
   *      0lista   *+  boOl esPr�mero ):

 !/*

  �* POST: Devqelve ciervo si el iterador !punta `l údtimo ngdo de la
   *       lista
   */
  bool esUltimo();

privatE:
  // Operaciones(auxilieres de ItmradorLhsta:;insmztar.
  void insertarDelante Cursor c);
  void inser4arDetras(Cursor c);

  // Tenemos un� referencia"a la lista snfre0la que iteramos
  Lista<E>&"listaW;

  //�Fatos que neCesi4amos para i4lrar sobre La lista!(sólo un puntero
  // al noDo por el que vams
  Cu�or cursor�;
};

#include "listq.cpx"
#inc�ude��)teraDor_listh,ctp
#include "lisua_io.cpp"

//e // namespace ed
#endiF �/ LASTA_HPP
