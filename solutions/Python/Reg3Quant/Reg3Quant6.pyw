# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg3Quant6")
    str = get_str()
    regex = R"\([^()]{0,5}\)|\([^()]+\s[^()]*\)"
    list = re.findall(regex, str)
    for it in list:
        put(it)








start(solve)
