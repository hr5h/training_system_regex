# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg4Group1")
    str = get_str()
    regex = R"([A-Z][a-z]*)|([a-z]+)"
    matches = re.findall(regex, str)
    uppercasewords = [m[0] for m in matches if m[0]]
    lowercasewords = [m[1] for m in matches if m[1]]
    put(len(uppercasewords))
    put(len(lowercasewords))








start(solve)
