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
		TableauBorne(const TableauBorne&);
		TableauBorne& operator=(const TableauBorne&);
		void operator()(int index, float T);
		const float& operator[](int indice) const;

		 
		
	};

};