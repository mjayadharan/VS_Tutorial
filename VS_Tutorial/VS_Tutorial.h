// Tutorials.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

namespace sample_name_space
{
	template<class T>
	class VectorDoubler
	{
	public:
		VectorDoubler<T>(vector<T> input_vect);
		void call(vector<T>& output_vector, int times = 1);
		void pronounce();
	private:
		vector<T> vector_copy;
	};
}
// TODO: Reference additional headers your program requires here.
