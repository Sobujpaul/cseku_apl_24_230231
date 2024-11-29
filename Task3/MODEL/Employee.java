package MODEL;
public abstract class Employee {
    private int id;
    private double salary;
    private String name,email,phoneNumber,address,title;
    public Employee(int id, String name, String email, String phoneNumber, String address, double salary, String title) {
    }    // constructor



    // setter and getter
    public void setId(int id) {
    }

    public void setSalary(double salary) {
    }

    public void setName(String name) {
    }

    public void setEmail(String email) {
    }

    public void setPhoneNumber(String phoneNumber) {
    }

    public void setAddress(String address) {
    }

    public void setTitle(String title) {
    }

    public int getId() {
        return id;
    }
    public String getName() {
        return name;
    }

    public String getEmail() {
        return email;
    }

    public String getPhoneNumber() {
        return phoneNumber;
    }
    public String getAddress() {
        return address;
    }

    public double getSalary() {
        return salary;
    }

    public String getTitle() {
        return title;
    }

    public abstract String getEmployeeType();
}
