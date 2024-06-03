# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg3Quant9")
    str = get_str()
    regex = R"\b__?_?\b"
    res = re.search(regex, str)
    if res:
        put(True)
    else:
        put(False)








start(solve)
