<p>
<h1 align=center><strong>Rubeus: API Documentation</strong></h1>
<p/>

<p align=center>
Created by SDSLabs with :heart:
</p>

Every large scale project is incomplete without an exhaustive, and efficient documentation.

Getting started: https://github.com/sdslabs/Rubeus/wiki

API documentation: https://blog.sdslabs.co/Rubeus/

## Workflow
Rubeus uses Java-Doc style commenting and uses a combination of Doxygen and Moxygen to gather
all the code documentation into a single markdown file.

### 1. Write complete documentation
Rubeus aims at documenting all:
* classes
* structures
* member variables
* member functions
* constructors
* destructors
* enumerations
* unions
* macros
* variables
* functions
* *.h files
* *.cpp files

### 2. Use Doxygen to generate XML documentation
Install [Doxygen](https://www.stack.nl/~dimitri/doxygen/manual/install.html)

Generate XML documentation:

```shell
cd docs/
doxygen Doxyfile
```

### 3. Use Moxygen to convert XML to markdown
Install [Moxygen](https://sourcey.com/generating-beautiful-markdown-documentation-with-moxygen/):
```shell
npm install moxygen -g
```

Convert XML to Markdown:

```shell
cd docs/
moxygen --output index.md xml/
```

### 4. We are done! Push your changes, get them merged to `master` and review them at https://blog.sdslabs.co/Rubeus/
