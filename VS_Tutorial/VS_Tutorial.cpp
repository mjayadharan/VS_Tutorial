// Tutorials.cpp : Defines the entry point for the application.
//

#include "VS_Tutorial.h"
#include<vector>

using namespace std;
using namespace sample_name_space;

template<class T>
VectorDoubler<T>::VectorDoubler(vector<T> input_vect):
	vector_copy(input_vect)
{
}

//Small change unnoticed and I am addng some more things here .
//and here as well.

template<class T>
void VectorDoubler<T>::call(vector<T>& output_vector, int times)
{
	output_vector.resize(vector_copy.size());
	for (int i = 0; i < output_vector.size(); i++)
	{
		output_vector[i] = vector_copy[i] * pow(2, times);

	}
	//somthng new added
}

template<class T>
void VectorDoubler<T>::pronounce()
{
	for (auto el : vector_copy)
	{
		cout << el << ", ";
	}
	cout << endl;
}


int main()
{
	cout << "Hello CMake." << endl;
	vector<double> double_vect(10, 0.0);
	cout << sin(2)<<endl;
	vector<double> dummy_vector = { 1, 2, 3, 4, 5 };
	VectorDoubler<double> vector_doubler(dummy_vector);
	vector<double> doubled_vector;
	vector_doubler.call(doubled_vector, 1);
	for (auto el : doubled_vector)
	{
		cout << el << endl;
	}

	return 0;
}
