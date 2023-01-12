# FSM of a Music Player

Finite state machine (FSM) is a term used by programmers, mathematicians, engineers and other professionals to describe a mathematical model for any system that has a limited number of conditional states of being. A music player could be executed by using inputs to change the states of the music player itself.

## States

1.  **Standby**: Music player is standby, waiting for an action
2.  **Playing Music**: Music player is playing a song
3.  **Pause Music**: Music player is pausing the music

-   **Standby**: `00`
-   **Playing Music**: `01`
-   **Pause Music**: `10`

## Inputs
the music player fsm accepts two 1-bit inputs:

**0** : PLAY/PAUSE

**1** : SKIP

## State diagram

![State-Diagram](https://user-images.githubusercontent.com/114073725/211994815-36cc275e-0ff2-4994-9f90-9d4efdb0a030.jpeg)



## Truth Table

![Truth-Table](https://user-images.githubusercontent.com/114073725/211994957-4457258b-27a7-44c6-9dd6-446986c4a76b.jpeg)


## Karnaugh map

![K-Map-1](https://user-images.githubusercontent.com/114073725/211994978-5638327f-142e-462d-ba06-4eebb6afb28c.jpeg)

![K-Map-2](https://user-images.githubusercontent.com/114073725/211994984-cc705ca0-dc8d-4d92-9b3b-f9b39b5acd7d.jpeg)





