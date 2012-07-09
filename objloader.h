#ifndef OBJLOADER_H
#define OBJLOADER_H

#include <vector>

void parse(const char* filename, std::vector<float>* vertices,
                                 std::vector<float>* normals,
                                 std::vector<float>* textures,
                                 std::vector<unsigned short>* f_indices,
                                 std::vector<unsigned short>* n_indices,
                                 std::vector<unsigned short>* t_indices);

#endif // OBJLOADER_H
