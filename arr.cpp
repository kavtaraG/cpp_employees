#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

const int NUMBER_OF_PERSON = 1;

struct employee
{
	std::string ID;
	std::string firstname;
	std::string lastname;
	std::string deptID;
	int day;
	int mounth;
	int year;
	int hiteDate;
	int quitDate;
	double salary;
};

employee newEmployee[NUMBER_OF_PERSON];

void employeeIn(std::ofstream& indata, employee list[], int listSize);
void employeeOut(std::ifstream& outdata, employee list2[], int listSize);

int main()
{
	std::ofstream dataIn;
	std::ifstream dataOut;
	employee array[NUMBER_OF_PERSON];
	employee array2[NUMBER_OF_PERSON];
	employeeIn(dataIn, array, 1);
	employeeOut(dataOut, array2, 1);
	return 0;
};

void employeeIn(std::ofstream& indata, employee list[], int listSize){

	for(int i = 0; i < listSize; i++){
		std::cout << "ID field: " << std::endl;
		std::cout << "ID: " << "\n";
		getline(std::cin, list[NUMBER_OF_PERSON].ID);
		std::cout << std::endl;

		std::cout << "Name field: " << std::endl;
		std::cout << "Ener fist name: ";
		getline(std::cin, list[NUMBER_OF_PERSON].firstname);
		std::cout << "\n";
		std::cout << "Enter last name: "; 
		getline(std::cin, list[NUMBER_OF_PERSON].lastname);
		std::cout << "\n";

		std::cout << "Department field: " << std::endl;
		std::cout << "Enter department: ";
		getline(std::cin, list[NUMBER_OF_PERSON].deptID);
		std::cout << "\n";

		std::cout << "Birthday field: " << std::endl;
		std::cout << "Enter day: ";
		std::cin >> list[NUMBER_OF_PERSON].day;
		std::cout << "\n";
		std::cout << "Enter mounth: ";
		std::cin >> list[NUMBER_OF_PERSON].mounth;
		std::cout << "\n";
		std::cout << "Enter year: ";
		std::cin >> list[NUMBER_OF_PERSON].year;
		std::cout << std::endl;

		std::cout << "Hire date: " << std::endl;
		std::cout << "Enter day: ";
		std::cin >> list[NUMBER_OF_PERSON].day;
		std::cout << "\n";
		std::cout << "Enter mounth: ";
		std::cin >> list[NUMBER_OF_PERSON].mounth;
		std::cout << "\n";
		std::cout << "Enter year: ";
		std::cin >> list[NUMBER_OF_PERSON].year;
		std::cout << std::endl;

		std::cout << "Quit date field: " << std::endl;
		std::cout << "Enter day: ";
		std::cin >> list[NUMBER_OF_PERSON].day;
		std::cout << "\n";
		std::cout << "Enter mounth: ";
		std::cin >> list[NUMBER_OF_PERSON].mounth;
		std::cout << "\n";
		std::cout << "Enter year: ";
		std::cin >> list[NUMBER_OF_PERSON].year;
		std::cout << std::endl;

		std::cout << "Salary field: " << std::endl;
		std::cout << "Enter salary: ";
		std::cin >> list[NUMBER_OF_PERSON].salary;
		std::cout << std::endl;
	}

	

	

	std::ofstream inText("./employee.txt");
	inText << list[NUMBER_OF_PERSON].ID;
	inText << list[NUMBER_OF_PERSON].firstname;
	inText << list[NUMBER_OF_PERSON].lastname;
	inText << list[NUMBER_OF_PERSON].deptID;

	inText << list[NUMBER_OF_PERSON].day;
	inText << list[NUMBER_OF_PERSON].mounth;
	inText << list[NUMBER_OF_PERSON].year;

	inText << list[NUMBER_OF_PERSON].day;
	inText << list[NUMBER_OF_PERSON].mounth;
	inText << list[NUMBER_OF_PERSON].year;

	inText << list[NUMBER_OF_PERSON].day;
	inText << list[NUMBER_OF_PERSON].mounth;
	inText << list[NUMBER_OF_PERSON].year;

	inText << list[NUMBER_OF_PERSON].salary;

	inText.close();
	
	return;
};

void employeeOut(std::ifstream& outdata, employee list2[], int listSize){

	std::ifstream outText("./employee.txt");

	for(int i = 0; i < listSize; i++){
		std::cout << "Table: " << std::endl;

		for(int j = 0; j <= 1; j++){
			outdata >> list2[NUMBER_OF_PERSON].ID;
			outdata >> list2[NUMBER_OF_PERSON].firstname;
			outdata >> list2[NUMBER_OF_PERSON].lastname;
			outdata >> list2[NUMBER_OF_PERSON].deptID;

			outdata >> list2[NUMBER_OF_PERSON].day;
			outdata >> list2[NUMBER_OF_PERSON].mounth;
			outdata >> list2[NUMBER_OF_PERSON].year;

			outdata >> list2[NUMBER_OF_PERSON].day;
			outdata >> list2[NUMBER_OF_PERSON].mounth;
			outdata >> list2[NUMBER_OF_PERSON].year;

			outdata >> list2[NUMBER_OF_PERSON].day;
			outdata >> list2[NUMBER_OF_PERSON].mounth;
			outdata >> list2[NUMBER_OF_PERSON].year;
		};
	};
	
	outText.close();
	return;
}