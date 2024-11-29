package MODEL;
public class PartTimeEmployee extends Employee {
    private int hoursWorkedPerWeek;

    public PartTimeEmployee(int id, String name, String email, String phoneNumber, String address, double hourlyRate, int hoursWorkedPerWeek) {
        super(id, name, email, phoneNumber, address, hourlyRate * hoursWorkedPerWeek * 4, "Part-Time Employee");
        this.hoursWorkedPerWeek = hoursWorkedPerWeek;
    }

    public int getHoursWorkedPerWeek() {
        return hoursWorkedPerWeek;
    }

    public void setHoursWorkedPerWeek(int hoursWorkedPerWeek) {
        this.hoursWorkedPerWeek = hoursWorkedPerWeek;
    }

    @Override
    public String getEmployeeType() {
        return null;
    }
}

