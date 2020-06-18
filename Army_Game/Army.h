#pragma once
#include "libs.h"
class Army;

class Unit
{
private:
	double hp;
	int dmg;
	int dodge;
public:
	static int team;
	static int x_;
	static int y_;
	Unit();

	void SetDate(double hp, int dmg, int dodge);

	int GetHp();

	int* GetDate();

	void Attack_(Army* ar, int num);

	double Def(double ur, double p);

	void ToDie(Army * a,int ur, int num,int ran);

	friend class Swordsman;
	friend class Archer;
	friend class Mag;

};

class Swordsman : public Unit
{
private:

public:
	Swordsman();

	void GetSword();

	friend class Unit;
	friend class Army;
};

class Archer : public Unit
{
private:

public:
	Archer();

	void GetArcher();
	friend class Unit;
	friend class Army;
};

class Mag : public Unit
{
private:

public:
	Mag();

	void GetMagier();

	friend class Unit;
	friend class Army;
};

class Army
{
private:
	Swordsman** sm = new Swordsman * [3];
	Archer** ar = new Archer * [3];
	Mag** m = new Mag * [3];
	int size_s = 0;
	int size_a = 0;
	int size_m = 0;

	enum { SWORDSMAN = 1, ARCHER, MAG };
public:
	int counter = 0;
	Army();

	void GetArmy();

	Swordsman** GetSw();

	Archer** GetAr();

	Mag** GetM();

	int GetSize_S();

	int GetSize_A();

	int GetSize_M();

	~Army();



	friend class Unit;

};