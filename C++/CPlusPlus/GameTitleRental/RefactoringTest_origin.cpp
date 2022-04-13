// RefactoringTest01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#include "Customer.h"

GameTitle inputGameTitleInfo();
Rental inputRentalInfo();

int main()
{
    std::cout << "Hello Enter Your Name!\n";
    std::string customerName;
    std::cin >> customerName;

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
    std::string statement = customer1.statement();
    std::cout << statement << std::endl;


    //// 테스트 프로젝트 용
    //std::string statement01 = "pororo 고객님의 대여 기록\n\tGTA5\t3.500000\n\tMonsterHunter: RISE\t15.000000\n누적 대여료: 18.500000\n적립 포인트: 2\n"; // 1,2,3 + 3,0,5
    //std::string statement02 = "luffy 고객님의 대여 기록\n\tGTA5\t1.500000\n\tCOOKIERUN:KINGDOM\t2.000000\n누적 대여료: 3.500000\n적립 포인트: 2\n"; // 1,1,1 + 2,2,2

    //std::cout << statement01 << std::endl;

    //if (statement == statement02) {
    //    std::cout << "same result" << std::endl;
    //}


}


std::string makeGameTitleName()
{
    static const std::string gameTitle1 = "GTA5";
    static const std::string gameTitle2 = "COOKIERUN:KINGDOM";
    static const std::string gameTitle3 = "MonsterHunter: RISE";
    static const std::string gameTitle4 = "LOL";
    static const std::string gameTitle5 = "BATTLE GROUNDS";
    static const std::string gameTitle6 = "UNCHARTED4";

    std::cout << "----- ----- Game Titles ----- -----" << std::endl;
    std::cout << "1) " << gameTitle1 << std::endl;
    std::cout << "2) " << gameTitle2 << std::endl;
    std::cout << "3) " << gameTitle3 << std::endl;
    std::cout << "4) " << gameTitle4 << std::endl;
    std::cout << "5) " << gameTitle5 << std::endl;
    std::cout << "6) " << gameTitle6 << std::endl;
    std::cout << "Enter GameTitle (1~6 or Name): ";

    std::string gameTitleName;
    std::cin >> gameTitleName;
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
    std::string gameTitleName = makeGameTitleName();
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
