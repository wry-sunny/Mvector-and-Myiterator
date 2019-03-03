#ifndef Mreverse_iterator_H
#define Mreverse_iterator_H
#include<iostream>

using namespace std;

template<typename T>
class Mvector;


template<typename T>
class Mreverse_iterator
{
private:
	Mvector<T>* _vec;
	int _pos;

public:
	Mreverse_iterator(Mvector<T>* src, int pos)
	{
		_vec = src;
		_pos = pos;
	}

	Mreverse_iterator(const Mreverse_iterator* src)
	{
		_vec = src._vec;
		_pos = src._pos;
	}

	Mreverse_iterator& operator=(const Mreverse_iterator& src)
	{
		_vec = src._vec;
		_pos = src._pos;
	}

	bool operator==(const Mreverse_iterator& src)
	{
		return (_vec == src._vec && _pos == src._pos)
	}

	bool operator!=(const Mreverse_iterator& src)
	{
		return (_vec != src._vec || _pos != src._pos);
	}

	Mreverse_iterator& operator++()
	{
		--_pos;
		return *this;
	}

	Mreverse_iterator operator++(int)
	{
		return Mreverse_iterator(_vec, _pos--);
	}

	Mreverse_iterator& operator--()
	{
		++pos;
		return *this;
	}

	Mreverse_iterator operator--(int)
	{
		return Mreverse_iterator(_vec, _pos++);
	}

	T& operator*();

	T* operator->();//it.operator->()->
};

#endif