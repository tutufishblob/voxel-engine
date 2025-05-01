fn main() {
    cc::Build::new()
        .cpp(true)
        .pic(true)
        .flag("-std=c++17")
        .flag("-D_GLIBCXX_USE_CXX11_ABI=1")
        .include("renderer")
        .files([
            "renderer/application_renderer.cpp",
            "renderer/spawn_window.cpp",
            "renderer/vulkan_renderer.cpp",
            "renderer/spawn_pipeline.cpp",
        ])
        .compile("application_renderer");

    println!("cargo:rustc-link-lib=dylib=stdc++");
    println!("cargo:rustc-link-lib=dylib=vulkan");
    println!("cargo:rustc-link-lib=dylib=glfw");
}
