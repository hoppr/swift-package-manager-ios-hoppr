// swift-tools-version: 5.10
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "HopprSDK",
    platforms: [
        .iOS(.v16),
        .tvOS(.v16)
    ],
    products: [
        .library(
            name: "HopprSDK",
            targets: ["HopprSDKTarget"]),
    ],
    targets: [
        .binaryTarget(
            name: "HopprEngine",
            path: "Frameworks/HopprEngine.xcframework"
        ),
        .binaryTarget(
            name: "HopprSdk",
            path: "Frameworks/HopprSdk.xcframework"
        ),
        .binaryTarget(
            name: "OMSDK_Static_Hopprau",
            path: "Frameworks/OMSDK_Static_Hopprau.xcframework"
        ),
        .target(
            name: "HopprSDKTarget",
            dependencies: [
                .target(name: "HopprSdk"),
                .target(name: "HopprEngine"),
                .target(name: "OMSDK_Static_Hopprau")
            ],
            path: "Sources/HopprSDKTarget"
        )
    ]
)
