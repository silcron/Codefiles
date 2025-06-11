import java.util.Scanner;

public class BankAccount {
    private String owner;
    private double balance;

    public BankAccount(String owner, double balance) {
        this.owner = owner;
        this.balance = balance;
    }

    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println("입금 완료: +" + amount + "원");
        } else {
            System.out.println("올바른 금액을 입력하세요.");
        }
    }

    public void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            System.out.println("출금 완료: -" + amount + "원");
        } else {
            System.out.println("잔액이 부족합니다.");
        }
    }

    public void showBalance() {
        System.out.println(owner + "님의 잔액: " + balance + "원");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("이름을 입력하세요: ");
        String name = scanner.nextLine();
        BankAccount account = new BankAccount(name, 0);

        while (true) {
            System.out.println("\n메뉴: 1.입금  2.출금  3.잔액조회  4.종료");
            System.out.print("선택: ");
            int choice = scanner.nextInt();

            if (choice == 1) {
                System.out.print("입금할 금액: ");
                double amount = scanner.nextDouble();
                account.deposit(amount);
            } else if (choice == 2) {
                System.out.print("출금할 금액: ");
                double amount = scanner.nextDouble();
                account.withdraw(amount);
            } else if (choice == 3) {
                account.showBalance();
            } else if (choice == 4) {
                System.out.println("프로그램을 종료합니다.");
                break;
            } else {
                System.out.println("잘못된 선택입니다.");
            }
        }

        scanner.close();
    }
}
