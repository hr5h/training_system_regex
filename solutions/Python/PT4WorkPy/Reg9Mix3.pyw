# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg9Mix3")
    str = get_str()
    regex = R"((0[1-9]|[12][0-9]|[3][01])[/.](0[1-9]|1[0-2])[/.](19|20)\d\d)"
    list = re.findall(regex, str)
    for it in list:
        put(it[0])








start(solve)
