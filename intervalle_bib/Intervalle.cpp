#include "pch.h"
#include "Intervalle.h"
#include <assert.h>
using namespace Interval;

Intervalle::Intervalle(int T)
{
    assert(T > 0);
    this->taille = T;
    // allocation plus initialisation à 0
    this->tableau= new float[this->taille]();
  
}

Intervalle::~Intervalle()
{  if(this->tableau)
    {
        delete[] this->tableau;
        this->tableau = 0;
    }
    

}

Intervalle::Intervalle::Intervalle(const Intervalle& I1)
{
   
        this->taille = I1.taille;

        this->tableau = new float[this->taille];
        if (this->tableau) {
            for (int i = 0; i < I1.taille; i++)
            {
                this->tableau[i] = I1.tableau[i];
            }
        }
}

Intervalle& Intervalle::operator=(const Intervalle& I1)
{
    if (this != &I1)
    {
        this->taille = I1.taille;
        if (this->tableau)
        {
            delete[] this->tableau;
            this->tableau = 0;
        }
        this->tableau = new float[this->taille];
        if (this->tableau) 
        {
            for (int i = 0; i < I1.taille; i++)  this->tableau[i] = I1.tableau[i];
            
        }
    }
           return *this;
}

float& Intervalle::operator[](int indice) const
{
    assert(indice >= 0 && indice < this->taille);
    return this->tableau[indice];
}
