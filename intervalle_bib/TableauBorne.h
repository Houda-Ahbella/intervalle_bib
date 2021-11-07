#pragma once
#include "Intervalle.h"

using namespace Interval;
namespace Interval {
	class TableauBorne : private Intervalle
	{
	private:
		float borne_inf;
		float borne_sup;

	public:
		TableauBorne(float sup, float inf, int taille);
		float operator[](int indice);
		
	};

};