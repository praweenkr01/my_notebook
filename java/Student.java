class Subject {
	private String subjectName;

	Subject(String subjectName) {
		this.subjectName = subjectName;
	}
}

class Cabin {
	public int cabinNumber;

	Cabin(int number) {
		this.cabinNumber = number;
	}
}

class Professor {
	public String name;
	public Cabin cabin;

	Professor(String name, Cabin c) {
		this.name = name;
		this.cabin = c;
	}

	public void updateCabin(Cabin c) {
		this.cabin.cabinNumber = c.cabinNumber;
	}
}

public class Student {
	private int rollNo;
	private String studentName;
	private Subject subject;

	Student(int rollNo, String studentName, Subject subject) {
		this.rollNo = rollNo;
		this.studentName = studentName;
		this.subject = subject;
	}

	public void displayDetails() {
		System.out.println("Student Name: " + studentName);
		// System.out.println("Subject Name: " + subject.subjectName);

		// We cannot directly access the private member of the class Subject
		// To access the private members of aggregated class, we will have to
		// make use of the getter and setter methods

		// Add the getter and setter methods to class Subject and modify the
		// displayDetails method accordingly

	}

	public static void main(String args[]) {
		Subject subject = new Subject("Maths");
		Student student = new Student(101, "Nate", subject);
		student.displayDetails();


		Cabin c1 = new Cabin(121);
		Professor p1 = new Professor("Ronald", c1);
		Professor p2 = new Professor("Bonnie", c1);
		Cabin c2 = new Cabin(122);
		p1.updateCabin(c2);
		System.out.println(p1.cabin.cabinNumber);//122
		System.out.println(p2.cabin.cabinNumber);//122 still both point to same c1 cabin with value updated
		
	}
}

