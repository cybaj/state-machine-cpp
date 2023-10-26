#include <iostream>

enum class State {
    Red,
    Yellow,
    Green
};

enum class Event {
    Timeout,
    Emergency
};

class TrafficLightStateMachine {
private:
    State currentState;

public:
    TrafficLightStateMachine() : currentState(State::Red) {}

    void handleEvent(Event event) {
        switch (currentState) {
            case State::Red:
                if (event == Event::Timeout) {
                    currentState = State::Green;
                } else if (event == Event::Emergency) {
                    // Stay in Red
                }
                break;

            case State::Green:
                if (event == Event::Timeout) {
                    currentState = State::Yellow;
                } else if (event == Event::Emergency) {
                    currentState = State::Red;
                }
                break;

            case State::Yellow:
                if (event == Event::Timeout) {
                    currentState = State::Red;
                } else if (event == Event::Emergency) {
                    currentState = State::Red;
                }
                break;
        }
    }

    State getCurrentState() const {
        return currentState;
    }
};

