extern crate cc;

fn main() {
    cc::Build::new()
                .file("src/c/progpow.c")
                .include("src")
                .compile("libprogpow.a");
}