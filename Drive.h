#ifndef DRIVE_H__INCLUDED // checks to see if DRIVE_H__INCLUDED has been defined
#define DRIVE_H__INCLUDED // define DRIVE_H__INCLUDED is it has not already been defined


#include "WPILib.h" // include the WPILib library
#include "Config.h" // include the Config.h header file

// define class Drive
class Drive{
// variables accessible from anywhere
public:
	Drive(void);
	~Drive(void);
	// SetMotors function
	void SetMotors(float, float, float, float, bool);
// variables only accessible from other members of the same class	
private:
	Talon *FrontLeft, *FrontRight, *BackLeft, *BackRight;
};


#endif /* DRIVE_H__INCLUDED */
