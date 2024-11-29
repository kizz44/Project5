#include <iostream>
#include <string>
#include <Windows.h>


struct Student {
	std::string name;
	std::string lastname;
	std::string otchestvo;
	std::string fullName;
	int group = 0;
	std::string kefedra;
	static const int size = 4;
	int ochenka[size]{};
	bool isStudent = true;

	void SetFullName() {
		std::cout << "Введите имя: ";
		std::getline(std::cin, name, '\n');
		std::cout << "Введите фамилию: ";
		std::getline(std::cin, lastname, '\n');
		std::cout << "Введите Отчество: ";
		std::getline(std::cin, otchestvo, '\n');
		fullName = otchestvo + " " + name + " " + lastname;

	}


	void setGroup() {
		std::cout << "Введите кафедру: РПО,гд"
	}



	std::string GetFullName() {

		return fullName;

};


	int main()
	{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		const int size = 3;
		Student rpo_23_1[size];

		for (int i = 0; i < size; i++) {
			rpo_23_1[i].SetFullName();
		}
		for (int i = 0; i < size; i++) {
			std::cout << rpo_23_1[i].GetFullName() << "\n";

		}
		for (int i = 0; i < size; i++) {

			rpo_23_1[i].setGroup();
			if (i != size - 1) {
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
		}
	return 0;

}