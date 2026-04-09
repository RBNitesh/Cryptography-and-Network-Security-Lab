import java.util.Scanner;

public class RSAAlgoDemo {
    int p, q, n, phi, e, d;

    int gcd(int a, int b) {
        return a == 0 ? b : gcd(b % a, a);
    }

    void generateKeys() {
        n = p * q;
        phi = (p - 1) * (q - 1);

        for (e = 2; e < phi; e++) {
            if (gcd(e, phi) == 1)
                break;
        }

        for (d = 1; d < phi; d++) {
            if ((e * d) % phi == 1)
                break;
        }
    }

    int encrypt(int msg) {
        return (int) Math.pow(msg, e) % n;
    }

    int decrypt(int cipher) {
        return (int) Math.pow(cipher, d) % n;
    }
    public static void main(String[] args) {
        RSAAlgoDemo rsa = new RSAAlgoDemo();
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter two prime no. p and q respectively: ");
        rsa.p = sc.nextInt();
        rsa.q = sc.nextInt();

        rsa.generateKeys();

        System.out.println("Public Key (e, n): (" + rsa.e + ", " + rsa.n + ")");
        System.out.println("Private Key (d, n): (" + rsa.d + ", " + rsa.n + ")");


        System.out.print("Enter the message: ");
        int msg = sc.nextInt();

        int cipher = rsa.encrypt(msg);
        System.out.println("Encrypted message: " + cipher);
        
        int decrypted = rsa.decrypt(cipher);
        System.out.println("Decrypted message: " + decrypted);
    }
}