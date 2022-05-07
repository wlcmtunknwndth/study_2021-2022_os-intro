---
## Front matter
title: "Отчет по индивидуальному проекту"
subtitle: "Стадия 1"
author: "Петров Артем Евгеньевич"

## Generic otions
lang: ru-RU
toc-title: "Содержание"

## Bibliography
bibliography: bib/cite.bib
csl: pandoc/csl/gost-r-7-0-5-2008-numeric.csl

## Pdf output format
toc: true # Table of contents
toc-depth: 2
lof: true # List of figures
lot: true # List of tables
fontsize: 12pt
linestretch: 1.5
papersize: a4
documentclass: scrreprt
## I18n polyglossia
polyglossia-lang:
  name: russian
  options:
	- spelling=modern
	- babelshorthands=true
polyglossia-otherlangs:
  name: english
## I18n babel
babel-lang: russian
babel-otherlangs: english
## Fonts
mainfont: PT Serif
romanfont: PT Serif
sansfont: PT Sans
monofont: PT Mono
mainfontoptions: Ligatures=TeX
romanfontoptions: Ligatures=TeX
sansfontoptions: Ligatures=TeX,Scale=MatchLowercase
monofontoptions: Scale=MatchLowercase,Scale=0.9
## Biblatex
biblatex: true
biblio-style: "gost-numeric"
biblatexoptions:
  - parentracker=true
  - backend=biber
  - hyperref=auto
  - language=auto
  - autolang=other*
  - citestyle=gost-numeric
## Pandoc-crossref LaTeX customization
figureTitle: "Рис."
tableTitle: "Таблица"
listingTitle: "Листинг"
lofTitle: "Список иллюстраций"
lotTitle: "Список таблиц"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

Создание сайта для академических нужд

# Задание

Создать первоначальный статический сайт с помощью hugo и шаблона. Запустить его на хостинге github.
# Теоретическое введение

- Выполнение происходит с помощью hugo (https://github.com/gohugoio/hugo/releases), на сайте github. 

- cd -смена директории
-  
# Выполнение лабораторной работы

Описываются проведённые действия, в качестве иллюстрации даётся ссылка на иллюстрацию (рис. [-@fig:001])

![Название рисунка](image/placeimg_800_600_tech.jpg){ #fig:001 width=70% }

## Скачивание Hugo
- Перейдем по ссылке в теоретический сведениях. Скачаем самую последнюю версию. Выбираем архив hugo_extended_0.98.0_Linux-64bit.tar.gz
- Разархивируем его и перенесем исполняем файл.

```
1. sudo mv ~/Downloads/hugo_extended_0.98.0_Linux-64bit/hugo
/usr/local/bin
```

-Создадим я

```
1. cd
2. cd work
3. git clone --recursive git@github.com:wlcmtunknwndth/aepetrov.git

```

# Выводы

Здесь кратко описываются итоги проделанной работы.

# Список литературы{.unnumbered}

::: {#refs}
:::
