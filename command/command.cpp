#include "command.h"
#include <iostream>
using namespace std;

CommandTreatEye::CommandTreatEye(Doctor *doctor)
{
	m_doctor = doctor;
}

void CommandTreatEye::treat()
{
	m_doctor->treatEye();
}

CommandTreatNose::CommandTreatNose(Doctor *doctor)
{
	m_doctor = doctor;
}

void CommandTreatNose::treat()
{
	m_doctor->treatNose();
}