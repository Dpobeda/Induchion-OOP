#include <iostream>
#include <string>

class MyClass
{
private:
	int _data; // Доступно для модификации объекта класса
public:
	int data; // Доступно для модификации только внутри класса
//protected:
	//int data; // Доступно для модификации внутри класса и внутри классов-наследников

public:
	int Summ(int data)
	{
		return _data + data;
	}
};

class Tovar
{
private: // Всегда пишеться _ , т.к установленно C++
	std::string _name;
	float _price;

public: // Пишем только методы.

	Tovar(std::string name, float price)
	{
		_name = name;
		_price = price;
	}

	// Методы.
	void Print() {
		std::cout << "Name: " << _name << "\n";
		std::cout << "Price: " << _price << "\n";
	}

	void SetName(std::string name)
	{
		_name = name;
	}

	void SetPrice(float price)
	{
		_price = price;
	}


	std::string GetName()
	{
		return _name;
	}

	float GetPrice()
	{
		return _price;
	}
};

class Employee
{
private:
	std::string _name1;
	int _id;
public:

	Employee(std::string name1, float id)
	{
		_name1 = name1;
		_id = id;
	}

	void Print() {
		std::cout << "id: " << _id << "\n";
		std::cout << "Name: " << _name1 << "\n";
	}

	void SetName1(std::string name1)
	{
		_name1 = name1;
	}

	void SetId1(float id)
	{
		_id = id;
	}


	std::string GetName1()
	{
		return _name1;
	}

	float GetId1()
	{
		return _id;
	}
};

// Функция.
/*
void SearchByName(std::string x)
{
	BasaData.Search(x);
}
*/

int main() 
{
	// Вывод Class

	{
		MyClass myObject;
		myObject.data = 100;
		return 0;
	}
	
	
	{
		 Tovar tovar1("Inoor", 99.9f);
		 Tovar tovar2("Xyi", 500.3f);
		 Tovar tovar3("Lox", 42.1f);
		 
		// Когда выводим new, то нужно удалять.
		/*
		Tovar* Tovar4 = new Tovar("beer", 56.99f);
		delete(Tovar4);
		*/
		// tovar1.SetName("Igor");
		// tovar1.SetPrice(99.99f);
		// std::cout << tovar1.GetName() << "=" << "\t";
		// std::cout << tovar1.GetPrice() << "\n\n";
		 tovar1.Print();
		 tovar2.Print();
		 tovar3.Print();
		// SearchByName(tovar1.GetName());
	}


	{
		// Employee Employee("Denis", 15);
		// Employee.Print();
	}


	return 0;
}