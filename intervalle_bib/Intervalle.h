#pragma once
#include <iostream>
namespace Interval
{
	class Intervalle
	{
	private:
		float* tableau;
		int taille;

	public:
		Intervalle(int T);
		~Intervalle();
		Intervalle(const Intervalle& I1);
		Intervalle& operator=(const Intervalle& I1);
		
	      float& operator[](int indice) const;



	};
};
