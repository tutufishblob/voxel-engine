#[link(name = "application_renderer")]
extern "C" {
    //fn test_function();
    fn start();
}

fn main() {
    unsafe {
        //test_function();

        start();
    }

    

}
