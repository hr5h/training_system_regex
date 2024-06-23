# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg2Esc3")
    str = get_str()
    regex = R"\\t"
    list = re.findall(regex, str)
    put(len(list))








start(solve)
