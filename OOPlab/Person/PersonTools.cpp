#include "PersonTools.h"

//TODO: ��� �������� ���� ��� ���� ������������ Sex. ����� bool?
//TODO: ��-�� ����, ��� ����� ����������� ������������ �������, ��������� ������� � �������������� ���������� isChild.
// � ����� � ���� ������� ������� PersonTools<Adult>(true, true), � � ���� ������������� �������� � ��������� �� 18 ���. �����? �����
//����������
Person* PersonTools::GetRandomPerson(Sex sex)
{
	Person* person = new Person;
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

	person->Age = 1 + rand() % 60;

	return person;
}

Adult* PersonTools::GetRandomAdult(Sex sex)
{
	Adult* person = new Adult;
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

	person->Age = 18 + rand() % 60;

	return person;
}

Child* PersonTools::GetRandomChild(Sex sex)
{
	Child* person = new Child;
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

	person->Age = 1 + rand() % 17;

	return person;
}