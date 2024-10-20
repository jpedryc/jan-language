// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterJan",
    products: [
        .library(name: "TreeSitterJan", targets: ["TreeSitterJan"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterJan",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterJanTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterJan",
            ],
            path: "bindings/swift/TreeSitterJanTests"
        )
    ],
    cLanguageStandard: .c11
)
