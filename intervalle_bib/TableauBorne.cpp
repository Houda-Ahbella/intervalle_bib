#include "pch.h"
#include "TableauBorne.h"
using namespace Interval;
TableauBorne::TableauBorne(float sup, float inf, int taille):Intervalle(taille)
{
	if (inf < sup) 
	{
		this->borne_inf = inf;
		this->borne_sup = sup;
		
	}
	else
	{
		this->borne_inf = sup;
		this->borne_sup = inf;
		

	}
	this->Intervalle::operator[](0) = this->borne_inf;
	this->Intervalle::operator[](taille-1) = this->borne_sup;

}

float Interval::TableauBorne::operator[](int indice) 
{
	return this->Intervalle::operator[](indice);
}


