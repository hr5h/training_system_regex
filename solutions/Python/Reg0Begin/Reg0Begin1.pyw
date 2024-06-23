# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg0Begin1")
    str = get_str()
    regex = R"\d+"
    list = re.findall(regex, str)
    for it in list:
        put(it)
        
# re.findall(regex, str) -  ищет все вхождения шаблона regex в строке `str`.
# \d+ - соответствует одному или более цифрам (0-9).


start(solve)