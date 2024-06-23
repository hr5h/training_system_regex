# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg1Sym2")
    str = get_str()
    regex = R"[0-9A-F]{3}"
    list = re.findall(regex, str)
    for it in list:
        put(str.index(it))








start(solve)
