# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg3Quant5")
    str = get_str()
    regex = R"\d{3}-\d{3}-\d{3} \d{2}"
    list = re.findall(regex, str)
    for it in list:
        put(it)








start(solve)
