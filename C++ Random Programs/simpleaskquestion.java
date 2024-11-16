import java.util.Scanner;

public class ClearConsole{
	public static void clear(){
		System.out.print("\033[H\033[2J");
		System.out.flush();
    }

    public static void main(String[] args) {
        System.out.println("This will be cleared.");
        try {
            Thread.sleep(2000); // Pause for 2 seconds
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        clear();
        System.out.println("Console cleared!");
    }
}