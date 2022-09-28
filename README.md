[![Carthage Compatible](https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat)](https://github.com/Carthage/Carthage)
[![License](https://img.shields.io/github/license/Phisto/TagLib.svg)](https://github.com/Phisto/TagLib)

## Overview

This is a mirror of the [TagLib](https://taglib.org/) 1.12 source and will build a dynamic framework for macOS.

It is slightly tuned to address some XCode warnings and uses the project settings recommended by XCode.


## Requirements

- macOS 10.10+
- Xcode 14.0.1+


## Installation

### Carthage

[Carthage](https://github.com/Carthage/Carthage) is a decentralized dependency manager that builds your dependencies and provides you with binary frameworks. To integrate LAME into your Xcode project using Carthage, specify it in your `Cartfile`:

```ogdl
github "Phisto/TagLib" ~> 1.0
```

### Manually

If you prefer not to use Carthage, you can integrate TagLib into your project manually.
You need to build and add the TagLib framework (TagLib.framework) to your project yourself. 


## Usage

See the online  [API documentation ](https://taglib.org/api/) of the TagLib project.


## Updating

To update to the newest TagLib version download the lates source from [taglib.org](https://taglib.org/), and replace the taglib-src folder in the project with the one in the downloaded source folder.


## License

TagLib is released under the [GNU Lesser General Public License (LGPL)](https://www.gnu.org/licenses/). 

