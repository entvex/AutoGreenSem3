#pragma once

#include "Indstillinger.hpp"

void testGettime()
{
	Indstillinger indstillinger;

	cout << "The date is" << endl;
	Date timeNow = indstillinger.getDate();
	cout << timeNow.Year << " " << timeNow.Month << " " << timeNow.Day << " " << timeNow.Hour << ":" << timeNow.Min << endl;
}

void testSettime()
{
	Indstillinger indstillinger;

	cout << "The date is" << endl;

	Date time;

	time.Year = 2010;
	time.Month = 6;
	time.Day = 6;
	time.Hour = 6;
	time.Min = 6;
	indstillinger.setDate(time);
	cout << time.Year << " " << time.Month << " " << time.Day << " " << time.Hour << ":" << time.Min << endl;
}

void testSettimeAndGettime()
{
	testGettime();
	testSettime();
	testGettime();
}

void testGethardware()
{

	Indstillinger indstillinger;
	cout << "Hardware bliver sat til true" << endl;

	bool bl�ser = true;
	bool Varme = true;

	indstillinger.GetHardware(bl�ser, Varme);

	cout << "Henter hardware bools" << endl;
	cout << "Bl�ser: " << bl�ser << " Varme: " << Varme << endl;

}