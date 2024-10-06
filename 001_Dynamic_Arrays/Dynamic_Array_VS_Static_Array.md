Comparison Table of "Dynamic Arrays vs Static Arrays"

| Feature               | Static Arrays                     | Dynamic Arrays                    |
| --------------------- | --------------------------------- | --------------------------------- |
| **Size**              | Fixed, known at compile time      | Flexible, determined at runtime   |
| **Memory Allocation** | Stack                             | Heap                              |
| **Memory Management** | Automatic                         | Manual (`new`/`delete[]`)         |
| **Resizing**          | Not possible                      | Possible (with reallocation)      |
| **Performance**       | Faster, less overhead             | Slightly slower due to overhead   |
| **Scope**             | Automatic based on function/block | Manual, based on `delete[]` usage |
| **Use Case**          | Simple, fixed-size data           | Variable-size data, flexibility   |
