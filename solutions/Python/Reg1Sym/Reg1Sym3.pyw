# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg1Sym3")
    str = get_str()
    regex = R"[^aeiou,. ]"
    list = re.findall(regex, str)
    put(len(list))








start(solve)
