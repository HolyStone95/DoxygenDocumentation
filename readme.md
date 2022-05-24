# DTDataGlove

## Genereal Information

![](images/doxy.jpg)

- Index:
  1. [General Information](#general-information)
  2. [Installation](#install)
          - [Doxygen](#doxygen)
          - [Doxywizard](#doxywizard)
  3. [Looking At Code Examples](#looking-at-code-examples)
  4. [Create Documentation](#create-documentation)
          - [Using Doxywizard Gui](#using-doxywizard-gui)
          - [Using Only Doxygen](#using-only-doxygen)
  5. [Authors](#authors)
          - [Software](#software)
          - [README](#readme)

This simple package is not supposed to run any code or application, it is not compilable and it shoudn't. This project simply is composed of  some example source code files ( one for python and one for cpp ) providing simple templates for documenting source code. I will illustrate how to install and set **Doxygen** and how to generate the documentation, both with the *Manual* method ( generating a Doxyfile and compiling it ) and with the *Automated* method thanks to a *gui* called **Doxywizard**.

>Note : The provided installation is only for Ubuntu, but it should be very similar for other OS. Nevertheless, the official documentation and installation guides exists in the official website of Doxygen.

## Install

### Doxygen

```bash
$ sudo apt-get install –y doxygen
$ sudo apt-get install doxygen-gui
```

### Doxywizard

```bash
$ sudo apt-get install doxygen-gui
```

## Looking At Code Examples

Now take a look to the examples provided in the folders *cpp* and *python*, then choose a way to generate the documentation.

## Create Documentation

Create the documentation using one of the two following methods, they're equivalent. The documentation page could be visualized, once it's been generated, opening the file contained in the folder that will be selected as the *destination* folder for the generated documentation, precisely under the subfolder *html*, and the file is called **index.html**.

### Using Doxywizard Gui

Let's use this project to a first documentation tutorial: first of all create a folder named as you like, for convenience I'll call it as the root folder name:

```bash
.../DoxygenDocumentation$ mkdir DoxygenDocumentation
```
Now, even in the same terminal run
```bash
$ doxywizard
```
A Gui will pop up. Now in the first tab called *Wizard*, section *Project* complete the two steps necessary inserting the *root* folder of your project, then specify the source code specific directory ( I suggest to simply put again the entire root project folder and simply activate the option *"scan recursively"*). As last you just need to insert the destination folder for the documentation, in my case is *.../DoxygenDocumentation/DoxygenDocumentation/*. This folder will be then populated with two other folders, one for *html* documentation and the other for documentation in *latex* format.

![](images/doxy_project.jpg)

While in the *Wizard* tab, take a look at the *Mode* section, which will enable the documentation for all entities, or just for the commented ones, and also some option for optimizing the documentation based on the file formats that we want to document. The *Output* section allows you to choose even more documentation formats for the output, and the *Diagrams* section allows you to generate different kind of diagrams.

![](images/doxy_mode.jpg)

Now, we've finished with the *Wizard* tab, let's move on to the *Expert* tab, that allows you to modify the original *Doxyfile* using a Gui. The most important section here in the *HTML* one, which allows you to modify some appearances of the documentation that you will generate.

![](images/doxy_expert.jpg)

Once we finish with this tab, let's go to the *Run* panel and simply press the button *Run doxygen* and the documentation will be generated.

![](images/doxy_run.jpg)

### Using Only Doxygen

What will happen at low level is exatcly the same that the Gui presents at higher level : a configuration file will be generated, and after we modify some options, decide the name of the project, specify the directories in which *Doxygen* will look for source code, running doxy will generate the documentation.

Let's call our Doxyfile *"example_config"*

```bash
.../DoxygenDocumentation$ doxygen -g example_config
```
Then you can edit the default configuration file to serve your needs. The options are explained in the file. Some of the important things you need to pay attention to are:

    the name of your project:
```
PROJECT_NAME = 'your project name'
```
    the input files (relative to the directory where you run doxygen):
```
INPUT = ../include ../src
```
    the directory where to put the documentation (if you leave it empty, then the documentation will be created in the directory where you run doxygen):
```
OUTPUT_DIRECTORY = 'your output directory'
```
    the type of documentation you want to generate (HTML, LaTeX and/or something else):
```
GENERATE_HTML = YES
```
    If HTML chosen, the following tells doxygen where to put the html documentation relative to OUTPUT_DIRECTORY:
```
HTML_OUTPUT = html/
```
and
```
HTML_FILE_EXTENSION = .html
```

Once you're finished editing the configuration file you just need to run:

```bash
$ doxygen example_config
```

You'll see that the documentation is being generated.

## Authors

### Software

- Iacopo Pietrasanta(iacopo.pietrasanta@iit.it)

### README

- Iacopo Pietrasanta(iacopo.pietrasanta@iit.it)
