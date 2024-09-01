class Employee {
	Employee() {
		System.out.println("Employee constructor invoked");
	}
}

class Manager extends Employee {
	Manager() {
		System.out.println("Manager constructor invoked");
	}
}


class Customer {

	private String customerId;
	private String customerName;

	public Customer(String customerId, String customerName) {
		this.customerId = customerId;
		this.customerName = customerName;
	}

	public Customer() {
		System.out.println("Parent parameterless constructor");
	}

	public String getCustomerId() {
		return customerId;
	}

	public void setCustomerId(String customerId) {
		this.customerId = customerId;
	}

	public String getCustomerName() {
		return customerName;
	}

	public void setCustomerName(String customerName) {
		this.customerName = customerName;
	}

	public void displayCustomerDetails() {
		System.out.println("Displaying customer details \n***************************");
		System.out.println("Customer Id : " + this.customerId);
		System.out.println("Customer Name : " + this.customerName);
		System.out.println();
	}

}

class RegularCustomer extends Customer {

	private float discount;

	public RegularCustomer(String custId, String custName) {

		this.setCustomerId(custId);
		this.setCustomerName(custName);
		this.discount = 5.0f;
		System.out.println("Child parameterized constructor");
	}

    public RegularCustomer(String custId, String custName,float discount) {
		super(custId, custName); // Invoking the parent class parameterized constructor
		this.discount = discount;
	}

	public float getDiscount() {
		return discount;
	}

	public void setDiscount(float discount) {
		this.discount = discount;
	}

}
class j07inheritance {
	public static void main(String[] args) {
		Manager manager = new Manager();

        RegularCustomer regularCustomer = new RegularCustomer("C1010", "Johns Kora");
		regularCustomer.displayCustomerDetails();
	}
}
