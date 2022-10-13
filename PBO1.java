import java.util.Scanner;
class Sdatatugas1 {
    public static void main(String args[]) {
        char[] a = {'Q','W','E', 'R','T','Y'};
        int[][] x = {{0,1}, {2,3}, {4,5}};
        int jam = 1;

        Scanner input = new Scanner(System.in);
        System.out.println("ARRAY 1D");
        for(int i=0; i<5; i++){        //perulangan For & array 1D
            System.out.println("Index " + i + " = " + a[i]);
        }

        System.out.println("ARRAY 2D");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<2;j++)
            {
                System.out.print(x[i][j] + "\t");
            }
            System.out.println();
        }
        System.out.println("Percabangan IF menentukan angka Ganjil/Genap");
        System.out.print("Nilai : ");
        int n = input.nextInt();                //Input
        System.out.println("Nilainya : " + n);  //output

        if (n % 2 == 0) {
            System.out.println("Bilangan Genap");
        } else {
            System.out.println("Bilangan Ganjil");
        }

        int f = 0;
        while (f < 3) { //While
            System.out.println("Konversi jam ke menit");
            f++;
        }
        int e = 0;
        do {            //Do while
            int m = jam * 60;
            int d = m * 60;
            System.out.println(jam + " Jam " + m + " Menit " + d + " Detik");
            jam++;
            e++;
        }
        while (e < 3);
    }
}