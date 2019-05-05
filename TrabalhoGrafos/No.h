#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED
#include <vector>
#include "Aresta.h"
using namespace std;

class No{

private:

    int id;
    int grauSaida;
    int grauEntrada;
    char label;
    float id_intraNo;
    bool visitado;
    int visitadoConex;

public:

    std::vector <Aresta> listaAresta;
    No();
    No(int id, int grauSaida);
    ~No();
    void setLabel(char label) { this->label = label; };
    char getLabel() { return this->label; };
    int getId();
    int getGrauSaida() {return this->grauSaida;};
    int getGrauEntrada(){return this->grauEntrada;};
    void setId(int id);
    void setGrauSaida(int g);
    void setGrauEntrada(int g);
    void adicionaAresta(int id,float pesoA,int idLista);
    void adicionaArestaSemPeso(int id,int idLista);
    void removeAresta(int id);
    float getAresta(int index);
    bool eVizinho(int id);
    void setVisitado(bool novo);
    bool getVisitado();
    void setVisitadoConex(int a);
    int getVisitadoConex();

};

#endif // NO_H_INCLUDED
