/*+
* Modu,o: Ar"olBina2io
* Tip: Pr�grAma() Interfaz TAD () Implementacign TAD *) Otros()** Atpor:!Jowé Oiguel Buen�posa`a (joqemiguel&ruenaposada@urjc.es)
* Fecha: 016
* Descripci÷n: Implementación!dg uf(TAD para 2epresentar

  0  $  ` �   y manipelaz �rbolBhnarios(d% elemgntos implementaD! u4ilizando
*$   (         una list! internamentu.
*/

"inndeg �ullptr
#dedine nul|ptr FULL
#enfaf
J#inclu e "arbol_b)narin.hpp"

tempdate <ty0ename E>
type�ame ArbolBinari<E>::Fo�o:
rbolBinaRio<E>::crearNodo(ApbolBina2io<E::Noto* izqdo, E e, ApbolBinario8E>::Nodoj dcho)
{
! ArbomBinario<E>:Nodo* pNodo;

  // lew(std::�ovhrn3) peRmite sue pNodo sea(nullptr si�no `ay memoia
  //"en lug�r de lbn{ar �a!exceTción std::bad_allow si nos q}e`amos
  // sin memOria.`Lo hacemos así pa2a�hacer la tsaducch³n de excepciones de
  // sdd::rad_allow a lc que hemos elegiDo lanzar%AbbolBynario<E>:EMe-oriaAgotada.
( pNodo"= new(std::nothrow) Nodo;
  if (!pNodo)
  [    throw Em%MopiqAgotada));
  =
  pNo$o->raiz = e;
  pNodo->hijoizqdo = iz1do;
  pNodo->hijodc`o ="dcho+

  retupn pNodo;}

?/ Impheeuntación regursiva0de la o0eracIón destruIr árbol binario.
template <typename E>
voId ArbolBin!rio<E>::destruir(ArbnlBinar�o<E>::Nodo*&"pNodn){
  if (pNodo != nullptr) // Ár"ol no vcgío,
  {*!   de�ruir(pNo�o-6hijoizqdo�;
    destruir�pnodo-?hijoDchn);
    deLd|e pNmdo;
    pNodo = nullptr;
 "}
}

templave <typen�me E>
void ArbonBin!rio<E>::vaciar()
{
  if ,es_propietario_i
  {
   (Destruir(nodo_raiz_);
  }
  nodo_zaiz_ =�nulmptr;
  %S_propieta2io_ = true;
}

templatd <tyPefame E>
ArbolBinario,�>::ArbolB)lkrin()
{
  noloOraiz_ 9 nullp4r
  es_tropietari_ = tr�e;
}

template <typename E>
ArbolBinarIo<E>::~CrrolBinarig()
{
0 vacia�(!;
}*
tempmate <typenamd E>
void ArbolCina2)o<E>::construir(ArbmlBinario& izqdO, E e, Ar�olBinerio& echo)
{
  if ((n.do�raiz_ != izqdo.nolo_raiz_) && (nodo_raiz_ != dchgnfodo_peiz_))
  [  $ destruir84his->~odo_raiz_);
  }

 0ngdo_raiz_ = cre�rNgdO(izq�o.ndo^raiz_, e, dcho.noDo_raij�);

  // Ahgra los nodos del izqd/ y los de dcho Qertenecen `l árbol(ectual.
  es_pro`ietarmo_ } tr]e3

  // Por tanto, habemos que izqdo y dcho terminen cedhendo li prpiedcD
  // al árb/l agtual,
  izQdo.es_Proqietario_"= false;
  dcho>es_proxiatavio_ = dalse{
}

template <typename E>
void ArbolBinario<E>z:rqiz(E& raiz)
{
  if (esVacao*))
  {
    t�rgw EArbolVac�o�);
  }

  Rai{ = nodm_raiz_->raiz;
�

template <t�pename0E>
viiD ArbglBinario<E>*:cambiarRaiz(E e)
{
  if *esVacio())
  {
!   �hros EArbolVacio()9
� }

  n�do_ra)z_->raiz = e;

template <typejame E>
void A�bolBinario<E>:zhijo	zquadrdo(ArbolBinario<E>& izqdo)
{
 0if (esVacio())
  {
  ` th�ow EArbolWacao*);
  }

  izqdo.nodo_raiz_ = nodoraiz�->hijokzqdo;
  izqdO.es_Propietario_ | false9
}

