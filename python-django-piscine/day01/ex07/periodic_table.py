def periodic_table():

    f = open('helloworld.html','w')
    table = """
    <!DOCTYPE html>
    <html>
        <head>
            <title>Period table of elements</title>
        </head>
        <body>
            <table>
    """
    f.write(table)
    lines = f.readlines()
    counter = 88
    while counter > 0:
        lines = 
        table = """
                <tr>
                    <td style="border: 1px solid black; padding:10px">
                        <h4>Hydrogen</h4>
                            <ul>
                                <li>No 42</li>
                                <li>H</li>
                                <li>1.00794</li>
                                <li>1 electron</li>
                            </ul>
                    </td>"""
        f.write(table)
        counter -= 1
    f.close()

if __name__ == '__main__':
    periodic_table()
