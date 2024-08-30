//Constructor
// <access modifier> <name> (<parameters>){
//     //body
// }



class Customer {

    public String customerId;
    public String customerName;
    public long contactNumber;
    public String address;

    //parameter less constructor
	public Customer() {
		System.out.println("Constructor called");
	}
    public void displayCustomerDetails() {
        System.out.println("Displaying customer details \n***************************");
        System.out.println("Customer Id : " + customerId);
        System.out.println("Customer Name : " + customerName);
        System.out.println("Contact Number : " + contactNumber);
        System.out.println("Address : " + address);
        System.out.println();
    }

    public void payBill(double totalPrice, double discountPercentage) {
        System.out.println("Calculating final amount to be paid......");
        double priceAfterDiscount = totalPrice * (1 - (discountPercentage / 100));
        System.out.println("Hi " + customerName
                + ", your final bill amount after discount is: "
                + (int) (priceAfterDiscount * 100) / 100.0);
    }

}

class Tustomer {
	public String customerId;
	public String customerName;
	public long contactNumber;
	public String address;

    //parameterized constructor
	Tustomer() {
		System.out.println("Inside parameterless constructor");
	}

    //parameterized constructor
	Tustomer(String cId, String cName, long contact, String add) {
		customerId = cId;
		customerName = cName;
		contactNumber = contact;
		address = add;
	}
    //parameterized constructor
	Tustomer(String cName) {
		customerName = cName;
	}

    //here the local variable passed is same as instance var so use this keyword
    Tustomer(String customerName, long contactNumber) {
        // this() is used to invoke the constructor of the current class
		// Since no parameters are specified, parameterless constructor will be invoked
		this();
        this.customerName = customerName;
        this.contactNumber = contactNumber;
    }
}

public class j02 {
    public static void main(String[] args) {

        // Object creation
        Customer customer = new Customer();

        // Assigning values to the instance variables
        customer.customerId = "C101";
        customer.customerName = "Stephen Abram";
        customer.contactNumber = 7856341287L;
        customer.address = "D089, St. Louis Street, Springfield, 62729";

        // Displaying the customer details
        customer.displayCustomerDetails();
        // Move the above statement immediately after the object creation
        // statement and observe the output
        customer.payBill(800, 5);


        Tustomer customer1 = new Tustomer("C103", "Jacob", 5648394590L,
        "13th Street, New York");
        System.out.println(customer1.customerId);
        System.out.println(customer1.customerName);

        Tustomer customer2 = new Tustomer( "Jacob");
        System.out.println(customer2.customerName);

        Tustomer customer3 = new Tustomer( "Jacob",785757755);
        System.out.println(customer3.contactNumber);

        customer3=null;//the object that was referenced by this reference variable became elligible for garbage collection and memory dellocated
        customer2=new Tustomer( "JacobMenon");//the same ref var assiged new obj other lost obj elligible for garbage collection

    }
    
    
}


//ENCAPSULATION===========================================
// Observe and execute the below code. We have declared the variables as private and 
// trying to access the private variables outside the class. This code will throw errors. 
// class Customer {

// 	private String customerId;
// 	private String customerName;
// 	private long contactNumber;
// 	private String address;
// }

// class Tester {

// 	public static void main(String args[]) {
// 		Customer customer = new Customer();
// 		customer.customerId = "C101";
// 		customer.customerName = "Jack";
// 		customer.contactNumber = 9870345687L;
// 		customer.address = "D089, St. Louis Street, Springfield";

// 		System.out.println("Displaying customer details");
// 		System.out.println("Customer Id : " + customer.customerId);
// 		System.out.println("Customer Name : " + customer.customerName);
// 		System.out.println("Contact Number : " + customer.contactNumber);
// 		System.out.println("Address : " + customer.address);
// 	}
// }

