class Actor {

public:
    enum class Type {
        STATIC,
        DYNAMIC
    }

private:
    Vector2 position;
    float rotation;
    Type type;

public:
    Vector2 GetPosition() { return position; };
    float GetRotation() { return rotation; };
    Type GetType() { return type; };
}
