/* CHALLENGE 115
Write a programme that declares a structure and prints out its content
empkoyee structure with 3 members
name (character array)
hireDate (int)
salary (float)

delcare and initialise an indstance of an employee type
read in a second employee from the console and store in a structure of type employee

print out the content of each employee
*/

#include <stdio.h>
#include <string.h>

int main(){

//define struct. you sohuld define it outside the main function
struct employee {
	char empName[20];//can be char pointer?
	int hireDate; //solution uses date array
	float empSalary;
};

struct employee employeeID1;
// employeeID1.empName[20] = "Adam Jones"; you cannot directly assign
strcpy(employeeID1.empName, "Adam Jones");
employeeID1.hireDate = 19951201;
employeeID1.empSalary = 5000.050; //floating point error
// can define ={"Mike,01/01/2015,5005.05"}

struct employee employeeID2;
printf("Input New Employee Name:");
scanf("%s",employeeID2.empName); //character array doesn't need address off
printf("Input New Employee Hire Date:");
scanf("%d",&employeeID2.hireDate); //not a pointer, still use address off
printf("Input New Employee Salary:");
scanf("%f",&employeeID2.empSalary);

printf("Name:%s Hire Date: %d Salary: %.2f \n",employeeID1.empName,employeeID1.hireDate,employeeID1.empSalary);
printf("Name:%s Hire Date: %d Salary: %.2f \ns",employeeID2.empName,employeeID2.hireDate,employeeID2.empSalary);

	return 0;
}