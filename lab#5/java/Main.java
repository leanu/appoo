import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.lang.System;

class Main {
    public static void main(String[] args) {
        byte buffer[] = new byte[10];
        for(byte i = 0; i < buffer.length; buffer[i] = i++);
        ByteArrayInputStream bufferStream = new ByteArrayInputStream(buffer);
        int byteRead;
        while((byteRead = bufferStream.read()) != -1)
            System.out.print(" " + byteRead);
        System.out.println();

        ByteArrayOutputStream outputStream = new ByteArrayOutputStream(256);
        try{
            for(int i=0;i<256;i++) outputStream.write(i);
            outputStream.writeTo(System.out);
            byte[] tablou = outputStream.toByteArray();
        } catch (IOException e) {
            System.out.println("Erroare "+ e.getMessage());
        }
    }
}