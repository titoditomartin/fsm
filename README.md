# FSM of a Microwave

Finite state machine (FSM) is a term used by programmers, mathematicians, engineers and other professionals to describe a mathematical model for any system that has a limited number of conditional states of being. A finite state machine for a microwave would have a limited number of states that represent the different actions and modes of the device, and the transitions between those states would be triggered by specific inputs or events.

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
![WhatsApp Image 2023-01-22 at 22 47 39](https://user-images.githubusercontent.com/114073725/213926847-76edb368-3e42-40f3-babf-c3b3875af720.jpeg)





## Truth Table
![WhatsApp Image 2023-01-22 at 23 11 36](https://user-images.githubusercontent.com/114073725/213926849-f0642e24-0fcf-40de-a538-60a2f1f22b13.jpeg)




## Karnaugh map
![s0](https://user-images.githubusercontent.com/114073725/213926876-752c1b60-e139-4ac3-851c-7bfdd0d1a1a6.png)
![s0 kmap](https://user-images.githubusercontent.com/114073725/213926879-465b7013-1a71-4268-bbc2-67fd2be5ccbc.png)

![s1](https://user-images.githubusercontent.com/114073725/213926892-55b8af9b-0644-4c79-8ae0-84255506166c.png)
![s1 kmap](https://user-images.githubusercontent.com/114073725/213926902-e1cb4285-47c0-4558-b616-c31654553138.png)

![output](https://user-images.githubusercontent.com/114073725/213926913-43133564-77f8-4e70-9679-83c69b359313.png)
![output kmap](https://user-images.githubusercontent.com/114073725/213926918-a6dc5212-863a-490a-b4e8-5a0cb58beb54.png)





