#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

struct Date
{
	int day;
	int month;
	int year;
	bool operator==(Date other)
	{
		return(day == other.day && month == other.month && year == other.year);
	}
};

class Car
{
private:
	string name;
	string model;
	Date date_of_manufacture;
	int engine_capacity;
	int price;
public:
	Car() : name(""), model(""), engine_capacity(0), price(0)
	{
		date_of_manufacture.day = 0;
		date_of_manufacture.month = 0;
		date_of_manufacture.year = 0;
	}
	Car(string name, string model, int day, int month, int year, int engine_capacity, int price) : name(name), model(model), engine_capacity(engine_capacity), price(price)
	{
		date_of_manufacture.day = day;
		date_of_manufacture.month = month;
		date_of_manufacture.year = year;
	}

	string Get_name()
	{
		return name;
	}

	string Get_model()
	{
		return model;
	}

	int Get_engine_capacity()
	{
		return engine_capacity;
	}

	int Get_price()
	{
		return price;
	}

	Date Get_date()
	{
		return date_of_manufacture;
	}

	void Show_Info_About_car()
	{
		cout << "Name: " << name << endl;
		cout << "Model: " << model << endl;
		cout << "Date of manufacture: " << date_of_manufacture.day << ":" << date_of_manufacture.month << ":" << date_of_manufacture.year << endl;
		cout << "Engine capacity: " << engine_capacity << endl;
		cout << "Price: " << price << endl;
	}
};

struct sortByName
{
	bool operator()(Car &s1, Car & s2)const
	{
		return s1.Get_name() < s2.Get_name();
	}
};

struct sortByModel
{
	bool operator()(Car &s1, Car & s2)const
	{
		return s1.Get_model() < s2.Get_model();
	}
};

struct sortByEngineCapacity
{
	bool operator()(Car &s1, Car & s2)const
	{
		return s1.Get_engine_capacity() < s2.Get_engine_capacity();
	}
};

struct sortByPrice
{
	bool operator()(Car &s1, Car & s2)const
	{
		return s1.Get_price() < s2.Get_price();
	}
};

class Ñar_dealership

{
private:
	string name;
	list<Car> car_dealership;
public:
	Ñar_dealership() : name("") {}
	Ñar_dealership(string name) : name(name) {}

	void Find_Car_by_name(string name)
	{
		for (auto iter = car_dealership.begin(); iter != car_dealership.end(); iter++)
		{
			if ((*iter).Get_name() == name)
			{
				(*iter).Show_Info_About_car();
				cout << endl;
			}
		}
	}

	void Find_Car_by_model(string model)
	{
		for (auto iter = car_dealership.begin(); iter != car_dealership.end(); iter++)
		{
			if ((*iter).Get_model() == model)
			{
				(*iter).Show_Info_About_car();
				cout << endl;
			}
		}
	}

	void Find_Person_by_engine_capacity(int engine_capacity)
	{
		for (auto iter = car_dealership.begin(); iter != car_dealership.end(); iter++)
		{
			if ((*iter).Get_engine_capacity() == engine_capacity)
			{
				(*iter).Show_Info_About_car();
				cout << endl;
			}
		}
	}

	void Find_Person_by_price(int price)
	{
		for (auto iter = car_dealership.begin(); iter != car_dealership.end(); iter++)
		{
			if ((*iter).Get_price() == price)
			{
				(*iter).Show_Info_About_car();
				cout << endl;
			}
		}
	}

	void Find_Person_by_date_of_manufacture(Date date)
	{
		for (auto iter = car_dealership.begin(); iter != car_dealership.end(); iter++)
		{
			if ((*iter).Get_date() == date)
			{
				(*iter).Show_Info_About_car();
				cout << endl;
			}
		}
	}

	void Add_Person_to_notebook(const Car& ps)
	{
		car_dealership.push_back(ps);
	}

	void Delete_front()
	{
		car_dealership.pop_front();
	}

	void Delete_back()
	{
		car_dealership.pop_back();
	}

	void Delete_all()
	{
		car_dealership.erase(car_dealership.begin(), car_dealership.end());
	}

	void Delete_Car_from_notebook_by_name(string name)
	{
		for (auto iter = car_dealership.begin(); iter != car_dealership.end(); iter++)
		{
			if ((*iter).Get_name() == name)
			{
				car_dealership.erase(iter);
				break;
			}
		}
	}

	void Delete_Car_from_Ñar_dealership_by_surname(string surname)
	{
		for (auto iter = car_dealership.begin(); iter != car_dealership.end(); iter++)
		{
			if ((*iter).Get_name() == surname)
			{
				car_dealership.erase(iter);
				break;
			}
		}
	}

	void Delete_Car_from_Ñar_dealership_by_engine_capacity(int engine_capacity)
	{
		for (auto iter = car_dealership.begin(); iter != car_dealership.end(); iter++)
		{
			if ((*iter).Get_engine_capacity() == engine_capacity)
			{
				car_dealership.erase(iter);
				break;
			}
		}
	}

