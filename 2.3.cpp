#include <stdio.h>

int main()
{
    long login,password,login1,login2,password1,password2;
    
    login1 = 11111;
    password1 = 22222;
    
    login2 = 33333;
    password2 = 44444;
    
    printf("Введите логин: ");
    scanf("%i", &login);
    
    printf("Введите пароль: ");
    scanf("%i", &password);
	
	if((login==login1)&&(password==password1))
	{
		printf("Выполнена авторизация под пользователем 11111");
	}
	else
	{
		if ((login==login2)&&(password==password2))
		{
			printf("Выполнена авторизация под пользователем 33333");
		}
		else
		{
			printf("Не верно введен логин или пароль");
		}
	}
}
