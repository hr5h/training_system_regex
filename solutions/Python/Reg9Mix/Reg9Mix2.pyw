# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg9Mix2")
    str = get_str()
    regex = R"(([0-9A-F]{2}([-]|)){6}|([0-9a-f]{2}([:]|)){6}|([0-9a-f]{4}([.]|)){3})"
    list = re.findall(regex, str)
    for it in list:
        put(it[0])








start(solve)
