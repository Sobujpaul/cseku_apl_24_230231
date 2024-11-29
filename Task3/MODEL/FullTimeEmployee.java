package MODEL;

public class FullTimeEmployee extends Employee {
    public FullTimeEmployee(int id, String name, String email, String phoneNumber, String address, double salary, String title) {
        super(id, name, email, phoneNumber, address, salary, title);
    }

    @Override
    public String getEmployeeType() {
       return null;
    }
}