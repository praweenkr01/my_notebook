class Food {

	private String foodName;
	private String cuisine;
	private String foodType;
	private int quantityAvailable;
	private double unitPrice;

	public String getFoodName() {
		return foodName;
	}

	public void setFoodName(String foodName) {
		this.foodName = foodName;
	}

	public String getCuisine() {
		return cuisine;
	}

	public void setCuisine(String cuisine) {
		this.cuisine = cuisine;
	}

	public String getFoodType() {
		return foodType;
	}

	public void setFoodType(String foodType) {
		this.foodType = foodType;
	}

	public int getQuantityAvailable() {
		return quantityAvailable;
	}

	public void setQuantityAvailable(int quantityAvailable) {
		this.quantityAvailable = quantityAvailable;
	}

	public double getUnitPrice() {
		return unitPrice;
	}

	public void setUnitPrice(double unitPrice) {
		this.unitPrice = unitPrice;
	}

	// equals method of Object class overridden for comparing two Food objects
	// based on foodName and foodType
	@Override
	public boolean equals(Object obj) {
		Food otherFood = (Food) obj;
		if (this.foodName.equals(otherFood.foodName)) {
			if (this.foodType.equals(otherFood.foodType))
				return true;
		}
		return false;
	}

	// hashCode method overridden
	@Override
	public int hashCode() {
		int result = 1;
		result = result + (foodName.hashCode());
		return result;
	}

	// toString is overridden to provide a custom textual representation
	@Override
	public String toString() {
		return "Food -> " + "Food name: " + this.foodName + ", Cuisine: "
				+ this.cuisine + ", Food type: " + this.foodType
				+ ", Quantity avaialable: " + this.quantityAvailable
				+ ", unitPrice: " + unitPrice;
	}
}



class j10ObjectClass {

	public static void main(String[] args) {

        Food foodOne = new Food();
		foodOne.setFoodName("Sandwich");
		foodOne.setCuisine("Continental");
		foodOne.setFoodType("Veg");
		foodOne.setQuantityAvailable(100);
		foodOne.setUnitPrice(10);

		// Comment the toString() in the Food class and execute the code
		System.out.println(foodOne);

		foodOne = new Food();
		foodOne.setFoodName("Sandwich");
		foodOne.setCuisine("Continental");
		foodOne.setFoodType("Veg");
		foodOne.setQuantityAvailable(100);
		foodOne.setUnitPrice(10);

		Food foodTwo = new Food();
		foodTwo.setFoodName("Sandwich");
		foodTwo.setCuisine("Continental");
		foodTwo.setFoodType("Veg");
		foodTwo.setQuantityAvailable(200);
		foodTwo.setUnitPrice(10);

		if (foodOne.equals(foodTwo)) {
			System.out.println("foodOne and foodTwo are same!");
		} else {
			System.out.println("foodOne and foodTwo are different!");
		}

		Food foodThree = new Food();
		foodThree.setFoodName("Burger");
		foodThree.setCuisine("Continental");
		foodThree.setFoodType("Veg");
		foodThree.setQuantityAvailable(100);
		foodThree.setUnitPrice(10);

		if (foodOne.equals(foodThree)) {
			System.out.println("foodOne and foodThree are same!");
		} else {
			System.out.println("foodOne and foodThree are different!");
		}

        String name1 = "Jennifer";
		String name2 = "Jennifer";
		String name3 = new String("Jennifer");

		System.out.println(name1 == name2); // both name1 and name2 refer to
											// same object
		System.out.println(name1 == name3); // name3 is a different object
											// created using new
		System.out.println(name2 == name3); // name3 is a different object
											// created using new

		System.out.println(name1.equals(name2));
		System.out.println(name1.equals(name3));
		System.out.println(name2.equals(name3));
		// Values are being compared in the above three cases and thus equals()
		// returns true
	}
}
