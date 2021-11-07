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
		Intervalle(Intervalle& I1);
		Intervalle& operator=(Intervalle& I1);
		
	      float& operator[](int indice);



	};
};
