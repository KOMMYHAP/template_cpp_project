#pragma once

namespace my
{
	template <class T>
	T sum(T && a, T && b) { return a + b; }

	template <class T>
	T sub(T && a, T && b) { return a - b; }
}
