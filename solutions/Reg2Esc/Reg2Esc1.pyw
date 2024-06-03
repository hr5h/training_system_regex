# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg2Esc1")
    str = get_str()
    regex = R"\[\]"
    res = re.search(regex, str)
    if res:
        put(True)
    else:
        put(False)








start(solve)
