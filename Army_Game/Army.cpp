#include "libs.h"
//Візуалізація
Army::Army()
{
	int a;
	for (int i = 0; i < 3; i++)
	{

		a = (rand() % 3) + 1;


		switch (a)
		{
		case SWORDSMAN:
		{
			sm[this->size_s] = new Swordsman();
			this->size_s++;
			break;
		}
		case ARCHER:
		{
			ar[this->size_a] = new Archer();
			this->size_a++;
			break;
		}
		case MAG:
		{
			m[this->size_m] = new Mag();
			this->size_m++;
			break;
		}
		}

	}
}

void Army::GetArmy()
{
	Unit::team++;
	
	//
	for (int i = 0; i < size_s; i++)
	{
		sm[i]->GetSword();
	}
	//
	for (int i = 0; i < size_a; i++)
	{
		ar[i]->GetArcher();
	}
	//
	for (int i = 0; i < size_m; i++)
	{
		m[i]->GetMagier();
	}
}

//Повернення персонажів
Swordsman** Army::GetSw()
{
	return sm;
}

Archer** Army::GetAr()
{
	return ar;
}

Mag** Army::GetM()
{
	return m;
}

//Повернення розмірів масиву
int Army::GetSize_S()
{
	return size_s;
}

int Army::GetSize_A()
{
	return size_a;
}

int Army::GetSize_M()
{
	return size_m;
}

Army::~Army()
{
	for (int i = 0; i < this->size_s; i++) 
	{
		delete[] this->sm[i];
	}
	delete[] this->sm;

	for (int i = 0; i < this->size_a; i++)
	{
		delete[] this->ar[i];
	}
	delete[] this->ar;

	for (int i = 0; i < this->size_m; i++)
	{
		delete[] this->m[i];
	}
	delete[] this->m;
}