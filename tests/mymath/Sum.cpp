#include "mymath.h"

int main()
{
	using namespace my;
	if (sum(0, 0) != 0) return 1;
	if (sum(1, 0) != 1) return 1;
	if (sum(0, 1) != 1) return 1;
	// other checks...
}
