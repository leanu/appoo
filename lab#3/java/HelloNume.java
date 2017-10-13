import java.applet.Applet;
import java.awt.*;

public class HelloNume extends Applet {
    String nume = null;
    String prenume = null;
    public void start() {
        nume = getParameter("Nume");
        prenume = getParameter("Prenume");
    }
    public void paint(java.awt.Graphics g) {
        String str = "Hello " + nume + " " + prenume + "!";
        g.drawString(str, 20, 20);
    }
}