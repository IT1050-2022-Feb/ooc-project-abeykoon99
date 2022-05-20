#pragma once
#include "manager.h"

class Report
{
	private:
		int ReportID;
		manager* mag;
	public:
		Report();
		Report(int id, manager* pmag);
		void generateReport();
};

