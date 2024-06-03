# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg4Group3")
    str = get_str()
    regex = R"\w*(\w)\1\w*"
    replace = "word"
    res = re.sub(regex, replace, str)
    put(res)








start(solve)
