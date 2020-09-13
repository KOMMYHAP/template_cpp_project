#include "mymath.h"

int main()
{
	using namespace my;
	if (sub(42, 42) != 0) return 1;
	if (sub(0, 42) != -42) return 1;
	if (sub(0, -42) != 42) return 1;
	if (sub(42, 0) != 42) return 1;
	if (sub(-42, 0) != -42) return 1;
	// other checks...
}
