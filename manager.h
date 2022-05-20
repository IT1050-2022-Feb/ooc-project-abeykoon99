#pragma once
#include "Report.h"
#define SIZE 5
class manager
{
	private:
		int managerID;
		char managerName[50];
		Report* rep[SIZE];
		int noOfReport;
	public:
		manager();
		manager(int ID, char name[]);
		void getDetails(int pid, char pname[]);
		void addReport(Report* R);
		void updateInformation();
};

