import sys, re, os, settings


def render(argv):

    if (len(argv) != 2):
        return

    if not (argv[1].endswith('.template')):
        return

    try:
        with open(argv[1], 'r') as f:
            line = f.read()
    except IOError:
        return

    line = line.format(title = settings.title, name = settings.name, surname = settings.surname, age = settings.age, profession = settings.profession)

    try:
        with open("myCV.html", 'w') as w:
            w.write(line)
    except IOError:
        return


if __name__ == '__main__':
    render(sys.argv)
