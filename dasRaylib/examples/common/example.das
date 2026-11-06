options gen2

module example shared public

// Shared by the examples.
require daslib/fio
require strings
require raylib

// raylib examples load "resources/..." relative to where they run. Calling this first makes
// those paths work from any directory.
def public run_from_script_dir {
    let args <- get_command_line_arguments()
    for (arg in args) {
        if (ends_with(arg, ".das")) {
            ChangeDirectory(dir_name(arg))
        }
    }
}
