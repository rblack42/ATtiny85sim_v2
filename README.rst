ATtiny85 Simulator
##################

:Author: Roie R. Black
:Email: rblack@austincc.edu
:Date: Mar 3, 2018
:Course: *COSC2325 - Computer Architecture and Machine Language*
:Website: `Lecture Notes <http://www.co-pylit.org/courses/cosc2325/index.html>`_

..  image:: https://travis-ci.org/rblack42/ATtiny85sim.svg?branch=master
    :alt: Build badge from Travis-CI

..  image:: https://img.shields.io/badge/License-BSD%203--Clause-blue.svg
    :alt: BSD 3-Clause License


This project implement a simple simulator for a subset of the ``attiny85`` AVR
processor, This system is used in a beginners course on computer architecture.
This course is taught at Austin Community College in Austin, Texas,

This project is driven by two ``Makefiles``. The top level one builds a Docker image for testing in tunder Ubuntu Linux. Inside the ``code`` directory, the second Makefile manages building and running the actial project code.

Type ``make help`` at either level to see what commands are available.

