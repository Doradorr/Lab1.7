#include <iostream>

static int sA = 12;
static int = sB;

int main()
{
	sB = 10;
	{
		int nA = 5;
		static int sExample = 3;
		nA = sA * sB;
	}

	sA += 10;
	sB++;
	{
		int nB = 4;
		{
			nB = 2;
			int nC = 7;
		}
	}
    
	float fltk = 20;
	int nL = 0;
	for (int i = 0; i < 5; i++)
	{
		static int nF = 0;
		nF++;
		int nS = 0;
		nS++;
		nL++;
	}

	for (int i = 0; i < 5; i = i + 1)
	{
		static int iA = 0;
		int iB = 0;
		iA = iA + 1;
		iB = iB + 1;
	}

	int* pI;
	pI = new int;
	*pI = 25;
	delete pI;

	int* pW;
	pW = new int;
	pW = pI;
	*pW = 25;
	delete pW;
}