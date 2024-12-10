CPTS_122_PA9, December, 2024
#   *Flight Data Playback Simulator 5000<sup>©</sup>*

| Name | Lab Section |
| ----------- | ----------- |
| Charles Ludwig | #8 |
| Mitchell Milander | #4 |
<br>

|Program Description| Code We Wrote |
| ------------------| ---------- |
|  The *Flight Data Playback Simulator 5000<sup>©</sup>* is a brand new, high powered rocketry simulation **built by engineers, for engineers!** | The C++ code we wrote can be found in: Source/CPTS_122_PA9. Additional code we wrote can be found in the Unreal project blueprints (this requires opening the Unreal editor). Everything else in the repository is either a Visual Studio project file or an Unreal Engine dependency.|
<br>

|Program Setup | 
| ------------------| 
| Since we chose to use Unreal Engine for this project, looking at the project files and the whole project is an involved process. That being said, there are two options: <br>&nbsp;&nbsp;&nbsp;&nbsp; (1) Download Zip [here](https://emailwsu-my.sharepoint.com/:u:/g/personal/charles_ludwig_wsu_edu/EWtZpxr7m5VBu8qj2ujPDQQBiJ8AqJeCOStjC7akV-5XZg?e=iRdTbX) (The download button is in the top left) <br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; -Extract files and run game. <br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;-Run executable file "CPTS_122_PA9.exe" <br>&nbsp;&nbsp;&nbsp;&nbsp;(2) Open full project - This is admittedly an involved process to do, I will outline steps here but reach out to Charles.Ludwig@wsu.edu if you want more detailed instructions or you run into issues<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;-Install Unreal Engine Version 5.4.4 from Epic Games. The easiest way to do this is though the Epic Games Launcher<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;-Install the Visual Studio C++ Integration tool, a link is [here](https://www.fab.com/listings/8a639215-7f85-4cc7-b155-fa2137326209). <br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; -[Install Visual Studio Tools for Unreal Engine](https://learn.microsoft.com/en-us/visualstudio/gamedev/unreal/get-started/vs-tools-unreal-install) <br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;-Clone the repository and open the .uproject file <br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;-To open in VisualStudio go to Tools->Open in VisualStudio<br><br>Update 12.9:<br>I found a more consistent way to open the project files, the rest of the steps are the same but instead of cloning the repository, download [THIS](https://emailwsu-my.sharepoint.com/:u:/g/personal/charles_ludwig_wsu_edu/EVoblDj3wipMmuVi7LtpMXwB_gtYf_wK_cHGEHlW1zP8iA?e=ekZ1x8) .zip file and extract it, the zip is a clean project with the dependencies and assets (this ZIP also contains the code we wrote located CPTS_122_PA9.zip\Source\CPTS_122_PA9)<br>Once you have the file extracted open the .uproject, it will prompt you to build some files.<br>Once this is done, to open in visual studio go to tools->generate Visual Studio Project, once the project is generated you can then click "open in VisualStudio" in that same tools tab.<br>The code we wrote can be found in Games->CPTS_122_PA9->Source->CPTS_122_PA9 everything except the .cs file we wrote![image](https://github.com/user-attachments/assets/1e7387eb-09bf-4bf3-ba66-dbfc3773823b) <br>Let me know if you have any other questions!|

| Design Decision | 
| ------------------| 
| While the Unreal Engine itself uses inheritance and polymorphism the code we wrote for the project does not use it, we do inherit from classes base proivded by the engine howver. Because our final implementation required only one rocket object to simulate Palouse Aerospace Club's rocket flights, there was no apparent need for polymorphism. |

<br>

| Features | Details |
| ----------- | ----------- |
|  *Start* | Allows user to begin simulation without automatic initiation.|
| *Pause* | Allows user to temporarily halt program runtime. |
|  *Data-point retrieval* | Allows user to analyze precise points of data.|
| *Time Dilation* | Allows user to slow down or speed up simulation in real time.| 
| *Cameras* | Allows user to track rocket mid-air flight. |
| Early Stages: Program in Action| ![Early Stages: Program in Action](https://github.com/user-attachments/assets/a252b76d-af58-4506-815f-79f09ee551b0)|
| Final Product: | ![pic](https://github.com/user-attachments/assets/4941ec4e-2439-49b3-b928-e79ce2593cd7) |
| YouTube Demo Video: | https://youtu.be/cEyuoJqQI1I |
