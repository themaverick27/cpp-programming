#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<string>

using namespace std;

struct Employee {
    int employeeID;
    string employeeName;
    double salary;
};

void displayEmployee(const Employee& emp){
    cout << "ID: " << emp.employeeID << " name: " << emp.employeeName << " , Salary: $" << emp.salary << endl;
}


int main(){
    vector<Employee> employees = {
        {101, "Mike", 100000},
        {102, "Tom", 105000},
        {103, "Shree", 150000},
        {104, "Aniwesh", 120000},
        {105, "Jerry", 200000},
    };

    sort(begin(employees), end(employees), [](const Employee& e1, const Employee& e2){
        return e1.salary > e2.salary;
    });

    cout << "Employees sorted by salaraies (Highest to Lowest): " << endl; 
    for_each(employees.begin(), employees.end(), displayEmployee);

    vector<Employee> highEarners;

    copy_if(
        employees.begin(), 
        employees.end(), 
        back_inserter(highEarners), 
        [](const Employee& e){
        return e.salary > 1200000;
    });

    cout << "Employees who are high earners: " << endl; 
    for_each(highEarners.begin(), highEarners.end(), displayEmployee);

    double totalSalary = accumulate(
        employees.begin(), 
        employees.end(), 
        0.0, 
        [](double sum, const Employee& e){
        return sum + e.salary;
    });

    double averageSalary = totalSalary / employees.size();

    auto highestPaid = max_element(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary > e2.salary;
    });

    auto lowestPaid = min_element(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary < e2.salary;
    });

    return 0;
}