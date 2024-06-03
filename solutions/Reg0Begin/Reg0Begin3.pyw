# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg0Begin3")
    str = get_str()
    regex = R"\b\w{5}\b"
    list = re.findall(regex, str)
    for it in list:
        put(it)
# re.findall(regex, str) -  ищет все вхождения шаблона regex в строке `str`.
# `\b` -  граничная позиция, обозначающая начало или конец слова.
# `\w` -  соответствует букве, цифре или подчеркиванию.
# '{5}' - точно соответствует 5 раз.








start(solve)
