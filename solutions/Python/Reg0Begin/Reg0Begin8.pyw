# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg0Begin8")
    str = get_str()
    regex = R"\s+"
    res = re.search(regex, str)
    if res:
        put(True)
    else:
        put(False)
# `re.search(pattern, string)` -  ищет первое вхождение шаблона `regex` в строке`str`.
# `\s+` -  соответствует одному или более пробельным символам.








start(solve)
