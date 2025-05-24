// swift-tools-version: 6.1
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "swift-taglib",
    platforms: [
        .macOS(.v13)
    ],
    products: [
        .library(
            name: "TagLib",
            targets: ["TagLib"]),
    ], 
    targets: [
        .target(
            name: "TagLib",
            swiftSettings: [
                .interoperabilityMode(.Cxx),
            ]
        ),
    ],
    cxxLanguageStandard: CXXLanguageStandard.gnucxx2b
)
