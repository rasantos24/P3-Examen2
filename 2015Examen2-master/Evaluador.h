#ifndef EVALUADOR_H
#define EVALUADOR_H

#include "Planeta.h"
#include "NodoBinario.h"
#include <iostream>       // std::cin, std::cout
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <list>
using namespace std;

void evaluar();
void escribir(string nombre_archivo, Planeta*planeta, int posicion);
Planeta* leer(string nombre_archivo, int posicion);
string getFondo(stack<string> mi_pila);
char getUltimo(queue<char> mi_cola);
vector<int> convertirAVector(list<int> mi_lista);
map<int,int> getTabla(int num);
set<string> getValores(NodoBinario* raiz);
void buscarYReemplazar(NodoBinario* raiz, string buscado, string reemplazo);

#endif // EVALUADOR_H
