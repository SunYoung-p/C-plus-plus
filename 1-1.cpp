#include <iostream>

int main()
{
    while (1)
    {
        int price = 0;

        std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end) : ";
        std::cin >> price;

        if (price == -1)
            break;

        std::cout << "�̹� �� �޿� : " << 50 + price * 0.12 << std::endl;
    }

    std::cout << "���α׷��� �����մϴ�." << std::endl;

    return 0;
}

void no1()
{
    int re = 0, n = 0;

    for (int i = 1; i <= 5; i++)
    {
        std::cout << i << "��° ���� �Է� : ";
        std::cin >> n;

        re += n;
    }

    std::cout << "�հ� : " << re << std::endl;
}

void no2()
{
    char name[100] = {0}, phone[100] = {0};

    std::cout << "�̸� �Է� : ";
    std::cin >> name;

    std::cout << "��ȭ��ȣ �Է� : ";
    std::cin >> phone;

    std::cout << "\n"
              << name << "���� ��ȭ��ȣ�� " << phone << " �Դϴ�. " << std::endl;
}

void no3()
{
    int n = 0;

    std::cout << "� ���� �������� ������� ? ";
    std::cin >> n;

    for (int i = 1; i <= 9; i++)
        std::cout << n << " * " << i << " = " << n * i << std::endl;
}