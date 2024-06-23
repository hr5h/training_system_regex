# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg0Begin6")
    str = get_str()
    regex = R"\s"
    replace = "_"
    res = re.sub(regex, replace, str)
    put(res)
# re.sub(regex, replace, str) – метод заменяет все вхождения шаблона 'regex' в строке 'str' на заданную замену 'replace'.
# `\s` - соответствует любому пробельному символу.








start(solve)
