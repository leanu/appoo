import java.rmi.Remote;
import java.rmi.RemoteException;

public interface Iulian extends Remote{
    String sayHello() throws RemoteException;
}
