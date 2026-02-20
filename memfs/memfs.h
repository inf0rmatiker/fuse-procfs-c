#pragma once

struct memfs;

// Initializes and returns a pointer to an in-memory filesystem.
struct memfs * memfs_init();
