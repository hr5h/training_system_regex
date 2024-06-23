# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg3Quant8")
    str = get_str()
    regex = R"\s{3,}"
    replace = " "
    res = re.sub(regex, replace, str)
    put(res)








start(solve)
