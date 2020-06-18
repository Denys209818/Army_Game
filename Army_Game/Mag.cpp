#include "libs.h"


Mag::Mag()
{
	this->SetDate(8, 10, 30);
}

void Mag::GetMagier()
{
	if (this->hp > 0) 
	{
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << " *" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << " \\\\" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "  \\\\" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "   \\\\" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "    \\\\" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "     \\\\" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << " | hp - " << this->hp << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << " | dmg - " << this->dmg << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << " | dodge - " << this->dodge << endl;
	cout << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	}
}