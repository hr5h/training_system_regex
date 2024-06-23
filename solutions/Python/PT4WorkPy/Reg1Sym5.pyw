# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg1Sym5")
    str = get_str()
    regex = R"19[78][^3-6]"
    replace = "2024"
    res = re.sub(regex, replace, str)
    put(res)








start(solve)
