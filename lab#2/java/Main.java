import java.lang.Integer;
import java.util.ArrayList;
import java.util.Arrays;

public class Main {
    public static void main(String[] args){
        ArrayList<Integer> vector = new ArrayList<Integer>(Arrays.asList(2, 9, 4, 5, 7, 8));
        Lista lista = new Lista(vector);
        System.out.println(vector.toString());//default method
        System.out.println(lista.toString()); //metoda redefinita
    }
}