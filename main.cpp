#include<iostream>
#include<vector>
#include "Mvector.h"
using namespace std;

/*
template<typename T>
class Mvector
{
public:
	Mvector()
	{
		_arr = NULL;
		_len = 0;
		_size = 0;
	}
	Mvector(const Mvector& src)
	{
		T *s = new T[src._size];
		for (int i = 0; i < src._len; i++)
		{
			s[i] = src._arr[i];
		}
		_arr = s;
		_len = src._len;
		_size = src._size;

	}

	Mvector& operator=(const Mvector& src)
	{
		if (this == &src)
		{
			return *this;
		}
		if (_arr != NULL)
		{
			delete[]_arr;
		}
		T *s = new T[src._size];
		for (int i = 0; i < src._len; i++)
		{
			s[i] = src._arr[i];
		}
		_arr = s;
		_len = src._len;
		_size = src._size;
	}
	~Mvector()
	{
		if (_arr != NULL)
		{
			delete[]_arr;
		}
		_arr = NULL;
		_len = 0;
		_size = 0;
	}

	T operator[](int x)
	{
		if (x >= _len)
		{
			return NULL;
		}
		return _arr[x];
	}

	int size()
	{
		return _len;
	}

	void reserve(int x)
	{
		if (x < _size)
		{
			return;
		}
		T *s = new T[x];
		for (int i = 0; i < _len; i++)
		{
			s[i] = _arr[i];
		}
		if (NULL != _arr)
		{
			delete[]_arr;
		}

		_arr = s;
		_size = x;
	}

	void resize(int x)
	{
		T *tmp = new T[x];
		if (x <= _len)
		{
			for (int i = 0; i < x; i++)
			{
				tmp[i] = _arr[i];
			}
		}
		else
		{
			for (int i = 0; i < _len; i++)
			{
				tmp[i] = _arr[i];
			}
		}
		delete[]_arr;
		_arr = tmp;
		_len = x;
		_size = x;
	}

	T front()
	{
		if (!empty())
		{
			return _arr[0];
		}
		throw "error";
	}

	T back()
	{
		if (!empty())
		{
			return _arr[_len - 1];
		}
		throw "error";
	}

	void clear()
	{
		_len = 0;
		_size = 0;
	}

	iterator insert(iterator it, const T& val)
	{
		if (full())
		{
			expand();
		}
		for (int i = it._pos; i <= _len; i++)
		{
			T tmp = _arr[i];
			_arr[i] = val;
			val = tmp;
		}
		_len++;
		return it;

	}

	iterator erase(iterator it)
	{
		if (empty())
		{
			throw "error";
		}
		for (int i = it._pos; i < _len; i++)
		{
			_arr[i] = _arr[i+1];
		}
		_len--;
		return it;
	}


	bool empty()
	{
		return _len == 0;
	}
	void push_back(T val)
	{
		if (full())
		{
			expand();
		}
		_arr[_len++] = val;
	}
	void pop_back()
	{
		if (!empty())
		{
			_len--;
		}

	}
	void show()
	{
		for (int i = 0; i < _len; i++)
		{
			cout << _arr[i] << "  ";
		}
		cout << endl;
	}

private:
	void expand()
	{
		T *s;
		if (_size == 0)
		{
			s = new T[2];
			_size = 2;
		}
		else
		{
			s = new T[_size += _size >> 1];
			for (int i = 0; i < _len; i++)
			{
				s[i] = _arr[i];
			}
		}
		delete[]_arr;
		_arr = s;
	}

	bool full()
	{
		return _len == _size;
	}

	T *_arr;
	int _len;
	int _size;
};

*/

int main()
{
	Mvector<int> Mv;
	for (int i = 0; i < 10; i++)
	{
		Mv.push_back(i);
	}
	Mvector<int>::reverse_iterator it = Mv.rbegin();
	for (it; it != Mv.rend(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//Mv.show();
	//cout << Mv.back() << endl;
	//cout << Mv.front() << endl;
	////Mv.clear();
	////Mv.show();
	//cout << Mv.size() << endl;
	//cout << Mv[3] << end/l;
	//Mvector<int> Mv1 = Mv;
	//Mv1.show();
	//Mvector<int> Mv2;
	//Mv2 = Mv;
	//Mv2.show();

}