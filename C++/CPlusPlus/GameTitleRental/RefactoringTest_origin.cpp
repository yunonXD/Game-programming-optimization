// RefactoringTest01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#include "Customer.h"

GameTitle inputGameTitleInfo();
Rental inputRentalInfo();

int main()
{
    std::cout << "Hello Enter Your Name!\n";
    std::wstring customerName;
    std::wcin >> customerName;

    Customer customer1(customerName);

    // 랜탈
    while (true)
    {
        Rental rental = inputRentalInfo();
        customer1.addRental(rental);

        int addRental = 0;
        std::cout << "add rental? (y:1, n:0) ";
        std::cin >> addRental;
        if (addRental != 1)
        {
            break;
        }
    }

    std::cout << "----- ----- statement ----- -----" << std::endl;
    std::wstring statement = customer1.statement();
    std::wcout << statement << std::endl;


    //// 테스트 프로젝트 용
    //std::wstring statement01 = L"pororo 고객님의 대여 기록\n\tGTA5\t3.500000\n\tMonsterHunter: RISE\t15.000000\n누적 대여료: 18.500000\n적립 포인트: 2\n"; // 1,2,3 + 3,0,5
    //std::wstring statement02 = L"luffy 고객님의 대여 기록\n\tGTA5\t1.500000\n\tCOOKIERUN:KINGDOM\t2.000000\n누적 대여료: 3.500000\n적립 포인트: 2\n"; // 1,1,1 + 2,2,2

    //std::wcout << statement01 << std::endl;

    //if (statement == statement02) {
    //    std::wcout << L"same result" << std::endl;
    //}


}


std::wstring makeGameTitleName()
{
    static const std::wstring gameTitle1 = L"GTA5";
    static const std::wstring gameTitle2 = L"COOKIERUN:KINGDOM";
    static const std::wstring gameTitle3 = L"MonsterHunter: RISE";
    static const std::wstring gameTitle4 = L"LOL";
    static const std::wstring gameTitle5 = L"BATTLE GROUNDS";
    static const std::wstring gameTitle6 = L"UNCHARTED4";

    std::cout << "----- ----- Game Titles ----- -----" << std::endl;
    std::wcout << L"1) " << gameTitle1 << std::endl;
    std::wcout << L"2) " << gameTitle2 << std::endl;
    std::wcout << L"3) " << gameTitle3 << std::endl;
    std::wcout << L"4) " << gameTitle4 << std::endl;
    std::wcout << L"5) " << gameTitle5 << std::endl;
    std::wcout << L"6) " << gameTitle6 << std::endl;
    std::cout << "Enter GameTitle (1~6 or Name): ";

    std::wstring gameTitleName;
    std::wcin >> gameTitleName;
    int gameTitleNo = 0;
    try {
        gameTitleNo = std::stoi(gameTitleName);
    }
    catch (...) {

    }

    switch (gameTitleNo) {
    case 1:
        gameTitleName = gameTitle1;
        break;
    case 2:
        gameTitleName = gameTitle2;
        break;
    case 3:
        gameTitleName = gameTitle3;
        break;
    case 4:
        gameTitleName = gameTitle4;
        break;
    case 5:
        gameTitleName = gameTitle5;
        break;
    case 6:
        gameTitleName = gameTitle6;
        break;
    }

    return gameTitleName;
}

GameTitle inputGameTitleInfo()
{
    std::wstring gameTitleName = makeGameTitleName();
    std::cout << "Enter PriceCode(0:Regular, 1:NewReleased, 2:POPULAR) ";
    int priceCode;
    std::cin >> priceCode;

    return GameTitle(gameTitleName, priceCode);
}

Rental inputRentalInfo()
{
    GameTitle gameTitle = inputGameTitleInfo();

    std::cout << "----- ----- Rental Info ----- -----" << std::endl;
    std::cout << "Enter daysRented: ";
    int daysRented;
    std::cin >> daysRented;

    return Rental(gameTitle, daysRented);
}
