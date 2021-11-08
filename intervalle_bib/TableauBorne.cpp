#include "pch.h"
#include "TableauBorne.h"
#include <assert.h>
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
	/*this->Intervalle::operator[](0) = this->borne_inf;
	this->Intervalle::operator[](taille-1) = this->borne_sup;*/

}

Interval::TableauBorne::TableauBorne(const TableauBorne& T):Intervalle(T)
{
	this->borne_inf = T.borne_inf;
	this->borne_sup = T.borne_sup;
}

TableauBorne& Interval::TableauBorne::operator=(const TableauBorne& T)
{
	if (this != &T)
	{
		this->Intervalle::operator=(T);

		this->borne_inf = T.borne_inf;
		this->borne_sup = T.borne_sup;

	}
	return *this;
}

void Interval::TableauBorne::operator()(int index, float a)
{
	assert(a >= this->borne_inf && a <=this->borne_sup);

	this->Intervalle::operator[](index) = a;
}

const float & Interval::TableauBorne::operator[](int indice) const 
{
	return this->Intervalle::operator[](indice);

}


