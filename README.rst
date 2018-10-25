ATtiny85 Simulator
##################

:Author: Roie R. Black
:Email: rblack@austincc.edu
:Date: Oct 21, 2018
:Course: *COSC2325 - Computer Architecture and Machine Language*
:Website: `Lecture Notes <http://www.co-pylit.org/courses/cosc2325/index.html>`_

..  image:: https://travis-ci.org/rblack42/ATtiny85sim.svg?branch=master
    :alt: Build badge from Travis-CI

..  image:: https://img.shields.io/badge/License-BSD%203--Clause-blue.svg
    :alt: BSD 3-Clause License

` This project is an implementation of a simple simulator for a subset of the
``ATtiny85`` AVR processor, This simulator is used in a beginner's Computer Architecture.
This course has been taught at Austin Community College in Austin, Texas from
2014-2018.

This project is driven by two ``Makefiles``. The top level one builds a Docker
image for testing. Inside the ``ATtiny85`` directory, the second
Makefile manages building and running the actual project code.

Type ``make help`` at either level to see what build commands are available.

