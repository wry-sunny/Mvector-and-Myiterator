#ifndef MINSERT_ITERATOR
#define MINSERT_ITERATOR

template<typename Contain>
class Minsert_iterator
{
private:
	Contain* _c;
	typename Contain::iterator _it;

public:
	
	Minsert_iterator(Contain& c, typename Contain::iterator it)
	{
		_c = &c;
		_it = it;
	}

	// ++ *  =

	Minsert_iterator& operator=(typename Contain::value_type val)
	{
		_it = _c->insert(_it, val);
		_it++;
		return *this;
	}

	Minsert_iterator& operator*()
	{
		return *this;
	}

	Minsert_iterator& operator++()
	{
		return &= *this;
	}

	Minsert_iterator& operator++(int)
	{
		return *this;
	}
};

#endif