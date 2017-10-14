import java.io.ByteArrayInputStream;

class Main {
    public static void main(String[] args) {
        byte buffer[] = new byte[10];
        for(byte i = 0; i < buffer.length; buffer[i] = i++);
        ByteArrayInputStream bufferStream = new ByteArrayInputStream(buffer);
        int byteRead;
        while((byteRead = bufferStream.read()) != -1)
            System.out.print(" " + byteRead);
        System.out.println();
    }
}