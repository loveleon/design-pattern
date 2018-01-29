#include "doctor.h"
#include "nurse.h"
#include "command.h"
#include <iostream>
using namespace std;

int main()
{
	/*
	//医生通过命令看病
	Doctor *doctor = new Doctor;
	CommandTreatEye *commandtreateye = new CommandTreatEye(doctor);
	CommandTreatNose *commandtreatnose = new CommandTreatNose(doctor);
	commandtreateye->treat();
	commandtreatnose->treat();
	delete commandtreatnose;
	delete commandtreateye;
	delete doctor;
	*/
	
	/*
	//护士收集病历，给医生看病
	Doctor *doctor = new Doctor;
	//Command *cmd = new CommandTreatEye(doctor);
	Command *cmd = new CommandTreatNose(doctor);
	BeautyNurse *nurse = new BeautyNurse(cmd);
	nurse->submitCmd();
	delete nurse;
	delete cmd;
	delete doctor;
	*/
	
	Doctor *doctor = new Doctor;
	Command *cmd1 = new CommandTreatEye(doctor);
	Command *cmd2 = new CommandTreatNose(doctor);
	HeadNurse *nurse = new HeadNurse;
	nurse->setCmd(cmd1);
	nurse->setCmd(cmd2);
	nurse->submitCmd();
	delete nurse;
	delete cmd2;
	delete cmd1;
	delete doctor;
	
	return 0;
}