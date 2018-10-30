#pragma once
#include<iostream>
using namespace std;
class matrix_
{
	int i, j;
	int** matr;
public:
	matrix_();
	matrix_(int i, int j, int num=0);
	void print() const;
	int getI() const { return i; }
	int getJ() const { return j; }
	void transpose();
	void operator*=(int num);
	void operator+=(int num);
	void operator-=(int num);
	void operator/=(int num);
	matrix_(const matrix_ & m);
	matrix_ & operator=(const matrix_ & m);
	matrix_(matrix_ && m);
	matrix_ & operator=(matrix_ & m);

	int* operator[](int i);
	~matrix_();
};
bool operator==(const matrix_ & m1, const matrix_ & m2);
ostream& operator<<(ostream& os, const matrix_ & m);