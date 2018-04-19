#pragma once
#include <string>
using namespace std;


class House
{
private:
	int reg_no;

	class Address {
		string street;
		int  flatNumber ;

	public:
		Address() 
		{
			street = "";
			flatNumber = 0;
		}
		Address(string street, int flatNumber)
		{
			this->street = street;
			this->flatNumber = flatNumber;
		}
		
		string getStreet() { return street; }
		int getFlatNumber() { return flatNumber; }

		void setStreet(string street )
		{
			this->street = street;
		}
		void setFlatNumber(int flatN)
		{
			this->flatNumber = flatN;
		}
		void setStreetAndFlatNumber(string st, int flatN)
		{
			this->street = st;
			this->flatNumber = flatN;
		}

	}house_addr;

	int floor;
	int roomNumber;
	double area;

public:
	House():house_addr()
	{
		reg_no = 0;
		floor = 0;
		roomNumber = 0;
		area = 0.0;
	}
	House(int rn, string st, int flatN, int floor, int roomNumber, double area) : house_addr(st, flatN)
	{
		this->reg_no = rn;
		this->floor = floor;
		this->roomNumber = roomNumber;
		this->area = area;
	}

	int getReg_no() { return reg_no; }
	int getFloor() { return floor; }
	int getRoomNumber() { return roomNumber; }
	double getArea() { return area; }


	void setReg_no(int regNum)
	{
		this->reg_no = regNum;
	}
	void setFloor(int fl)
	{
		this->floor = fl;
}
	void setRoomNumber(int roomNum)
	{
		this->roomNumber = roomNum;
	}
	void setArea(double area)
	{
		this->area = area;
}
};