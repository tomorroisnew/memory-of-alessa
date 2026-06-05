#ifndef MODEL3_CLUSTER_N_SHARED_H
#define MODEL3_CLUSTER_N_SHARED_H

#include "common.h"
#include "Chacter/character.h"

#define MAX_N_CLUSTERS 0x300

typedef struct Cluster {
    // total size: 0x8
    u_int n_nodes;        // offset 0x0, size 0x4
    u_int element_offset; // offset 0x4, size 0x4
} Cluster;

typedef struct ClusterElement {
    // total size: 0x8
    short x;     // offset 0x0, size 0x2
    short y;     // offset 0x2, size 0x2
    short z;     // offset 0x4, size 0x2
    short index; // offset 0x6, size 0x2
} ClusterElement;

typedef struct DefaultClusterNode {
    // total size: 0x6
    short x; // offset 0x0, size 0x2
    short y; // offset 0x2, size 0x2
    short z; // offset 0x4, size 0x2
} DefaultClusterNode;

#endif // MODEL3_CLUSTER_N_SHARED_H
