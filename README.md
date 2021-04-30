# Embedded C Programming Project with Continuous Integration and Code Quality

## Passenger Heat Controller

### Outputs based on Passenger Occupancy & Heater status 

|Passenger not occupied seat|Passenger occupied seat & not switched on heater|
|:--:|:--:|
|![1](simulation/1.png)|![2](simulation/2.png)|

### Outputs based on Heater(ON state) Temperature status after Passenger occupied the seat

|At 20°C (20% Dutycycle)|At 25°C (40% Dutycycle)|At 29°C (70% Dutycycle)|At 33°C (95% Dutycycle)|
|:--:|:--:|:--:|:--:|
|![20](simulation/20.png)|![25](simulation/25.png)|![29](simulation/29.png)|![33](simulation/33.png)|

### CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/256231/Emb-C/actions/workflows/Compile.yml/badge.svg)](https://github.com/256231/Emb-C/actions/workflows/Compile.yml)|[![Cppcheck](https://github.com/256231/Emb-C/actions/workflows/CodeQulaity.yml/badge.svg)](https://github.com/256231/Emb-C/actions/workflows/CodeQulaity.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/1b3b3b40a1ce4572b387f4c5168101b9)](https://www.codacy.com/gh/256231/Emb-C/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=256231/Emb-C&amp;utm_campaign=Badge_Grade)|