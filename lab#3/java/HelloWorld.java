import java.applet.Applet;
import java.awt.*;
import java.applet.*;
import java.awt.Graphics;

public class HelloWorld extends Applet {
    public void paint(Graphics g) {
        g.drawString("Hello World!", 10, 10);
    }
}