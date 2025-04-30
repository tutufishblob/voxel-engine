fn main() {
    cc::Build::new()
        .cpp(true)
        .pic(true)                         // ← enable PIC
        .file("renderer/vulkan_renderer.cpp")
        .include("renderer")
        .compile("vulkan_renderer");

        println!("cargo:rustc-link-lib=dylib=vulkan");
        println!("cargo:rustc-link-lib=dylib=glfw");
}
