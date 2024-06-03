# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg1Sym1")
    str = get_str()
    regex = R"[bcr]at"
    list = re.findall(regex, str)
    for it in list:
        put(it)


start(solve)