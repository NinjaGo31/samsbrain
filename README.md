# Sam's Brain
Sam's Brain is a code that takes two pairs of coordinates along with their horizontal angles, in Minecraft, and uses trigonometric equations to estimate the exact position of a stronghold. The following equations are used to track the estimated coordinates of x and z in the Overworld:

$$
\mathrm{x} = \frac{z_1 - z_2 + \cot(\theta_1)x_1 - \cot(\theta_2)x_2}{\cot(\theta_1) - \cot(\theta_2)}
$$

$$
\mathrm{z} = -\cot(\theta_1) * (x - x_1) + z_1
$$

## Where To Find Your Data
If you open F3, you will see on the left side of the screen is a set of coordiantes in (x, y, z) format. Three lines below are the angles, both horizontal and vertical respectively, in which the player is facing. Enter the coordinates in the program.\
![image](https://user-images.githubusercontent.com/56609280/172193493-dbdcad2d-ca8c-491d-9732-e9232be5a965.png)

Throw an Eye of Ender and track the exact center in which the eye is only moving vertically. Write down the position of x and z and the horizontal angle. Enter the coordinates in the program.\
![image](https://user-images.githubusercontent.com/56609280/172195195-6e55bbcb-f5ea-40ca-980d-cf06610d12c8.png)

Move to a spot either left or right of where your first threw an eye to where there is no interference. Throw another Eye of Ender.\
![image](https://user-images.githubusercontent.com/56609280/172196087-ac2ac2a4-c17c-406e-9ac6-42edcd6124dc.png)

Once the estimated coordinates are given, travel to those coordinates and throw another eye. If you are in creative mode, use the command /locate #minecraft:stronghold to see how close you are to the nearest stronghold.\
![image](https://user-images.githubusercontent.com/56609280/172198715-144b11af-dd8a-4117-8005-5d51fa3849b2.png)
![image](https://user-images.githubusercontent.com/56609280/172198752-d4a2711b-5c26-450c-b957-b6d2518525d5.png)

## Credits and Warning
The equations above were created by samkomododragon on Discord. I was given permission to code these equations in C++ and run them in a Linux terminal. Please remember that the coordinates calculated are not 100% exact, but majority of tests have shown the distance between the estimated position and the exact position of the stronghold is very low.

## Questions
Q: What if I want to run just the binary file?\
A: If you are going to run the binary executable, it is best to use a Ubuntu terminal. You can use either your virtual machine (VM) or use Ubuntu for Windows by downloading it in the Microsoft Store (it's free).


Q: Will this work in Visual Studio or any other application that uses a built-in debugger?\
A: Yes. Originally, the M_PI macro was originally used to resemble pi. However, because Windows does not recognize this macro, the error checker marks M_PI as undefined. Now, pi is calculated using (2 * acos(0.0)), which still provides the correct calculations as before.
