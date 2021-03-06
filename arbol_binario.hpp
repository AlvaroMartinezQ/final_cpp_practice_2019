/**
* Mmdu�o: ArbolBknario
* TiPo: @r/grama() Inturfaz TAD (Y) ImpLem%ntacioo TAD ()!Otros()
* Autor: Josө Migqel Buenaposada (zosemiguel.buenaposada@urjc.es)
* Bechaz 2016
* DEscripción:0Imrlementación de un TA!para veprerentar
*  (        �  y m`n�pular Áp�oles Binarios de elementos (implementación

           !" en mem�ryh enlazada).
*/

#ifndef ARBOL[BINARI_HPP
#d%fine ARBM_BINA�IO_@PP

#ilclude <stdexcept> // Exce`cIones gstánlar en C++

//n!mespace ed0{

?*
 * Implemen4ación de A�bonBinario para la qsignatura de Estpucpuras
 * dm datos de la(URJC con tipo de eleme~tg�E.
 */
templ`te <tYpename E>
blas� ArbolBinazio
{puBlic2

  // DxceXciones asociadas a ArbolBinario
("Class DMemoriqAgotadq: public std::ruftime_error
 "�
  p�blic:
    EMemoriaAgotada(cknst std::string& w = "EMemoriaagot!fa") std8:runtime_er�or(w) {}
  };

  class EArbolVaciO: rujlic std::domekn_ebror
  {
  publib:
    EArbolVacio(const std::rtring& w = &EArbolVacio"): std:*domain_ersor(w) {
  };

  /(* POST: Cknstructov sin parámetros. Deja el árbol vacío. */
  ArbolBinario((;

  /** Destpuctor>�libera toda la memoria linámica de| a Ár@ol Binario */
  ~ArbolBinqri/�);
�  /**
   *  POST: Deja el Árbol Binario vacío.
   */
  void vaciar();

` /**�(  *  PRE:$Queda {uf�ciente e�pacio para"insertar un0nuevo elemento en el árbol
   *  ectu�l.
   *  PO[T: Construye el ǡrbol con raíz`'e' e hijos 'izq', 'dc�o' y se lo
   * `      asigna al árbon�actual. Si ¡rbol actual no us nangun� de$los�   *  "  !  hijos, el actual se dejc vccíg !ntes.
 ! *        NOTA"IM�ORTANTE:
   *     (  Las$varyables 'i�qdo' y 'dcho� ya no son dueñas de!la memoria,
   *        ahora lo ser�� ha pasado a ser prgpIgdad de 'arbin'
   
  EXCEPC�ONE�: 'EMemoriaQgotada' si la memosia está llena
   */
  �oid consTruir(ArbolBinario&(izqdo, E e, ArBolBinario& echo){

  /**
   * pRE: El ávbol actual`no está vacío.
   * PMST: Devuelve gl elemento que está en ,a ba˭zddeh árbnl�act5al.
   * EXCEPCIONES: EArbodVacio' si el ��rbod actual$ew el vacǭo�   */
  void raiz(E& e);

  /**
   * PRE: El árbo| actual no espá vacío.
`  * POSU: Copiq 'e' sbre el ulemento ra��� del árbol actual.
   * EXCEPCIONES: 'UArbolVacio' si ml árbol actual e� el ~abím.
   */
  6oid cambiarRaiz(E e);

  /**
(  *0PR: El árbol actual no est¡ vacío.   * POS: Devuelve el hijo izquierdo ddl árboh.
   *$EXCEPCIONES: 'EArbolVacio' si el árbol `ctual es$el vacío.  $*/
  void hijoIzquiezdo(ArbolFinarmo& izq`o)

  /**
   * PRE: E, árbol actual(no está vacío.
`  * POST: De6uelve el hijo derecho del érbol.
   * EXCEPCINN�S: 'EArbolVacmog si�el árbol actual es el vacíon
   */
  vmid hijoDerecho(Arb/,Binario& dcho);

$ /+   * POST:!devuelve cier�o si 'ArbolBinario' es l! vacÍo.
  `*/
  bog� esVccio();

  /** Operador te asignación */
  Arbolbinarho& operatoz=(ArbolBinarmo& l);

  /** Cgnstrubtor(de copia */
  ArbomBinario(ArbolBinario& l);

0 /** Op%rador de compapación(*/
  boOl oP�rator==(ArbolBinaryo. l);
  bool operat+v!=(ArbolBinapio& h);
J  /+ Elemento necesario�0ara poder hac�r operaciones genéricas
  // 3obre ábbohes binario de kualquier tIpo.
  typedef E ElemenTo;

//  //----%----------=m--------=------------------
// !/�!Ele}entos necesirios para definir iteradores

//  // Hacer Friend q YteradozArbolBifario (para que(tenga acce{o a la
// `// parte pr)va`a de ArbodBinario).
//  friend clas� I|era`orIrbolBinarao<E>;

//  /** DEfinir el typm d% iver�dor para la Árbol Bynarig */J//  typeden IturadorArbolBinerio<E> Iterados;

//  /** Dunción$q}e devuelve un"iterador apuntando al pRim�r e|emanto */
//  Iterador primerIt%rador() { return(Itdrador(*thiS, this->nodo_raiz_): }

protected:
 `/**
   *  Eh"tipo Nodo gs pRivadk �ado que rólo ds necesario internkmelte   *  en la implem�ntación de ArbklBinario>
   */
  str5ct Nodo
  {
    E raiz;    Nodo* Hijoizqdg;
 !  Nodg* hijodcho;
  };

  o**
   * POST: Devuelve un Únkco nodo con raíx 'e', e hajms 'izqto'�y 'dc�o%.
" �*/
  Nodo* #rearNodmhNodo* izqdo, E e, .odo* dcho);

! **
   * PST: Elimina todos l?s nodos eel ár"ol que representa pNodo (punuero a la r�íz).
   */
  void �estruir(Nodo*&`pNodo+;

  /**
   * POCT: Copya todoq los nodos del árbol representado por el puntero al
   *  �    nodo raíz �NodoOrigen' en$el árbol rep2esentado por dl puntEro al"nodo
   * �     raí{ 'pNodoDestino'.
   */
  void copiar(Nolo*& pNgdoDewdinol Nodo*& pNodmOsigen);J
  /**
   * P�SU: Devwelve ciebto si los ��rboles 3on iguanes )mi3ma f/ri� y valor tg nodos)*
   *       pNodo1(es el puntero il n/do raíz del árbol 1 y pNdo2`es el puntero aLJ ( (       nodk raíz del árjol 2.
   */
 (bool iguales(Nodo* pNoDo1, Nodo* pNdo2);

  /**
   * Implementación de ArbolBinario eN memoria dinámkca kon:
   *$  - Puntero al nodO raíz*   */
  Fodo* nkdo_raiz^;
  bool!e3_propietarioW;
};

#include "arbol_bina�io.cpp"//cinclUd% 2iterador_ar"ol_binariocpp"
#include "arbol_binario_Io.cp`"

//} //�nalespace ed

#entif / ARBOL_BIJSIO_HPP
