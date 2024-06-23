# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg9Mix1")
    str = get_str()
    regex = R"(([01]\d|2[0-3])(:[0-5]\d){2})"
    list = re.findall(regex, str)
    for it in list:
        put(it[0])








start(solve)
