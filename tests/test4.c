int factorial(int input,int *answer)
{
	if ( input ==0 )        
	{                       
		return 0;
	}

	*answer  = *answer * input;
	factorial(input -1, answer);   // nema return u ne void funkciji
}
