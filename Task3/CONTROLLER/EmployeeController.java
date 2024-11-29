package CONTROLLER;
import MODEL.Employee;
import MODEL.EmployeeManager;
import MODEL.EmployeeService;
import VIEW.EmployeeDetailsView;

public class EmployeeController {
    private EmployeeManager model;
    private EmployeeDetailsView view;
    private EmployeeService service;
    public EmployeeController(EmployeeManager model, EmployeeDetailsView view,EmployeeService service) {
    }

    // add a new Employee in database
    public void addEmployee(Employee employee) {
    }

    // show employee details
    public void displayEmployeeDetails(int employeeId) {
    }

  // delete a employee from database
    public void deleteEmployee(int employeeId) {
    }

    // promotion of an employee
    public void promoteEmployee(int employeeId, String newRole, double salaryIncrease) {
    }

    // update employee salary
    public void updateSalary(int employeeId, double newSalary) {
    }
}
