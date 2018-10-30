#include "matrix_.h"

matrix_::matrix_()
{
	this->i = 0;
	this->j = 0;
	this->matr = nullptr;
}
matrix_::matrix_(int i1, int j1, int num)
{
	if (i1 < 0 || j1 < 0) return;
	matr = new int*[i1];
	this->i = i1;
	this->j = j1;
	for (size_t i = 0; i < this->i; i++)
	{
		matr[i] = new int[j1];
		for (size_t j = 0; j < this->j; j++)
		{
			matr[i][j] = num;
		}
	}
}

void matrix_::print() const
{
	if (matr == nullptr) return;
	for (size_t i1 = 0; i1 < this->i; i1++)
	{
		for (size_t j1 = 0; j1 < this->j; j1++)
		{
			cout << matr[i1][j1] << " ";
		}
		cout << endl;
	}
}

void matrix_::operator*=(int num)
{
}

void matrix_::operator+=(int num)
{
}

void matrix_::operator-=(int num)
{
}

void matrix_::operator/=(int num)
{
}

matrix_::matrix_(const matrix_ & m)
{
	if (m.matr == nullptr)
	{
		this->i = this->j = 0;
		this->matr = nullptr;
		return;
	}
	this->i = m.i;
	this->j = m.j;
	this->matr = new int*[m.i];
	for (int i1 = 0; i1 < m.i; i1++)
	{
		this->matr[i] = new int[m.j];
		for (int j1 = 0; j1 < m.j; j1++)
		{
			this->matr[i1][j1] = m.matr[i1][j1];
		}
	}
}
matrix_ & matrix_::operator=(const matrix_ & m)
{
	return *this;
}

matrix_::matrix_(matrix_ && m)
{
}


int * matrix_::operator[](int i)
{
	return this->matr[i];
}

matrix_::~matrix_()
{
	for (size_t i = 0; i < this->i; i++)
	{
		delete[] matr[i];
	}
	delete[] matr;
}

bool operator==(const matrix_ & m1, const matrix_ & m2)
{
	return false;
}


ostream& operator<<(ostream& os, const matrix_ & m) {

	for (size_t i1 = 0; i1 < m.getI; i1++)
	{
		for (size_t j1 = 0; j1 < m.getJ; j1++)
		{
			os << m[i1][j1] << " ";
		}
		cout << endl;
	}
	return os;
}