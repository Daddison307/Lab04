// VectorDriver.cpp
// Addison Dugal
// 10/15/18
// Tests functions written in VectorDiver.h

#include "stdafx.h"
#include "VectorDriver.h"

int main() {
	cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
	vector<short> sample_vector(5);

	cout << "new vector: ";
	print(sample_vector);
	cout << endl;

	fill_vector(sample_vector);

	cout << "filled vector: ";
	print(sample_vector);
	cout << endl;
	
	cout << "sum of vector's elements: " << compute_sum(sample_vector) <<
		endl;
	
	vector<short> sample2(0);
	
	cout << "Initial vector: ";
	print(sample2);
	cout << endl;

	add_numbers(sample2);
	cout << "After first add: ";
	print(sample2);
	cout << endl;

	add_numbers(sample2);
	cout << "After second add: ";
	print(sample2);
	cout << endl;

	cout << "Only even indexes: ";
	print_even(sample2);
	cout << endl;

	stdsort(sample2);
	cout << "Whole vector after sort: ";
	print(sample2);
	cout << endl;

	cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
	system("pause");
	return 0;
}