#ifndef COMMAND_H_
#define COMMAND_H_
#include "doctor.h"

class Command
{
	public:
		virtual void treat() = 0;
};

class CommandTreatEye: public Command
{
	public:
		CommandTreatEye(Doctor *doctor);
		void treat();
		
	private:
		Doctor *m_doctor;
};

class CommandTreatNose: public Command
{
	public:
		CommandTreatNose(Doctor *doctor);
		void treat();
		
	private:
		Doctor *m_doctor;
};

#endif