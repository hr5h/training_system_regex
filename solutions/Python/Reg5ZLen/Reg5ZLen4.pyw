# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg5ZLen4")
    str = get_str()
    regex = R"\bvar\b"
    list = re.findall(regex, str)
    put(len(list))








start(solve)
