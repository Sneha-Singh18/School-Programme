import java.util.Scanner;  // Import Scanner class to take input from the user.
public class compare2string {     

	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    System.out.println("Enter the first string");
	    String a= sc.nextLine();
	    System.out.println("Enter the second string");
	    String b=sc.nextLine();
	    
	    if(a.equalsIgnoreCase(b)){    // Compare both strings using inbuilt string method
	        System.out.println("Both string are same");
	    } else {
	        System.out.println("Both string are not same");
	    }
	   
	}

}
