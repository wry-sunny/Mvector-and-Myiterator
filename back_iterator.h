#ifndef MBACK_ITERATOR
#define MBACK_ITERATOR

template<typename Contain>
class Mback_iterator
{
private:
	Contain* _c;
	typename Contain::iterator _it;

public:

	Mback_iterator(Contain& c, typename Contain::iterator it)
	{
		_c = &c;
		_it = it;
	}

	// ++ *  =

	Mback_iterator& operator=(typename Contain::value_type val)
	{
		_it = _c->push_back(val);
		_it++;
		return *this;
	}

	Mback_iterator& operator*()
	{
		return *this;
	}

	Mback_iterator& operator++()
	{
		return &= *this;
	}

	Mback_iterator& operator++(int)
	{
		return *this;
	}
};

#endif