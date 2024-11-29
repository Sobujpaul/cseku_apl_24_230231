package MAIN;

import CONTROLLER.EmployeeController;
import MODEL.EmployeeManager;
import MODEL.EmployeeService;
import VIEW.EmployeeDetailsView;

// Main.java
public class Main {
    public static void main(String[] args) {

        EmployeeManager model = new EmployeeManager();
        EmployeeDetailsView view = new EmployeeDetailsView();
        EmployeeService service =new EmployeeService();
        EmployeeController controller = new EmployeeController(model, view,service);

    }
}
