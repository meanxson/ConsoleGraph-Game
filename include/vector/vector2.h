#ifndef CONSOLEGRAPH_GAME_VECTOR_H
#define CONSOLEGRAPH_GAME_VECTOR_H

struct vector2 {
    float x, y;

    vector2(vector2 const &other) : x(other.x), y(other.y) {}

    vector2(float x, float y) : x(x), y(y) {}

    ~vector2() = default;

    vector2 operator+(vector2 const &other) {
        return vector2(x + other.x, y + other.y);
    }

    vector2 operator-(vector2 const &other) {
        return vector2(x - other.x, y - other.y);
    }

    vector2 operator*(vector2 const &other) {
        return vector2(x * other.x, y * other.y);
    }

    vector2 operator/(vector2 const &other) {
        return vector2(x / other.x, y / other.y);
    }
};

#endif //CONSOLEGRAPH_GAME_VECTOR_H
