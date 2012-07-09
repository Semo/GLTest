#ifndef OBJLOADER_H
#define OBJLOADER_H

#include <vector>

/**
 * Diese Klasse ist eine Utility Klasse, die dazu dient OBJ Dateien mit Vertices,
 * Faces und Normalen zu Laden und dem GL-Kontext bereitzustellen.
 *
 * @author François Dubois <siokdub@gmail.com>
 * @author Sebastian Morkisch <semox78@gmail.com>
 *
 * @brief parse
 * @param filename
 * @param vertices
 * @param normals
 * @param textures
 * @param f_indices
 * @param n_indices
 * @param t_indices
 */

void parse(const char* filename, std::vector<float>* vertices,
                                 std::vector<float>* normals,
                                 std::vector<float>* textures,
                                 std::vector<unsigned short>* f_indices,
                                 std::vector<unsigned short>* n_indices,
                                 std::vector<unsigned short>* t_indices);

#endif // OBJLOADER_H
