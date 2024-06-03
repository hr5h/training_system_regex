# В Python, регулярные выражения доступны в библиотеке re.
# re – это модуль Python, содержащий методы для работы с регулярными выражениями.
import re
from pt4 import *
def solve():
    task("Reg4Group2")
    str = get_str()
    regex = R"(?P<tel>\+7\d{10})\s(?P<name>[A-Z|А-Я|a-z|а-я]+)"
    matches = re.findall(regex, str)
    for it in matches:
        phone, name = it
        put(f"Tel: {phone} Name: {name}")








start(solve)
