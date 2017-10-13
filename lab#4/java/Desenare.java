import java.awt.*;
import java.awt.event.*;
public class Desenare extends Frame{
    private Panel selPanel;
    private Choice sel;
    private Choice fond;
    private Choice lista;
    private MyCanvas canvas;
    Desenare(String titlu){
        super(titlu);
        selPanel = new Panel(new GridLayout(6,1));
        Label label1 = new Label("Culoare figura");
        sel = new Choice();
        sel.addItem("Negru");sel.addItem("Rosu");
        sel.addItem("Verde");
        sel.addItem("Albastru"); sel.addItem("Alb"); sel.select(0);
        Label label2 = new Label("Culoare fond");
        fond = new Choice();
        fond.addItem("Alb"); fond.addItem("Albastru"); fond.addItem("Verde");
        fond.addItem("Rosu"); fond.addItem("Negru"); fond.select(0);

        Label label3 = new Label("Figura");
        lista = new Choice();
        lista.addItem("Linie"); lista.addItem("Dreptunghi");
        lista.addItem("Oval"); lista.addItem("Text"); lista.addItem("Imagine");
        lista.select(0);
        IL itemListener = new IL();
        sel.addItemListener(itemListener);
        fond.addItemListener(itemListener);
        lista.addItemListener(itemListener);
        selPanel.add(label1);selPanel.add(sel);
        selPanel.add(label2); selPanel.add(fond);
        selPanel.add(label3); selPanel.add(lista);
        selPanel.setBackground(Color.lightGray);
        canvas = new MyCanvas();
        add("West", selPanel);
        add("Center",canvas);
        addWindowListener(new WA());
        setSize(400,300);
        setVisible(true);
    }

    public static void main(String []args){
        Desenare d = new Desenare("Desenare 2D");
    }

    // Functii utilitare in program
    Color genCuloare(String culoare){
        Color color;
        if (culoare.equals("Negru")) color = Color.black;
        else if (culoare.equals("Rosu")) color = Color.red;
        else if (culoare.equals("Verde")) color = Color.green;
        else if (culoare.equals("Albastru")) color = Color.blue;
        else if (culoare.equals("Alb")) color = Color.white;
        else color = Color.black;
        return color;
    }

    String getFileName(){
        FileDialog dlg = new FileDialog(this);
        dlg.setFile("*.gif");
        dlg.setVisible(true);

        return dlg.getFile();
    }

    // Clasa de ascultare WindowEvent
    class WA extends WindowAdapter{
        public void windowClosing(WindowEvent eent){
            System.exit(0);
        }
    }

    // Clasa de ascultare ItemEvent
    class IL implements ItemListener{
        public void itemStateChanged(ItemEvent event){
            Object sursa = event.getSource();
            if (sursa == lista){
                String figura = lista.getSelectedItem();
                if (figura.equals("Imagine")){
                    String fileName = getFileName();
                    canvas.img = Toolkit.getDefaultToolkit().getImage(fileName);
                }
            }
            canvas.repaint();
        }
    }

    // Clasa pentru canvas
    class MyCanvas extends Canvas{
        public transient Image img = null;
        public void paint(Graphics g){
            String culoare = sel.getSelectedItem();
            Color color = genCuloare(culoare);
            g.setColor(color);
            color = genCuloare(fond.getSelectedItem());
            setBackground(color);
            Dimension dim = getSize();
            int cx = dim.width/2;
            int cy = dim.height/2;
            String figura = lista.getSelectedItem();
            if (figura.equals("Linie"))
                g.drawLine(cx/2,cy/2,3*cx/2,3*cy/2);
            else if (figura.equals("Dreptunghi"))
                g.fillRect(cx/2,cy/2,cx,cy);
            else if (figura.equals("Oval"))
                g.fillOval(cx/2,cy/2,cx,cy);
            else if (figura.equals("Text"))
                g.drawString("Textul dorit", cx, cy);
            else if (figura.equals("Imagine"))
                g.drawImage(img,cx,cy,this);
        }
    }
}

