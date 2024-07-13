[![Swift Package Manager](https://img.shields.io/badge/Swift_Package_Manager-compatible-orange?style=flat-square)](https://img.shields.io/badge/Swift_Package_Manager-compatible-orange?style=flat-square)
[![License](https://img.shields.io/github/license/Phisto/TagLibSPM.svg)](https://github.com/Phisto/TagLibSPM)

# swift-taglib

This is a mirror of the [TagLib](https://taglib.org/) 2.0.1 source modified to make it available as a library via [Swift Package Manager](https://www.swift.org/package-manager/). It uses the [utfccp 4.0.5](https://github.com/nemtrif/utfcpp) library for utf8 string handling. 

## Requirements

- Xcode 15.4+
- swift-tools-version: 5.9+

TagLib library   | macOS  |  iOS   |  tvOS
-----------------|--------|--------|--------
2.0.1            | 10.13+ |    -   |    -

## Installation

### Swift Package Manager

The [Swift Package Manager](https://swift.org/package-manager/) is a tool for automating the distribution of Swift code and is integrated into the `swift` compiler.

Once you have your Swift package set up, adding TagLib as a dependency is as easy as adding it to the `dependencies` value of your `Package.swift`.

```swift
dependencies: [
.package(url: "https://github.com/Phisto/swift-taglib.git", .upToNextMajor(from: "2.0.1"))
]
```

## Usage

See the online  [API documentation ](https://taglib.org/api/) of the TagLib project.

## Updating

To update to the newest TagLib version download the lates source from [taglib.org](https://taglib.org/), replace the content of the taglib source folder with the updated source and copy all headers to the include source folder.

## License

TagLib is released under the [GNU Lesser General Public License (LGPL)](https://www.gnu.org/licenses/). 
