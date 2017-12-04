//============================================================================
// Name        : Portfolio.cpp
// Author      : tfyt
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}

class Sensor{
	public:
		string name;
		int ID;
		string Type;
		int value;

	void setType();
	void sendReading();
	void requestReading();
};


class Temperature: public Sensor
	{
		string type = "Temp";
		void sendReading();
	};


class Humidity: public Sensor
	{
		string type = "Humidity";
		void sendReading();
};


class SensorMgr
	{
	public:
	string Type;
	int value;

	void sendReading();
	void requestReading();
	void updateDataQueue();
	};


class System
	{
	public:
	string type;
	int value;

	void initialise();
	void requestReading();
	//***calc to check count = 10***
	void queueFull();
	void clearSystem();
	};


class DataQueue
	{
	public:
	const int sensorData[];

	void count();
	void writeToTerminal();
	void clearDataQueue();
	};


class Display
	{
	public:
	void clear();
	void display();
	};

