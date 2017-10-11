import java.lang.String;
import java.util.ArrayList;

public class Student {
    private String nume;
    private String prenume;
    private long IDNP;
    private int promotia;
    private String grupa;
    private int notaAM;
    private int notaPC;
    private int notaA;
    private int notaBI;
    private int notaE;
    private double mediaGenerala;
    private int credite;

    void Student(String nume, String prenume, long IDNP, int promotia, String grupa, int notaAM, int notaPC, int notaA, int notaBI, int notaE){
        this.nume = nume;
        this.prenume = prenume;
        this.IDNP = IDNP;
        this.promotia = promotia;
        this.grupa = grupa;
        this.notaAM = notaAM;
        this.notaPC = notaPC;
        this.notaA = notaA;
        this.notaBI = notaBI;
        this.notaE = notaE;
        this.mediaGenerala = (notaAM + notaPC + notaA + notaBI + notaE) / 5.0;
        int ects = 0;
        if(notaAM>4) { ects+=6;}
        if(notaPC>4) { ects+=6;}
        if(notaA>4) { ects+=6;}
        if(notaBI>4) { ects+=6;}
        if(notaE>4) { ects+=6;}
        this.credite = ects;
    }


    private static Student read() {
        Console c = System.console();
        String nume = c.readLine("Numele:");
        String prenume = c.readLine("Prenumele:");
        long IDNP = c.readLine("IDNP:");
        int promotia = c.readLine("promotia:");
        String grupa = c.readLine("grupa:");
        int notaAM = c.readLine("nota Analiza Matematica:");
        int notaPC = c.readLine("nota Programarea C:");
        int notaA = c.readLine("nota Algoritmica:");
        int notaBI = c.readLine("nota Bazele Informaticii:");
        int notaE = c.readLine("nota Engleza:");
        Student student = new Student(nume,prenume,IDNP,promotia,grupa,notaAM,notaPC,notaA,notaBI,notaE);
        return student;
    }

    public static void main(String[] args) {
        ArrayList<Student> arrayList = new ArrayList<Student>();
        arrayList.add(read());
        System.out.println("hello world");
        System.out.println(arrayList.size());
    }
}