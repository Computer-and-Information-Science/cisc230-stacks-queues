#pragma once

#include <cstdlib>

template <typename T>
class queue {
public:
	queue () { }
	T& back () { }
	bool empty () { }
	T& front () { }
	void pop () { }
	void push (const T& val) { }
	size_t size () { }
};
