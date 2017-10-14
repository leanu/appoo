import java.rmi.Naming;
import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;

public class IulianServer extends UnicastRemoteObject implements Iulian{
    public IulianServer() throws RemoteException{
        super();
    }

    public String sayHello() throws RemoteException{
        String message = "Hello from Iulian RMI server!";
        return message;
    }

    public static void main(String[] args) {
        if (System.getSecurityManager() == null)
            System.setSecurityManager(new SecurityManager()); //RMISecurityManager is deprecated
        // crearea unui obiect de implementare a interfetei
        IulianServer remoteObject = null;
        try {
            remoteObject = new IulianServer();
        }
        catch (Exception ex) {
            ex.printStackTrace();
        }
        // inregistrarea obiectului remote in serviciul rmiregistry
        try {
            Naming.rebind("rmi://localhost/HelloRMI", remoteObject);
            System.out.println( "IulianServer : Inregistrare...[Ok]");
        }
        catch (Exception ex) {
            ex.printStackTrace();
        }

    }
}
