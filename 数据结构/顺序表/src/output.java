import java.util.Scanner;

public class output {
    public static void main(String[] args) {
        System.out.println("输入内容：");
        Scanner sca=new Scanner(System.in);
        String ss=sca.nextLine();
        System.out.println("输入循环次数：");
        Scanner scan=new Scanner(System.in);
        int num=sca.nextInt();
        for(int i=num;i>=0;i--){
            System.out.println(ss);
        }
    }
}
