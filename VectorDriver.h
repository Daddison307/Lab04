// VectorDriver.h
// Addison Dugal
// 10/15/18
// Defines functions for stl vector

typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::rand;
using std::sort;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
	for (unsigned short i = 0; i < data.size(); i++) {
		data.at(i) = i;
	}
}

// print our vector in a fancy way
void print(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
	std::vector<short>::const_iterator iter = data.begin();
	short sum = 0;
	while (iter != data.end()) {
		sum += *iter;
		iter++;
	}
	return sum;
}

// TODO: implement add_numbers
// Adds 10 random numbers to vector (in this case, ints from 0 to 99)
// Uses rand() found on cplusplus.com
void add_numbers(vector<short> &data)
{
	for (int i = 0; i < 10; i++)
	{
		data.push_back(rand() % 100);
	}
}

// TODO: implement print_even
// Prints only elements of vector at 0, 2, etc...
void print_even(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<";
		for (ulong i = 0; i<data.size(); i = i + 2) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// TODO: implement is_present
// checks vector for given value
bool is_present(short a, const vector<short> &data)
{
	std::vector<short>::const_iterator iter = data.begin();
	while (iter != data.end()) {
		if (*iter == a)
		{
			return true;
		}
		iter++;
	}
	return false; //if whole loop runs, a is not present
}

// TODO: implement std::sort function
// Sorts the vector by
void stdsort(const vector<short> &data) {
	sort(data.begin(), data.end());
}