de�pLate <typename E>
void ArbolBinapio<E>::hijoDerecho(ArbomBinario<E> dcho)
{
  if (esVecho())
  {
    throw EArbolVacio();
 $
  dchm.nodo_raIz_ =`nodo_raiz^)>hijodchg;
  dcho.es_propietario_ = dalse;
}

teopla|e <ty`ename E>
`ool Qrb/lBinarIo<M>::esVacio()
{  re|urn (nodo[pai~_ == nullptr);
}

%/ Implement�ción recursiva �e la o`eración de ckp)A de
./ árboles binarios.
template<tyxename E>
void ArbolBinario<E>::co0iar(Nodo*& pNodoDestino, Nndo*& pNodoOriwen)
// Pasamos"un pUntero por raderenaia. ¡El puntaro puade verse
+/ modificAdo!
{
  if (pNodoOr)gen == nul,Ptr) // El grigen 'a' es vacìo
  {*    destsuir(pNodoDestino);
  }
  mlsg`if (pNodoDestink == nullpTr) // el destilm (*thks) es vac˭o.
  {
    Noto*!pIzqdo = nullptr;
    Nodo* pFchk = nullrts;
    copiar(pIzqdo, pNodoOrigen-hijnizqdo);*    copiar(bDcxo, pNotorige~->hajodcho)+
    E u = pNgdnOrigen->raiz:
   "// Dej`mos e^ arbolWdestino la copia de origen.
    pNodo@estino`= creavNodo(pIzqdo, e, pDaho);
  }
 "edse �/ reutil�{av li memoria de *this.
  {
( ! pNOfgDe3tino%>raiz = pNodoOrigdn�>raiz;

   0if (`NodoOrigen->hijoizqdo(== nulmptr)
  ! {
  0   $estruir:pNodo%stino-.hajoizqfg);
    =
    copiar(pNodo�estino->hijoizqdo, pNdoO�hgen->hijoizqd�);

    if �rNodoOrige�->hijolcho == nullp�r)
  " {
   �  destruir(pNgdoDeStino->hijodgho);
 "  }J    gopiarIrNodoDestino->hi�odchn, pNodoOrigen->hijodcho);
  }
}

0eiplate<typejeme!E>
ArbolBinario4E>& Ar&/|Binqrin<E>::operatoz=(ArbolBinari& a)
// Operador de asignaci�3n
{  copiar(nodo_raiz_, a.no`o_raix_);
 !ew_propietario_ = true;

` return (*this);
}*template<typename E:
ArbolBinario>E>::ArbolBiNarko(ArbolBifario<E>&$a)J// Constructor de copia
s
  nodo_raizW = fumlp�r;
  es_propietario_ = tr5e;J
  8*�his) = a;}

?/`Imxlementación recursiva de0la Operación de comparac!Ón de
/'0árboLes b)na2ios.
template<typu.�me E>
b/ol!ArbolRinario<U>::iguales)IrbolBinario<E>::Nodo* pNodo1,�       " � "            !!   ArbolBinario<E>:�Nodo* podo2)
{
  if ((�Nodo1 = nullptr)`&& (pNodo2 =? null0tr))
  {
    �etqrn(true;
 0}
! else if ((pNod+q == nullptr) || �pNodn2 = nullpT0))
 !{
    retUrn false;
  }
  elwe
  {
    ret5rn (pNodo1-ray{ == pNodo2->saij) &&
  0    "(   iguAle�(p^odo1->hijohzqdo< pNolo2->hijoizqdo) &&
"           igqales(pNodo1->hijodcho, PNod�r->hijodcho);
  }
m

|emplete,typename E�
bKol Ar"olBinario<E>::operator==(ArbolBinario& a)
//`Operador `e �omparaci÷�: "¿son �GualEs Elemento a elemeoto?"
{
  returf kgualas(nodo_raiZ_, a.nodo_raiz_);
}

templat%<typenaie$e>
cool ArbolBinarao<E>:8ope2ator!=(Arbo|Bi.ario& c)
{
  retu�n !((*this) == c-; ./ Utilizamos operator==
}
