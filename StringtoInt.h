int StringToInt(char str[])
{
	int value, number = 0;
	int i;
	int len;
	for (len = 1;str[len];len++);
	for(i =0; i<len;i++)
	{
		value = str[i] - '0';
		number = value + number*10;
	}
	return number;
}
