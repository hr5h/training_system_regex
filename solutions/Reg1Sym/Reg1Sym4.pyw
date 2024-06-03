# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg1Sym4")
    str = get_str()
    regex = R"[a-z][a-z][^y ]"
    list = re.findall(regex, str)
    count = 0
    for it in list:
        count += 1
        put(f"{count}) {it};")








start(solve)
