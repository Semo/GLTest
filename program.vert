attribute vec3 vertexAttribute;
attribute vec3 colorAttribute;

uniform mat4 modelMatrix;
uniform mat4 viewMatrix;
uniform mat4 projectionMatrix;

varying vec3 outColor;

void main() {

    outColor = colorAttribute;

    // MVP
    gl_Position = (projectionMatrix * viewMatrix * modelMatrix) * vec4(vertexAttribute,1.0);

}
