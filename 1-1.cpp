#include <iostream>

int main()
{
    while (1)
    {
        int price = 0;

        std::cout << "판매 금액을 만원 단위로 입력(-1 to end) : ";
        std::cin >> price;

        if (price == -1)
            break;

        std::cout << "이번 달 급여 : " << 50 + price * 0.12 << std::endl;
    }

    std::cout << "프로그램을 종료합니다." << std::endl;

    return 0;
}

void no1()
{
    int re = 0, n = 0;

    for (int i = 1; i <= 5; i++)
    {
        std::cout << i << "번째 정수 입력 : ";
        std::cin >> n;

        re += n;
    }

    std::cout << "합계 : " << re << std::endl;
}

void no2()
{
    char name[100] = {0}, phone[100] = {0};

    std::cout << "이름 입력 : ";
    std::cin >> name;

    std::cout << "전화번호 입력 : ";
    std::cin >> phone;

    std::cout << "\n"
              << name << "님의 전화번호는 " << phone << " 입니다. " << std::endl;
}

void no3()
{
    int n = 0;

    std::cout << "어떤 수로 구구단을 만들어볼까요 ? ";
    std::cin >> n;

    for (int i = 1; i <= 9; i++)
        std::cout << n << " * " << i << " = " << n * i << std::endl;
}