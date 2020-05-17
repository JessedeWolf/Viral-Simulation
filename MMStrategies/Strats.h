#pragma once
#include "MovementStrategy.h"

namespace corsim
{
    class RegularMovementStrat: public MovementStrategy
    {
        public:
        int move(int dt, std::vector<Subject> &subjects, int week);
    };

    class LockdownMovementStrat: public MovementStrategy
    {
        public:
        int move(int dt, std::vector<Subject> &subjects, int week);
        private:
        bool run;
    };

    class SlowMovementStrat: public MovementStrategy
    {
        public:
        int move(int dt, std::vector<Subject> &subjects, int week);
        private:
        bool run;
    };
}