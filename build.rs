fn main() {
    cc::Build::new()
        .cpp(true)
        .pic(true)
        .file("renderer/application_renderer.cpp")
        .flag("-std=c++17")
        .flag("-D_GLIBCXX_USE_CXX11_ABI=1")
        .include("renderer")
        
        .compile("application_renderer");

        println!("cargo:rustc-link-lib=dylib=stdc++");
        println!("cargo:rustc-link-lib=static=application_renderer");
        println!("cargo:rustc-link-search=native=.");
        println!("cargo:rustc-link-lib=dylib=vulkan");
        println!("cargo:rustc-link-lib=dylib=glfw");
}
