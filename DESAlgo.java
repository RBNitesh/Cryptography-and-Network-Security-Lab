import javax.crypto.*;

import java.security.NoSuchAlgorithmException;
import java.util.*;

public class DESAlgo{
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter plaintext: ");
        String plaintext = sc.next();
        
        KeyGenerator keyGen = KeyGenerator.getInstance("Blowfish");

        SecretKey secretKey = keyGen.generateKey();

        // Create DES Cipher Object
        Cipher cipher = Cipher.getInstance("Blowfish");

        // Encryption
        cipher.init(Cipher.ENCRYPT_MODE, secretKey);
        byte[] encryptedBytes = cipher.doFinal(plaintext.getBytes());
        String encryptedText = Base64.getEncoder().encodeToString(encryptedBytes);

        // Decryption
        cipher.init(Cipher.DECRYPT_MODE, secretKey);
        byte[] decryptedBytes = cipher.doFinal(Base64.getDecoder().decode(encryptedText));
        String decryptedText = new String(decryptedBytes);

        System.out.println("Encrypted Text: " + encryptedText);
        System.out.println("Decrypted Text: " + decryptedText);
    }
}