# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg9Mix8")
    str = get_str()
    regex = R"""
    (?:
        (?:сегодня|завтра|вчера)
    |
        \d{1,2}
        (?:\s+)?
        (?:января|февраля|марта|апреля|мая|июня|июля|августа|сентября|октября|ноября|декабря)
        (?:\s+)?
        (?:\d{4})?
        (?:\s+)?
        (?:года)?
    )
    """
    list = re.findall(regex, str, re.VERBOSE | re.I)
    for it in list:
        put(it)








start(solve)
