
class game {
private:
    bool m_isGameActive;

public:
    ~game() = default;

    bool getAppState();

    void update();

    void start();
};
