#!/usr/local/bin/python3.3
"""
Дан текст, который содержит различные английские буквы и знаки препинания.
Вам необходимо найти самую частую букву в тексте.
Результатом должна быть буква в нижнем регистре.
При поиске самой частой буквы, регистр не имеет значения,
так что при подсчете считайте, что "A" == "a".
Убедитесь, что вы не считайте знаки препинания, цифры и пробелы, а только буквы.
Если в тексте две и больше буквы с одинаковой частотой,
тогда результатом будет буква, которая идет первой в алфавите.
Для примера, "one" содержит "o", "n", "e" по одному разу,
так что мы выбираем "e".
Вх. данные: Текст для анализа, как строка (str, unicode).
Вых. данные: Наиболее частая буква, как строка.
Предусловия:
text содержит только ASCII символы.
0 < len(text) ≤ 105
"""

def checkio(text):
    #В нижний регистр
    text = text.lower()
    #Список, состоящий только из букв из введенной строки
    textAlpha = []
    #Выбираем буквы и кидаем их в список букв, с которым будем работать
    for x in text:
        if x.isalpha():
            textAlpha.append(x)

    lch = {}
    #Составим словарь, где ключ - это буква, а значение - это число повторений
    for x in textAlpha:
        lch[x] = textAlpha.count(x)

    #Теперь необходимо отсортировать этот словарь
    #сортируем так, чтобы наиболее частые буквы были в начале
    result = sorted(lch.items(), key=lambda t: t[1], reverse=True)

    #Первая пара (ключ,значение) - она же (буква:число_повторений)
    #Число повторений
    max = result[0][1]
    #Первая буква
    letter = result[0][0]
    #Теперь идем и смотрим, если число повторений становится меньше,
    #чем максимальное, то выходим
    #Если буква меньше, т.е раньше в алфавите стоит, чем та, что первая,
    #которую мы выбрали, то букву пишем уже новую.
    for iteritem in result:
        if iteritem[1] < max:
            break

        if iteritem[0] < letter:
            letter = iteritem[0]


    return letter

import string
"""
Another interesting solution.
"""
def checkio2(text):
    """
    We iterate through latyn alphabet and count each letter in the text.
    Then 'max' selects the most frequent letter.
    For the case when we have several equal letter,
    'max' selects the first from they.
    """
    text = text.lower()
    return max(string.ascii_lowercase, key=text.count)


if __name__ == '__main__':
    #These "asserts" using only for self-checking and not necessary for auto-testing
    assert checkio("Hello World!") == "l", "Hello test"
    assert checkio("How do you do?") == "o", "O is most wanted"
    assert checkio("One") == "e", "All letter only once."
    assert checkio("Oops!") == "o", "Don't forget about lower case."
    assert checkio("AAaooo!!!!") == "a", "Only letters."
    assert checkio("abe") == "a", "The First."
    print("Start the long test")
    assert checkio("a" * 9000 + "b" * 1000) == "a", "Long."
    print("The local tests are done.")
