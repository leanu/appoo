import java.applet.Applet;
import java.awt.*;
import java.awt.BorderLayout;
import java.awt.Frame;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.lang.NullPointerException;
import java.lang.Override;
import java.lang.String;
import java.lang.System;

public class HelloNume extends Applet {
    String nume = "Popescu";
    String prenume = "Ion";
    public void start() {
        try {
            nume = getParameter("Nume");
        }
        catch (NullPointerException e) {
        }
        try {
            prenume = getParameter("Prenume");
        }
        catch (NullPointerException e) {
        }
    }
    public void paint(java.awt.Graphics g) {
        String str = "Hello " + nume + " " + prenume + "!";
        g.drawString(str, 20, 20);
    }

    public static void main(String[] args) {
        HelloNume applet = new HelloNume();
        Frame frame = new Frame("Frame applet");
        frame.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                System.exit(0);
            }
        });
        frame.add(applet, BorderLayout.CENTER);
        frame.setSize(300,200);
        applet.init();
        applet.start();
        frame.setVisible(true);
    }
}