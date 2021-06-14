#!/usr/bin/env python
# This file is part of Mo++.
# Copyright (C) 2021 by Yuxuan Song <https://github.com/Songtech-0912>
# and Ravi Arora <https://github.com/PhantomzBack/>
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.

"""
Filename:
    svg_to_yaml.py

Function:
    Generates boilerplate YAML based on icons placed in the
    `blender-icons/sets/Lcn-NIS8Eh8o/` folder

Important notes:
    - Code should be formatted by black and checked for bugs by pylint
    - Keep dependencies to a minimum, write your own libraries whenever
      possible
    - TODOs should not be placed within code, they should be placed
      in a separate roadmap
    - Please comment the code well
    - Readability first: space code over several files rather than squeezing 
      it into one very long file
"""

import sys, os, platform
from qtpy.QtWidgets import (
    QApplication,
    QMainWindow,
)

# Fix problems for high DPI screens
os.environ["QT_FONT_DPI"] = "96"

# UI driver
class MainWindow(QMainWindow):
    def __init__(self):
        QMainWindow.__init__(self)
        # Create app name and set window dimensions
        self.setWindowTitle("Mo++")
        self.setGeometry(100, 100, 800, 600)

# Start application
if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec_())
