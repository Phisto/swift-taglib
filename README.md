[![Swift Package Manager](https://img.shields.io/badge/Swift_Package_Manager-compatible-green?style=flat)](https://img.shields.io/badge/Swift_Package_Manager-compatible-green?style=flat)
[![Platforms](https://img.shields.io/badge/Platforms-macOS-green?style=flat)](https://img.shields.io/badge/Platforms-macOS-Green?style=flat)
[![License](https://img.shields.io/github/license/Phisto/swift-taglib.svg?style=flat)](https://github.com/Phisto/swift-taglib)

# swift-taglib

This is a mirror of the [TagLib](https://taglib.org/) 2.0.2 source modified to make it available as a library via [Swift Package Manager](https://www.swift.org/package-manager/). It uses the [utfccp 4.0.6](https://github.com/nemtrif/utfcpp) library for utf8 string handling. 

## Requirements

- Xcode 16.3+
- swift-tools-version: 6.1+
- C++ Language Dialect: -std=gnu++2b

TagLib library   | macOS  |  iOS   |  tvOS
-----------------|--------|--------|--------
2.0.1            | 10.13+ |    -   |    -
2.0.2            | 10.13+ |    -   |    -

## Installation

### Swift Package Manager

The [Swift Package Manager](https://swift.org/package-manager/) is a tool for automating the distribution of Swift code and is integrated into the `swift` compiler.

Once you have your Swift package set up, adding TagLib as a dependency is as easy as adding it to the `dependencies` value of your `Package.swift`.

```swift
dependencies: [
.package(url: "https://github.com/Phisto/swift-taglib.git", .upToNextMajor(from: "2.0.2"))
]
```

  > **In your project that uses the package, set the used C++ Language Dialect to `-std=gnu++2b`.**

## Usage

See the online  [API documentation ](https://taglib.org/api/) of the TagLib project.

## Updating

To update to the newest TagLib version download the lates source from [taglib.org](https://taglib.org/), replace the content of the taglib source folder with the updated source and copy all headers to the include source folder.

## License

TagLib is released under the [**GNU Lesser General Public License v3.0**](./LICENSE).
UTF8-CPP is released under the [**Boost Software License v1.0**](./Sources/utf8/LICENSE).
