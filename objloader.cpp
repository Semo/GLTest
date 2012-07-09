#include "objloader.h"
#include <fstream>
#include <sstream>
#include <QDebug>
#include <cstring>
#include <iostream>

using namespace std;


void parse(const char* filename, vector<float>* vertices,
           vector<float>* normals,
           vector<float>* textures,
           vector<unsigned short>* f_indices,
           vector<unsigned short>* n_indices,
           vector<unsigned short>* t_indices) {

  ifstream input(filename);

  string line;
  string name;

  if(!input.is_open()) {
      qDebug("File not opened");
    } else {

      while(getline(input,line)) {

          if(line == "" || line[0] == '#') {
              continue;
            }

          istringstream lineStream(line);
          lineStream >> name;

          // vertex coords
          if(name == "v") {
              float vertex[3];
              lineStream >> vertex[0] >> vertex[1] >> vertex[2];
              vertices->push_back(vertex[0]);
              vertices->push_back(vertex[1]);
              vertices->push_back(vertex[2]);
            }

          //normal coords
          else if(name == "vn") {
              float normal[3];
              lineStream >> normal[0] >> normal[1] >> normal[2];
              normals->push_back(normal[0]);
              normals->push_back(normal[1]);
              normals->push_back(normal[2]);
            }

          //texture coords
          else if(name == "vt") {
              float texture[2];
              sscanf(line.c_str(), "%*s %f %f", &texture[0], &texture[1]);
              textures->push_back(texture[0]);
              textures->push_back(texture[1]);
            }

          // indices
          else if(name == "f") {
              int index[12];
              int f_index[4];
              int n_index[4];
              int t_index[4];

              //                int count = sscanf(line.c_str(), "%*s %d/%d/%d %d/%d/%d %d/%d/%d %d/%d/%d",
              //                       &f_index[0], &n_index[0], &t_index[0],
              //                       &f_index[1], &n_index[1], &t_index[1],
              //                       &f_index[2], &n_index[2], &t_index[2],
              //                       &f_index[3], &n_index[3], &t_index[3]);

              for (int i = 0; i < 12; ++i) {
                  lineStream >> index[i];
                  //                  cout << index[i] << " ";
                  lineStream.get ();
                }

              //              cout << endl;

              f_index[0] = index[0];
              f_index[1] = index[3];
              f_index[2] = index[6];
              f_index[3] = index[9];

              f_indices->push_back((unsigned short)f_index[0]);
              f_indices->push_back((unsigned short)f_index[1]);
              f_indices->push_back((unsigned short)f_index[2]);
              f_indices->push_back((unsigned short)f_index[3]);
              n_indices->push_back((unsigned short)n_index[0]);
              n_indices->push_back((unsigned short)n_index[1]);
              n_indices->push_back((unsigned short)n_index[2]);
              n_indices->push_back((unsigned short)n_index[3]);
              t_indices->push_back((unsigned short)t_index[0]);
              t_indices->push_back((unsigned short)t_index[1]);
              t_indices->push_back((unsigned short)t_index[2]);
              t_indices->push_back((unsigned short)t_index[3]);
            }
        };
    }
}


