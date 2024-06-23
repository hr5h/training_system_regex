# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg3Quant3")
    str = get_str()
    regex = R"[A-Z][a-z]{4,}"
    list = re.findall(regex, str)
    put(len(list))








start(solve)
