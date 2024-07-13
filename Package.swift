// swift-tools-version: 5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "swift-taglib",
    platforms: [
        .macOS(.v13)
    ], products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "TagLib",
            targets: ["TagLib"]),
    ], targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .target(
            name: "TagLib",
            swiftSettings: [
                .interoperabilityMode(.Cxx),
                .unsafeFlags(["-std=gnu++2b"]),
            ]),
    ],
    cxxLanguageStandard: CXXLanguageStandard.gnucxx2b
)
