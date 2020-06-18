#include "libs.h"


int Unit::team = 0;
int Unit::y_ = 0;
int Unit::x_ = 60;

void main() 
{
	srand(time(0));
	
	Army * a = new Army();
	Army * b = new Army();

	
	while (true)
	{
		if (a->counter == 3 || b->counter == 3)
		{
			break;
		}
		Unit::y_ = 0;
		
		Swordsman** sw = a->GetSw();
		Archer** ar = a->GetAr();
		Mag** m = a->GetM();
		int r = (rand() % 3) + 1;
		
		Unit::y_ = 0;
		a->GetArmy();
		b->GetArmy();
		_getch();
		system("cls");
		if (a->counter == 3 || b->counter == 3)
		{
			break;
		}

		bool ch = true;
		int ran = 0;
		int t_ = 0;
		while (ch)
		{
			t_ = 0;
			if (r == 1)
			{
				if (a->GetSize_S() != 0)
				{
					ran = (rand() % a->GetSize_S());
					if (sw[ran]->GetHp() > 0)
					{
						sw[ran]->Attack_(b, 1);
						ch = false;
						t_++;
					}
					else 
					{
						t_ = 0;
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
					ran = (rand() % a->GetSize_A());
					if (ar[ran]->GetHp() > 0) 
					{
					ar[ran]->Attack_(b, 2);
					ch = false;
					t_ = 0;
					}
					else 
					{
						t_++;
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
					ran = (rand() % a->GetSize_M());
					if (m[ran]->GetHp() > 0) 
					{
					m[ran]->Attack_(b, 3);
					ch = false;
					t_ = 0;
					}
					else 
					{
						t_++;
						r -= 2;
					}
				}
				else
				{
					r -= 2;
				}
			}

			if (t_ == 3) break;
		}
		if (a->counter == 3 || b->counter == 3)
		{
			break;
		}
		Unit::y_ = 0;
		a->GetArmy();
		b->GetArmy();
		_getch();
		system("cls");
		if (a->counter == 3 || b->counter == 3)
		{
			break;
		}

		Swordsman** sw_ = b->GetSw();
		Archer** ar_ = b->GetAr();
		Mag** m_ = b->GetM();
		int r_ = (rand() % 3) + 1;

		bool ch_ = true;
		int ran_ = 0;
		int t = 0;
		while (ch_)
		{
			t = 0;
			if (r_ == 1)
			{
				if (b->GetSize_S() != 0)
				{
					ran_ = (rand() % b->GetSize_S());
					if (sw_[ran_]->GetHp() > 0) 
					{
					sw_[ran_]->Attack_(a, 1);
					ch_ = false;
					t = 0;
					}
					else 
					{
						t++;
						r_++;
					}
				}
				else
				{
					r_++;
				}
			}

			if (r_ == 2)
			{
				if (b->GetSize_A() != 0)
				{
					ran_ = (rand() % b->GetSize_A());
					if (ar_[ran_]->GetHp() > 0) 
					{
					ar_[ran_]->Attack_(a, 2);
					ch_ = false;
					t = 0;
					}
					else 
					{
						t++;
						r_++;
					}
				}
				else
				{
					r_++;
				}
			}

			if (r_ == 3)
			{
				if (b->GetSize_M() != 0)
				{
					ran_ = (rand() % b->GetSize_M());
					if (m_[ran_]->GetHp() > 0) 
					{
					m_[ran_]->Attack_(a, 3);
					ch_ = false;
					t = 0;
					}
					else 
					{
						t++;
						r_ -= 2;
					}
				}
				else
				{
					r_ -= 2;
				}
			}

			if (t == 3) break;

		}
		if (a->counter == 3 || b->counter == 3)
		{
			break;
		}
	}
	
	system("cls");
	if (a->counter == 3) 
	{
		cout << "Right Army Winner!" << endl;
	}
	else if (b->counter == 3) 
	{
		cout << "Left Army Winner!" << endl;
	}
	_getch();

	

	delete a;
	delete b;
	
	
	

	

	
	
	


}