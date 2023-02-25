//
// Created by Nonthachai Plodthong on 24/2/2023 AD.
//

#include "Billing.h"

namespace BillingOrder{
	void Shopping::displayHeader() {
		std::cout << "\t\t\t_____________________-\n";
		std::cout << "\t\t\t_____________________-\n";
		std::cout << "\t\t\t____Billing Menu_____-\n";
		std::cout << "\t\t\t_____________________-\n";
		std::cout << "\t\t\t_____________________-\n";
	}
	void Shopping::menu(){
		int choice{};
		string email{};
		string passWord{};
		displayHeader();
		cout << "\t\t\t < Select Menu Billing Option >\n";
		cout << "\t\t\t < 1). Add Billing >\n";
		cout << "\t\t\t < 2). Edit Billing >\n";
		cout << "\t\t\t < 3). Remove Billing >\n";
		cout << "\t\t\t < 4). Exit >\n";
		cin >> choice;
		if (choice == 4){
			return;
		}else if(choice == 1){
			cout << "\t\t\t __ Adding Billing \n";

		}

	}

	void Shopping::systemManagement(){

	}
	void Shopping::buyingSystem(){

	}
	void Shopping::addSystem(){

	}
	void Shopping::editSystem(){

	}
	void Shopping::removeItem(){

	}
	void Shopping::listItem(){

	}
	void Shopping::receipt(){

	}
}