	void Delete_Car_from_Ñar_dealership_by_price(int price)
	{
		for (auto iter = car_dealership.begin(); iter != car_dealership.end(); iter++)
		{
			if ((*iter).Get_price() == price)
			{
				car_dealership.erase(iter);
				break;
			}
		}
	}

	void Delete_Car_from_Ñar_dealership_by_date_of_birth(Date date)
	{
		for (auto iter = car_dealership.begin(); iter != car_dealership.end(); iter++)
		{
			if ((*iter).Get_date() == date)
			{
				car_dealership.erase(iter);
				break;
			}
		}
	}

	void Show_Ñar_dealership_info()
	{
		cout << "Name of notebook: " << name << endl;
		cout << "\t\t______Persons______" << endl;
		for (auto iter = car_dealership.begin(); iter != car_dealership.end(); iter++)
		{
			(*iter).Show_Info_About_car();
			cout << endl;
		}
	}

	void Sort_Cars_by_name()
	{

		car_dealership.sort(sortByName());
	}

	void Sort_Cars_by_model()
	{

		car_dealership.sort(sortByModel());
	}

	void Sort_Cars_by_EngineCapacity()
	{

		car_dealership.sort(sortByEngineCapacity());
	}

	void Sort_Cars_by_price()
	{

		car_dealership.sort(sortByPrice());
	}

};

int main()
{

	//*map<string, int> map_c;
	//map_c["One"] = 1;
	//map_c.insert(make_pair("one", 1));
	//map_c.insert(make_pair("four", 4));
	//map_c.insert(make_pair("zero", 0));
	//map_c.insert(make_pair("three", 3));
	//map_c.insert(make_pair("Five", 5));
	//cout << "_______________MAp_______________" << endl;
	//for (auto i: map_c)
	//{
	//	cout << "Item: " << i.first << "\tValue: " << i.second << endl;
	//}
	//multimap<string, int> multimap_c;
	//multimap_c.insert(make_pair("one", 1));
	//multimap_c.insert(make_pair("one", 11));
	//multimap_c.insert(make_pair("four", 4));
	//multimap_c.insert(make_pair("four", 44));
	//multimap_c.insert(make_pair("three", 3));
	//multimap_c.insert(make_pair("three", 33));
	//cout << "_______________Find_______________" << endl;
	//auto iter = multimap_c.find("One");
	//while (iter != multimap_c.end())
	//{
	//	cout << "Item: " << (*iter).first << "\tValue: " << (*iter).second << endl;
	//	++iter;
	//}
	//cout << "_______________MultiMAp_______________" << endl;
	//for (auto i : multimap_c)
	//{
	//	cout << "Item: " << i.first << "\tValue: " << i.second << endl;
	//}*/
	////////////set
	//set<int, greater<int>> set_c;
	//cout << "----------------Set-----------------" << endl;
	//set_c.insert({ 1,2,3 });
	//for_each(set_c.begin(), set_c.end(), [](int v) {cout << v << " "; });
	//cout << endl;
	//set_c.clear();
	//set_c.insert({ 1,1,2,2,3,3 });
	//for_each(set_c.begin(), set_c.end(), [](int v) {cout << v << " "; });
	//cout << endl;
	//set_c.clear();
	//set_c.insert({ 4,4,2,2,1,1,3,3 });
	//for_each(set_c.begin(), set_c.end(), [](int v) {cout << v << " "; });
	//cout << endl;
	//////////////////
	//unordered_set<int> unorderedset_c;
	//cout << "----------------UnorderedSet-----------------" << endl;
	//unorderedset_c.insert({ 1,2,3 });
	//for_each(unorderedset_c.begin(), unorderedset_c.end(), [](int v) {cout << v << " "; });
	//cout << endl;
	//unorderedset_c.clear();
	//unorderedset_c.insert({ 1,1,2,2,3,3 });
	//for_each(unorderedset_c.begin(), unorderedset_c.end(), [](int v) {cout << v << " "; });
	//cout << endl;
	//unorderedset_c.clear();
	//unorderedset_c.insert({ 4,4,2,2,1,1,3,3 });
	//for_each(unorderedset_c.begin(), unorderedset_c.end(), [](int v) {cout << v << " "; });
	//cout << endl;

	Ñar_dealership car_dealership("frst");
	Car c1("Leksys", "228", 10, 10, 10, 250, 15000);
	Car c2("Bexa", "qwseq", 12, 10, 10, 450, 25000);
	Car c3("Porsh", "ghjjkk", 10, 6, 7, 600, 30000);
	Car c4("Audi", "qqqqqqqq", 6, 8, 16, 455, 32000);

	car_dealership.Add_Person_to_notebook(c1);
	car_dealership.Add_Person_to_notebook(c2);
	car_dealership.Add_Person_to_notebook(c3);
	car_dealership.Add_Person_to_notebook(c4);

	car_dealership.Show_Ñar_dealership_info();
	car_dealership.Sort_Cars_by_name();
	cout << endl;
	car_dealership.Show_Ñar_dealership_info();

	system("pause");
	return 0;
}