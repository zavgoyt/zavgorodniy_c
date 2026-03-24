#!/bin/bash
# create_c_files.sh - Creates 10 C source files

# Create the files
for i in {41..50}; do
    filename="task_${i}.c"
    
    # Add basic C template content
    cat > "$filename" << EOF
#include <stdio.h>

int main() {
    printf("Hello from program $i\\n");
    return 0;
}
EOF
    
    echo "Created: $filename"
done

echo "Done! 10 C files created."
