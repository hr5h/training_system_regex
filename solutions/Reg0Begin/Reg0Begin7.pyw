# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg0Begin7")
    str = get_str()
    regex = R"#\w+"
    list = re.findall(regex, str)
    for it in list:
        put(it)
# re.findall(regex, str) -  ищет все вхождения шаблона regex в строке `str`.
# `#\w+` -  ищет хэштеги, начинающиеся с символа #, за которым следуют буквы, цифры или подчеркивания.








start(solve)
