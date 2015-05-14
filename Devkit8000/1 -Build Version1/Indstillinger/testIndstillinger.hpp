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

	bool bloeser = true;
	bool Varme = true;

	indstillinger.SetHardware(bloeser, Varme);
	indstillinger.GetHardware(bloeser, Varme);

	cout << "Henter hardware bools" << endl;
	cout << "Bloeser: " << bloeser << " Varme: " << Varme << endl;
}

void testGetSetPlant()
{

    Plant standardPlante;
    standardPlante.hum = 5;
    standardPlante.light = 5;
    standardPlante.name = "Tomat";
    standardPlante.temp = 16;
    standardPlante.water = 5;

    Indstillinger indstillinger;
    //Setup af virtualle planter
    cout << "Soetter plant1" << endl;
    indstillinger.SetVirtualPlant(1,standardPlante);
    cout << "Henter plante 1" << endl;
    Plant testplant = indstillinger.Getplant(1);
    cout << " temp for plant 1 er:" << testplant.temp << endl;
}
