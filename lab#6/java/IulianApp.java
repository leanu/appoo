import java.rmi.Naming;

public class IulianApp {
    public static void main(String[] args) {
        String registryHost = "127.0.0.1";
        try {
            Iulian remote = (Iulian) Naming.lookup("rmi://"+registryHost+"/HelloRMI");
            String message = remote.sayHello();
            System.out.println(message);
        }
        catch (Exception ex) {
            ex.printStackTrace();
        }
    }
}
