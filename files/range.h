inline int range(int min, int max, int input)
{
	if (input < min)
		return min;

	if (input > max)
		return max;

	return input;
}
