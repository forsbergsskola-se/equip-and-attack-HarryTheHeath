### UE5 Assignment: Equip & Attack

The character should be able to equip any weapon to his hand.
Depending on the weapon's properties (data asset) the character needs to be able to perform a specific attack animation.
Whatever they hit during that animation has to receive a damage event if implemented.

Stretch goal: Perform a series of attacks (combo) by clicking multiple times.



--------------------------------------------------------------------

Features I've implemented:

- Equip Weapons with animation
- Unique Sockets & PDAs for 7 different equippable weapons (including Shield on left arm)
- Several attack montages for several different weapoons
- Weapons deal damage on connection with other meshes, but only once per move
- Combo integration. If you spam attack it will break the current attack anim montage and trigger another one
- Jump attack (uninterruptable)
- Right-click to play an emote that can only be interrupted via an attack
- Hold shift to sprint while moving
- Animations are protected from restarting by clicking quickly
- Made platforming section
- Made unique materials
- Experimented with niagara particle effects


### YouTube - Overivew of Gameplay Features & Animations

[<img src="https://i.ytimg.com/vi/t7TUS1UpD0s/maxresdefault.jpg" width="100%">](https://youtu.be/t7TUS1UpD0s)

*note - Jump can't be used when attacking or emoting anymore. 
Jump attacks can still be triggered, but are also spam-protected*
