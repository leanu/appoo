import java.lang.Integer;
import java.lang.String;
import java.util.ArrayList;

public class Lista {
    private ArrayList<Integer> vector;

    public Lista() {
        vector = new ArrayList<Integer>();
    }

    public Lista(ArrayList<Integer> vector) {
        this.vector = vector;
    }

    public String toString() {
        String listString = "{";
        for (int i : vector) {
            listString += String.valueOf(i) + ", ";
        }
        listString = listString.substring(0, listString.length()-2) + "}";
        return listString;
    }
}