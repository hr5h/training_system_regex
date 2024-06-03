# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg3Quant1")
    str = get_str()
    regex = R"[a-z]+"
    list = re.findall(regex, str, re.I)
    for it in list:
        put(it)







start(solve)
