#!/bin/bash
# create_static_lib.sh
# Description: Script to create a static library called liball.a from all .c files in the current directory
# Function to display error messages
print_error() {
echo "Error: $1" >&2
}
# Function to display usage instructions
print_usage() {
echo "Usage: $0"
echo "Description: Create a static library called liball.a from all .c files in the current directory"
}
# Check for the correct number of arguments
if [ "$#" -ne 0 ]; then
print_error "Invalid number of arguments"
print_usage
exit 1
fi
# Compile .c files and create object files
for file in *.c; do
gcc -c -Wall -Werror -Wextra "$file" -o "${file%.c}.o"
done
# Create static library
ar rcs liball.a *.o
# Clean up object files
rm -f *.o
# Print success message
echo "Static library liball.a created successfully!"
