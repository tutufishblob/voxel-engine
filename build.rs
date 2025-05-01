fn main() {
    cc::Build::new()
        .cpp(true)
        .file("renderer/application_renderer.cpp")
        .flag("-std=c++17")
        .flag("-D_GLIBCXX_USE_CXX11_ABI=1")
        .include("renderer")
        .compile("application_renderer");

    println!("cargo:rustc-link-lib=dylib=stdc++");
    println!("cargo:rustc-link-lib=dylib=glfw");
    println!("cargo:rustc-link-lib=dylib=vulkan");

    // No need to tell Cargo to link a static lib unless you actually build one.
}
