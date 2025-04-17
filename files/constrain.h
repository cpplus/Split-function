int constrain(int min, int max, int input)
{
	if (input < min)
		return min;

	if (input > max)
		return max;

	return input;
}
