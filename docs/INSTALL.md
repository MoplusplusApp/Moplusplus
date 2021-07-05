# Installing Mo++

Mo++ offers two installation methods:

* Installing via downloading a pre-compiled binary archive
* Installing via source code

For most uesrs, the first option is the preferred option, but if you want to contribute to Mo++'s development or customize it to your liking, the second option is also explained.

## Installing via the pre-compiled binary

## Installing via compiling the source code

Follow these instructions if you want to install Mo++ from source.

### Prerequisites

To be able to install Mo++ from source, you will need these things ready:

- [Git](https://git-scm.com)
- [GNU make](#) (or Windows equivalent)
- [GCC](#) or [Clang](#) or [MSVC](#) or [Mingw](#)
- [Python 3.9](#) or above

To test that your system is ready for compiling Mo++, open a terminal and run this command on Linux or MacOS:

```
curl https://raw.githubusercontent.com/asfjsadf/something.sh
```

Or if you are a Windows user, run this script in Windows terminal:

```
curl https://raw.githubusercontent.com/asfjsadf/something.bat
```

If the script returns an error, consult the [troubleshooting guide](#). If no errors were found, you can continue to the next step.

### Dependencies

Mo++ has the following dependencies:

- Qt 5
- QtPy

In order to install Qt 5, do...

In order to install QtPy, do...

### Building

Now, you can begin the actual compiling. You'll first need to clone the repository:

```
git clone https://github.com/Moplusplus-Editor/Moplusplus.git --recursive && cd Moplusplus
```

Next, you'll need to update all of the submodules:

```
git submodule update -i --recursive
```

Finally, you can build. To do this, make a build folder:

```
mkdir build && cd build
```

And then begin compiling:

```
qmake -r ../Moplusplus.pro && make
```

If all goes correctly, the compiled binary, which will be a single file, should be found in `./Mo++`
