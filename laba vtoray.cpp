cout << "\n[5] - Палец руки" << endl;
int variant;
cin >> variant;


int age = 0;
int maxAge = 0;
int minAge = 100;
int sum = 0;
int average = 0;
int amount = 0;
int day;
int num = 0;
char symbol;
int finger;
int a, b, rez = 0;

switch (variant)
{
case 1:

	cout << "Введите количество посетителей спортзала: ";
	cin >> amount;

	for (int i = 0; i < amount; i++)
	{
		cout << "Введите возраст " << i + 1 << "-го посетителя: ";
		cin >> age;

		if (age > maxAge)
			maxAge = age;
		if (age < minAge)
			minAge = age;

		sum += age;
	}

	average = sum / amount;

	cout << "\nСредний возраст всех посетителей: " << average << endl;
	cout << "\nСамый взрослый: " << maxAge << endl;
	cout << "\nСамый молодой: " << minAge << endl;

	return 0;
case 2:


	cout << "введит ден неделя адин два три читыре пьят шиест сьем : ";
	cin >> day;

	switch (day)
	{
	case 1:
		cout << "Понедельник: \n8:00 Бегит \n19:00 Прес качат \n";
		break;
	case 2:
		cout << "Вторник: \n8:00 анжумания \n";
		break;
	case 3:
		cout << "Среда: \n8:00 Работа работать даставка \n19:00 домой ехать кушать \n";
		break;
	case 4:
		cout << "Четверг: \n8:00 амуде райзен разгонять \n20:00 заказывать новую материнку \n";
		break;
	case 5:
		cout << "Пятница: \n8:00 на учеба ехат \n17:00 с патай пары ухадит \n";
		break;
	case 6:
		cout << "Суббота: \n встреча с друзя \n";
		break;
	case 7:
		cout << "Воскресенье: \n настроить третички на ОЗУ \n";
		break;
	default:
		cout << "лее суета нет дня такова" << endl;
	}
	return 0;


case 3:
	cout << "\nВведите букву станции метро" << endl;
	cin >> symbol;
	switch (symbol)
	{
	case 'c': cout << "\nСтанция метро ЦАРИЦЫНО Время в пути 2 минуты \n";
		break;
	case 'C': cout << "\nСтанция метро ЦАРИЦЫНО Время в пути 2 минуты \n";
		break;
	case 'b': cout << "\nСтанция метро Бауманская Время в пути 228 минут\n";
		break;
	case 'B': cout << "\nСтанция метро Бауманская Время в пути 228 минут\n";
		break;
	case 'v': cout << "\nСтанция метро Водный стадион Время в пути 1337 минут\n";
		break;
	case 'V': cout << "\nСтанция метро Водный стадион Время в пути 1337 минут\n";
		break;
	case 'o': cout << "\nСтанция метро Одесса Время в пути 3 дня\n";
		break;
	case 'O': cout << "\nСтанция метро Одесса Время в пути 3 дня\n";
		break;
	case 'a': cout << "\nСтанция метро Омерика Время в пути 9 минут\n";
		break;
	case 'A': cout << "\nСтанция метро Омерика Время в пути 9 минут\n";
		break;
	default: cout << "\nтакої станції немає!\n";
	}
	return 0;

case 4:

	cout << "\nВведіть число" << endl;
	cin >> a;
	cout << "\nДруге число" << endl;
	cin >> b;
	cout << "\nРезультат множення" << endl;
	cin >> rez;
	if (rez == a * b) {
		cout << "\nВсе правильно, молодець";
	}
	else cout << "\nНІ НЕ ПРАВИЛЬНО Хлопець, правильно будет - " << a * b;
	return 0;
case 5:

	cout << "Ведите номер пальца : ";
	cin >> finger;

	switch (finger)
	{
	case 1:
		cout << "\nМизинец";
		break;
	case 2:
		cout << "\nБезимянный";
		break;
	case 3:
		cout << "\nСредний";
		break;
	case 4:
		cout << "\nТакой длинный хз";
		break;
	case 5:
		cout << "\nБольшой";
	default: cout << "\n Такого пальца нет\n";
	} return 0;
	break;

}
}