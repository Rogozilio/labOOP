#include "PersonList.h"
#include "PersonListItem.h"
#include "PersonTools.h"

template <typename T>
//TODO: Для передачи пола уже есть перечисление Sex. Зачем bool?
//TODO: Из-за того, что здесь неправильно использованы шаблоны, возникает костыль с дополнительной переменной isChild.
// В итоге я могу вызвать функцию PersonTools<Adult>(true, true), и у меня сгенерируется взрослый с возрастом до 18 лет. Косяк? Косяк
T* PersonTools<T>::GetRandomPerson(bool sex, bool isChild)
{
	T* person = new T;
	string surname[] = { "Holiday","Jacobson","James", "Allford", "Bawerman",
		"MacAdam", "Marlow", "Bosworth", "Neal","Conors",
		"Daniels", "Parson", "Quincy", "Richards", "Fane" };
	string nameMale[] = { "Michael","Joshua","Matthew","Ethan","Andrew",
		"Alexander", "Tyler", "James", "John","Samuel",
		"Christian","Logan","Jose","Justin","Gabriel" };
	string nameFemale[] = { "Katherine","Roxanne","Dorothy","Candace","Joan",
		"Helen", "Christine", "Mary", "Roberta","Karen",
		"Emily","Patricia","Elfreda","Camilla","Sarah" };
	person->Surname = surname[rand() % 15];

	if (sex)
	{
		person->Name = nameMale[rand() % 15];
		person->Sex = Male;
	}
	else
	{
		person->Name = nameFemale[rand() % 15];
		person->Sex = Female;
	}

	if (isChild)
	{
		person->Age = 1 + rand() % 17;
	}
	else
	{
		person->Age = 18 + rand() % 60;
	}

	return person;
}