import java.util.Scanner;

public class j01 {
    public static void main(String[] args) {

        int discountPercentage = 10;
        double totalPrice = 800;
        double priceAfterDiscount = totalPrice * (1 - ((double) discountPercentage / 100));
        if (totalPrice > 500) {
            priceAfterDiscount = priceAfterDiscount * (1 - ((double) 5 / 100));
        }
        System.out.println("Customer has paid a bill of amount: "+ priceAfterDiscount);//684.0


        //Unary Operator
        int numOne = 10;
        int numTwo = 5;
        boolean isTrue = true;
        System.out.println(numOne++ + " " + ++numOne); //Output will be 10 12
        System.out.println(numTwo-- + " " + --numTwo); //Output will be 5 3
        System.out.println(!isTrue + " " + ~numOne); //Output will be false -13


        //Arithematic Operaton
        System.out.println(numOne + numTwo); //Output will be 15
        System.out.println(numOne - numTwo); //Output will be 5
        System.out.println(numOne * numTwo); //Output will be 50
        System.out.println(numOne / numTwo); //Output will be 2
        System.out.println(numOne % numTwo); //Output will be 0
        // Relationsl
        System.out.println(numOne > numTwo); //Output will be true
        //logical
        int numThree = 30;
        numOne=100;
        System.out.println(numOne > numTwo && numOne > numThree); //Output will be true

        //Ternary :<condition> ? <value if condition is true> : < value if condition is false> 
        int min = (numOne < numTwo) ? numOne : numTwo;
        System.out.println(min); //Output will be 3

        //assignment operator
        numOne = 10; //The value 10 is assigned to numOne
        System.out.println(numOne); //Output will be 10
        numOne += 5;
        System.out.println(numOne); //Output will be 15
        numOne -= 5;
        System.out.println(numOne); //Output will be 10
        numOne *= 5;
        System.out.println(numOne); //Output will be 50
        numOne /= 5;
        System.out.println(numOne); //Output will be 10


        //BIT WISE
        // Shift operator (<< and >>) is used to move the left operands value by
		// the number of bits specified.
		int a = 10;
		int b = 20;
		System.out.println(a << 2); // left-shift operator moves the value to
									// the left side
		System.out.println(b >> 3); // right-shift operator moves the value to
									// the right side

		// Unsigned right shift operator(>>>)
		System.out.println(a >> 2);
		System.out.println(a >>> 2);
		// works in the same way for positive numbers

		int c = -1;
		System.out.println(c >> 2);
		System.out.println(c >>> 2);

		// There is no unsigned left shift operator(<<<). The below line leads
		// to an error
		// System.out.println(a<<<2);

		// Bitwise operators are used to perform manipulation of individual bits

		// Logical OR(||) does not check second condition if first is true
		// Bitwise OR(|) always checks both conditions even if first condition
		// is true or false
		System.out.println(a | b);

		// Logical AND(&&) does not check second condition if first is false
		// Bitwise AND(&) checks both conditions even if first condition is true
		// or false
		System.out.println(a & b);

        //EXPLICIT CONVERSION AND IMPLICIT CONVERSION++++++++++++++++++++++++++++++++++++++
		int variableOne = 10;
		float variableTwo = variableOne;
		System.out.println(variableOne);
		System.out.println(variableTwo);
		// Here, a variable of data type having smaller range is automatically
		// accommodated in a variable of data type having bigger range. This is
		// known as widening.

		// When we try to accommodate a variable of data type having bigger
		// range into a data type having smaller range, it leads to an error.
		float variableThree = 12.5f;
		// int variableFour = variableThree; // comment this line or fix the error
											// to execute the code successfully
		System.out.println(variableThree);
		// System.out.println(variableFour); // comment this line or fix the error
											// to execute the code successfully

		// Since our assignment is leading to loss of data, we need to
		// explicitly specify that the data needs to be converted to a data type
		// having smaller range.
		// This is known as explicit typecasting.
		int variableFive = (int) variableThree;
		System.out.println(variableFive);


        //DECISON /SELECTION
		String customerType = "Guest";
		int quantity = 2;
		int unitPrice = 10;
		int totalCost = 0;
		int discount = 5;
		int deliveryCharge = 5;
		totalCost = (unitPrice * quantity);
		if (customerType == "Regular") {
			totalCost = totalCost - (totalCost * discount / 100);
			System.out.println("You are a regular customer and have got 5% discount");
			System.out.println("The total cost to be paid is " + totalCost);
			if (totalCost >= 20) {
				System.out.println("You have got a gift voucher!!!!");
			}
		} else if (customerType == "Guest") {
			totalCost = totalCost + deliveryCharge;
			System.out.println("You need to pay an additional delivery charge of $5");
			System.out.println("The total cost to be paid is " + totalCost);
		} else {
			System.out.println("Invalid selection");
		}

        //SWITCH CASE
        String orderedFood = "Pizza";
		switch (orderedFood) {
		case "Burger":
			System.out.println("You have ordered Burger. Unit price: $10");
			break;
		case "Pizza":
			System.out.println("You have ordered Pizza. Unit price: $15");
			break;
		case "Sandwich":
			System.out.println("You have ordered Sandwich. Unit price: $8");
			break;
		default:
			System.out.println("Invalid selection");
        }

        //FOR LOOP 
        // for (<initialization>; <condition>; <increment/decrement>) { 
        //          <statements>; 
        //     } 
        Scanner sc = new Scanner(System.in);
		totalCost = 0;
		unitPrice = 10;
		System.out.println("Enter the number of food items to be ordered");
		int noFoodItemsToBeOrdered = sc.nextInt();
		for (int counter = 1; counter <= noFoodItemsToBeOrdered; counter++) {
			System.out.println("Enter the food item");
			String foodItem = sc.next();
			System.out.println("Enter the quantity");
			quantity = sc.nextInt();
			System.out.println("You have ordered: " + foodItem);
			totalCost += unitPrice * quantity;
			System.out.println("Order placed successfully!");
			System.out.println("Total cost of the order: " + totalCost);
		}


        //WHILE
        		// Create a Scanner object
		// Scanner sc = new Scanner(System.in);
		// totalCost = 0;
		// char wantToAddFoodItem = 'Y';
		// unitPrice = 10;
		// quantity = 1;
		// while (wantToAddFoodItem == 'Y') {
		// 	totalCost = totalCost + (quantity * unitPrice);
		// 	System.out.println("Order placed successfully");
		// 	System.out.println("Total cost: " + totalCost);
		// 	System.out.println("Do you want to add more food items to your order? Y or N");
		// 	String input = sc.next(); // Accepting input from the customer
        //     // Extracting first character from the input string
		// 	wantToAddFoodItem = input.charAt(0); 
		// }

        //DO WHILE
        // Scanner sc = new Scanner(System.in); // Creating a Scanner object
		totalCost = 0;
		char wantToAddFoodItem = 'N';
		unitPrice = 10;
		quantity = 1;
		do {
			totalCost = totalCost + (quantity * unitPrice);
			System.out.println("Order placed successfully!");
			System.out.println("Total cost: " + totalCost);
			System.out.println("Do you want to add more food items to the order? Y or N");
			String input = sc.next(); // Accepting input from the customer
			// Extracting first character from the input string
			wantToAddFoodItem = input.charAt(0);
		} while (wantToAddFoodItem == 'Y');
		System.out.println("Thank you for ordering the food! It will reach you shortly...");




    }
}
