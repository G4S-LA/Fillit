# Fillit

Проект [Школы 21](https://21-school.ru/), цель которого заключается в создании программы, которая могла бы расположить набор от 1 до 26 тетрамино в наименьшем возможном квадрате и распечатать результат. Написан на языке C с использование собственной библиотеки [libft](https://github.com/G4S-LA/libft) с небольшими дополнениями. Данный проект писался в команде, состоящей из 2-ух человек.
Подробнее: [Fillit](https://github.com/G4S-LA/Fillit/blob/master/resources/fillit.en.pdf).

## Что делает Fillit?

Fillit получает, например, такой текстовый файл карты

```
....
..##
..#.
..#.

....
.##.
..##
....

....
.##.
.##.
....
```
Алгоритм программы находит наименьший из возможных квадратов, в котором можно расположить части, и распечатывает квадрат следующим образом

```
AACC
A.CC
ABB.
..BB
```

## :bulb: Как это работает?

Чтобы программа правильно отработала, требуется удостовериться, что входящий файл содержит корректные данные. Для этого была написана функция `validation`, выполняющая следующие проверки:
* Наличиет только допустимых символов ('.', '#').
* Правильность размеров одного квадрата (4x4) (в конце обязательно должен стоять '\n')
* Количество сиволов '#' (обязательно должно быть только 4 хештега)
* Наличие '\n' в конце файла и в конце каждого квадрата
* Наличие смежностей всех '#' с другими (каждый хештег соединен с другим). Правильный '#' должен иметь сумму 6 или 8 (для квадрата). Каждому хештегу присваевается такое значение, сколько он имеет рядом соседних '#'. Этот метод подсчета подробно описан в [блоге Beth Nenniger](https://medium.com/@bethnenniger/fillit-solving-for-the-smallest-square-of-tetrominos-c6316004f909).

Валидные тетрамино:

![](https://github.com/G4S-LA/pictures/blob/master/Fillit/possible%20tetramino.png)

Затем мы находим сиволы '#' и превращаем их в координаты (x, y), записывая в структуру, которая является элементом связного списка. После нужно загнать тетримино в левый верхний угол с помощью функции `start_position()`

![](https://github.com/G4S-LA/pictures/blob/master/Fillit/start_position.png)

После этого, рекурсивно пытаемся подставить тетраминки в нименьший квадрат

![](https://github.com/G4S-LA/pictures/blob/master/Fillit/sample_problem_1.png)
![](https://github.com/G4S-LA/pictures/blob/master/Fillit/sample_problem_2.png)
![](https://github.com/G4S-LA/pictures/blob/master/Fillit/sample_problem_3.png)

## :hammer: Как пользоваться?

Собирать проект с помощью команды `make`.
Запустить исполняемую программу
```
./fillit resources/example.txt
```
Файл [*example.txt*](https://github.com/G4S-LA/Fillit/blob/master/resources/example.txt) можно заменить на свой.
