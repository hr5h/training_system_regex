# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg0Begin5")
    str = get_str()
    regex = R"\d{2}\.\d{2}\.\d{4}"
    list = re.findall(regex, str)
    for it in list:
        put(it)
# re.findall(regex, str) -  ищет все вхождения шаблона regex в строке `str`.
# `\d{2}` -  соответствует двум цифрам.
# `\.` -  соответствует символу точки.
# `\d{4}` -  соответствует четерым цифрам.








start(solve)
