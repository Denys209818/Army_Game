#include "libs.h"
Unit::Unit()
{
	
}

void Unit::SetDate(double hp, int dmg, int dodge)
{
	this->hp = hp;
	this->dmg = dmg;
	this->dodge = dodge;
}

int* Unit::GetDate()
{
	int* arr = new int[3];
	arr[0] = this->hp;
	arr[1] = this->dmg;
	arr[2] = this->dodge;
	return arr;
}

int Unit::GetHp()
{
	return this->hp;
}

void Unit::Attack_(Army* a, int num)
{
	Swordsman** sw = a->GetSw();
	Archer** ar = a->GetAr();
	Mag** m = a->GetM();
	int r = (rand() % 3) + 1;

	bool ch = true;
	int ran;
	int ur;
	int dod;
	if (num == 1)
	{
		ur = 5;
	}
	else if (num == 2) 
	{
		ur = 4;
	}
	else if (num == 3) 
	{
		ur = 10;
	}
	int def;
	while (ch)
	{
		if (r == 1)
		{
			if (a->GetSize_S() != 0) 
			{
				ran = rand() % a->GetSize_S();
				if (sw[ran]->hp > 0) 
				{
				sw[ran]->ToDie(a,ur,1,ran);
				ch = false;
				}
				else 
				{
					r++;
				}
			}
			else 
			{
				r++;
			}
		}

		if (r == 2)
		{
			if (a->GetSize_A() != 0)
			{
				ran = rand() % a->GetSize_A();
				if (ar[ran]->hp > 0) 
				{
				ar[ran]->ToDie(a,ur, 2,ran);
				ch = false;
				}
				else 
				{
					r++;
				}
			}
			else
			{
				r++;
			}
		}

		if (r == 3)
		{
			if (a->GetSize_M() != 0)
			{
				ran = rand() % a->GetSize_M();
				if (m[ran]->hp > 0) 
				{
				m[ran]->ToDie(a, ur, 3, ran);
				ch = false;
				}
				else 
				{
					r -= 2;
				}
			}
			else
			{
				r-=2;
			}
		}

	}
}

double Unit::Def(double ur, double p)
{
	this->hp -= (ur * p)/100;
	return this->hp;
}

void Unit::ToDie(Army * a,int ur, int num,int ran)
{
	int p;
	if (num == 1) 
    {
		p = 40;
	}
	else if (num == 2) 
	{
		p = 60;
	}
	else if (num == 3) 
	{
		p = 70;
	}
	int def;
	def = rand() % 2;
	def ? this->Def(ur, p) : this->hp -= ur;
	if (this->hp <= 0) 
	{
		a->counter++;
	}
}