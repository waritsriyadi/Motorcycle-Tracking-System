Hello, this is my first project in GitHub. 
Hopefully this project will help you all to deploy similar project like me.

>> Motorcycle Tracking System << 

It's actually just a GPS Tracker for motorcycle.
I use GPS UBlox Neo-6M to receive Latitude and Longitude, then the data will be transfered to cloud website with GSM module, in this case I use ThinkSpeak and WebHost000.

You can see my done cloud project here:
https://motorcylealertsystem.000webhostapp.com/
https://thingspeak.com/channels/2374052

Things you need before doing this project:
1. Jumper Wires
2. GPS UBlox Neo-6M
3. SIM800L v2 GSM Module
4. Arduino Nano
5. Breadboard or PCB
6. Power Adapter 5V 2A or Battery. (Higher Ampere, better!)


>> Say HI!

Instagram  :  instagram.com/ryd.warits
Linkedin   :  linkedin.com/in/waritsriyadi/

⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡤⠤⠖⠒⠒⠒⠒⠒⠒⠉⠉⠉⠉⠒⠒⠒⠢⠤⡀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⠤⠊⠉⣀⣠⣤⣶⣶⣶⣶⣶⣶⣿⣿⣿⣿⣿⣶⣷⣶⣤⣤⣄⣀⡈⠁⠒⠠⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠔⠉⣀⣤⣶⣿⡿⠿⠻⠟⣛⠛⡍⠭⣉⠑⠢⡁⢆⠩⡉⠭⠙⡛⡛⠿⢿⣿⣷⣶⣤⡀⠉⠲⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡤⠊⢀⣤⣾⠟⡛⢍⠰⣀⠣⡁⠎⠤⡘⢠⡁⢆⠩⡐⢡⢂⠱⡈⢆⠱⢠⠑⡌⢢⠐⡍⠛⢿⣿⣷⣤⡀⠑⠢⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⠋⢀⣴⡟⢩⠐⡌⠰⡈⢆⠰⢠⠑⡌⢢⠑⠤⡘⢠⠃⡜⢠⠊⠤⡑⡈⢆⠡⢊⠤⡁⢎⡐⠩⠄⡌⠹⢿⣿⣦⡀⠘⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠎⠀⣴⡿⠃⡜⣀⠃⡌⢡⠐⡌⢢⠁⢎⡐⢡⠊⡔⢡⢂⠱⡈⢆⠩⡐⢡⠘⡄⢣⠁⢆⡑⢂⠌⡱⢈⠔⡡⢂⡙⢿⣿⣦⡀⠑⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡰⠁⢠⣾⠏⡅⠣⠐⡄⢊⠄⢣⠘⡠⠃⡜⢠⠘⡄⠣⠘⡄⢊⠔⡁⢎⡐⢡⠃⡘⢄⠃⡜⢠⠘⠌⣂⠱⢈⠢⡁⠆⠌⠤⡙⢿⣿⣆⠀⠣⡀⠀⠀⠀⠀⡠⠔⠒⠒⢤⡤⠤⠄⡀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⠁⣰⣿⢏⡘⠄⣃⠱⠈⢆⠚⢠⠃⡔⠣⠘⡄⠣⢌⠡⢃⠜⡠⠚⡐⢢⠘⢄⠣⠑⡌⠒⢌⠂⠍⡒⠤⠑⡌⠰⡁⠎⡘⡐⠌⡌⢻⣿⣷⡀⠸⢆⠀⠀⢸⢁⢠⣶⣦⣀⣨⣤⣄⠈⢢
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡸⠀⣰⣿⠏⡰⢀⠣⠄⠣⡉⠆⡉⠆⡱⢈⠒⡡⠌⡑⡈⢆⠡⢊⠔⠱⡈⢆⡉⠆⡡⢃⠌⡱⠈⡜⢠⢡⣼⠷⢿⣷⣾⣦⣕⡄⢣⠈⠤⠙⣿⣿⡄⠉⣆⠀⠸⡆⠘⣯⣟⣯⢿⣽⣻⠀⢸
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠁⢰⣿⡏⡘⢄⠃⢢⠉⢆⠱⡈⠔⡡⢂⠅⣊⣄⣣⣐⣡⣂⠱⣈⠢⢁⠒⡄⢢⠑⢢⠁⠎⡄⢣⠐⣵⠏⠥⣀⠤⢀⠉⠻⢿⣿⣦⣉⠆⡱⠘⣿⣿⡀⢸⡀⠀⠳⡀⠘⢿⣞⡿⡾⠃⢀⡎
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠇⠀⣿⣿⠰⣁⠊⠜⡠⢃⠌⠒⠌⣢⣵⣶⣾⣿⡿⠿⠿⠿⢿⣿⣶⣥⣊⠔⡈⠆⡉⢆⡉⠒⡌⠄⣿⢃⠋⡔⠰⡈⠦⣘⠠⠄⠙⢿⣿⣦⢁⢃⢻⣿⣇⠀⣳⠀⠀⠘⢦⡀⠛⠛⠁⡠⠋⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢼⠀⢸⣿⡇⢣⠠⡉⢆⠡⢂⢌⣵⣿⣿⠟⠛⡩⠔⣢⢐⠢⠔⡂⡌⠛⠿⣿⣷⣜⡠⢑⠢⡈⠥⡘⣼⠏⡌⣼⣴⣷⣾⣷⣶⣍⡢⢡⠀⠻⣿⣧⡘⡈⣿⣿⡄⢨⡀⣠⠀⢀⠉⠒⠒⠊⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⡏⡀⣿⣿⢡⢂⠱⡐⠌⡰⣡⣾⡿⠋⢀⡔⣉⠒⡩⠐⡌⣌⣥⣕⣨⣉⣆⠩⠻⣿⣷⣇⠢⢑⠰⢰⣿⣱⣾⣿⣿⣿⣿⣿⣿⣿⣿⣦⢓⠠⠹⣿⣧⠡⢼⣿⡇⠀⡏⠐⣤⡈⠋⠉⠲⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⢀⣿⣿⢂⠌⡂⢅⠊⣼⣿⠟⠀⣠⠋⡔⢡⢊⣴⣷⣿⣿⣿⣿⣿⣿⣿⣿⣦⣉⢿⣿⣧⢊⠔⣿⣷⣿⣿⣿⡿⢿⣿⣿⣿⣿⣿⣿⣷⡡⠂⢿⣿⡅⢺⣿⣿⠀⣷⠀⠹⣷⡿⠃⢠⡄⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠠⣿⣿⢈⢂⠱⡈⢼⣿⡟⠀⡜⢄⠣⣘⣶⣿⣿⡿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⢻⣿⣧⡘⣿⣿⣯⠀⠌⢁⢠⣿⣿⣿⣿⣿⣿⣿⣷⠀⢸⣿⡧⢩⣿⣿⠀⣇⠑⢄⣀⣀⠔⠃⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⡀⣿⣿⡐⢌⠢⠑⣾⡿⠀⡜⢌⠢⣱⡇⢀⠉⠋⠄⠠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⢻⣿⡾⣿⣿⣿⣷⣬⣤⣾⣿⣿⣿⣿⣿⣿⣿⣿⡆⢸⣿⡗⣰⣿⣿⠀⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣷⠀⢿⣿⡔⡈⢆⠡⣿⡇⠘⡰⢈⣶⣿⣿⣆⢈⠐⣈⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣤⣿⣿⣿⣿⣿⣿⣿⡇⣿⣿⠃⣼⣿⡇⠀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡄⠘⣿⣷⠈⡔⠂⢿⡇⠈⠰⢱⣿⣿⣿⣿⣿⣿⣿⣿⣏⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣿⡷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢿⣿⣿⣿⣯⢱⣿⡿⠀⢸⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢧⠀⢻⣿⡆⠰⡉⠼⣧⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⡗⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣾⣿⣿⡿⣂⣿⣿⠃⢀⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡄⠈⢿⣿⡅⣘⡰⢻⣆⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⡼⣩⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⡱⣽⣿⠇⠀⡞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⡄⠈⢿⣿⣔⠲⣍⠿⣧⣹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣅⣼⣿⣿⡿⢏⡼⣱⢱⡚⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣏⢶⣿⣻⠋⢀⠜⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢆⠈⢳⣿⣳⡎⡽⢹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⣏⡝⣎⠶⣡⢧⡙⢦⡛⠻⢿⣿⣿⣿⣿⣿⣟⠿⣜⣾⣟⡗⠁⣰⠊⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢢⡀⠙⣷⢿⣜⢣⡝⣞⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⢟⠋⠥⠙⢦⡚⣬⢓⡵⣊⠝⠢⠌⡑⢂⠒⣬⢫⠷⣌⢯⣿⢿⡽⠊⢀⠔⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠑⢤⠈⠻⣟⣷⣞⡭⣳⡞⣶⡻⣍⢿⣝⢯⡹⢥⢆⠩⢄⡉⢆⠩⡐⠤⢁⠊⠔⡠⢊⠑⡌⠰⡁⢎⠰⣋⣾⣿⣿⠟⠋⢀⠴⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠔⠊⢉⣉⣁⠀⠈⠙⠿⣿⣷⣾⣲⡹⣍⢧⢫⢖⡙⣎⠞⡡⢂⠜⣀⠣⠘⡄⠣⡘⠰⡁⢌⠒⡈⢅⣸⣴⣿⣿⠿⠋⠁⣠⡞⠁⠀⡠⠖⠊⠉⠉⠉⠑⠢⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣃⢠⡶⢏⡭⣙⠻⡶⣄⠀⠈⠙⠻⢿⣿⣾⣾⣼⣎⣱⡌⢢⠑⡌⠰⡀⠎⢡⣐⡡⣌⣡⣴⣼⣶⣿⣿⠿⠛⠋⣁⡠⠔⠉⠀⠀⡠⠊⢀⣤⢾⠻⣝⠻⢶⡄⠈⡆⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢏⠈⢻⣬⢳⣉⠷⡱⢻⣇⠀⢓⠤⢄⣀⠉⠙⠛⠿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⠿⠟⠛⠉⢁⣀⠤⠗⠊⠉⠀⠀⠀⠀⢰⠃⢠⡿⣙⢎⡳⢬⡛⣼⠃⢀⡗⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢇⠀⢻⡖⣭⠲⣍⠧⣿⠀⢹⠀⠀⠀⠉⠒⠆⠠⠄⠀⣄⣀⣀⣀⣀⣀⣀⣠⠠⠤⠤⠘⠚⠈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⣸⠷⣩⢎⡵⢣⣿⠃⢀⠎⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡆⠘⣿⡔⣫⠖⣡⢻⣆⠈⠙⠊⠉⠉⠈⠉⠉⠉⠉⠉⠉⠉⠒⠒⠒⠤⣀⣠⠤⠔⠒⠒⠒⠒⠊⠉⠁⠑⠒⠒⠒⠒⠚⠁⢀⣿⢣⡓⡮⢜⣱⡏⠀⡾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠎⢀⣴⠟⢦⣡⠩⣐⢂⠩⡙⢋⠛⡙⢋⠍⢫⠙⡙⣛⣙⢻⣛⠷⣶⣦⣄⠈⢀⣤⣴⡶⢶⡞⣛⣛⢛⢋⠛⠛⡛⢚⡒⢖⡚⢫⠁⢆⠰⡁⢆⠚⣧⡀⠙⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡞⠀⣾⡟⣈⠆⠤⡉⠔⡈⢆⡑⠌⣂⠱⣈⠘⡄⢣⠰⡱⢨⠖⣭⢚⡴⣩⢿⣷⣿⢏⢧⡙⢧⡚⣅⢚⢦⠘⡌⢡⠂⡅⠒⠤⡘⢠⢉⡐⢢⠁⢆⠩⠼⣿⡄⢘⡀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠀⢸⣿⠃⡔⡈⠆⢡⠊⠔⡂⢌⠒⠄⡃⢄⣃⣌⣄⣣⣑⣎⣹⢆⣏⢶⣱⡾⠋⢿⣎⠶⣙⢦⡹⠜⣊⠎⡑⣨⠄⡑⢌⠑⠢⢑⠢⠌⡰⠁⠎⡄⢃⠌⣿⣧⠀⢵⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⣽⣿⠒⠤⠑⡌⠢⢉⠆⡱⢈⠜⠢⢑⢂⠹⡙⡛⠿⣯⣍⠉⠉⡉⠉⢁⣀⠴⣀⠌⠙⠋⠛⠛⢛⣻⡿⠿⢛⠛⠣⢌⢊⠱⡈⢆⠱⡀⠏⡰⢈⠆⡘⢼⣿⠀⢸⡄⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡀⢹⣿⣎⠰⡁⢆⠡⢃⠜⢠⠃⡜⠰⡁⠎⡰⢠⠑⡂⠌⢿⣇⠀⡏⠉⠉⠀⠀⠀⠉⠉⢹⠃⢠⣿⢋⠰⡁⠎⢨⠑⠢⠌⢢⠑⠌⢢⠑⡌⠰⣁⠘⢄⣿⣿⠀⣸⠁⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢣⠀⠻⣿⣧⡘⠄⠣⠌⡘⢄⠊⡔⢡⠘⠤⡑⢂⠆⡱⠘⣼⡟⠀⡏⠀⠀⠀⠀⠀⠀⠀⢸⡀⢸⣿⠌⡰⢠⠉⠆⡌⠱⡈⠆⡜⡈⢆⡘⠄⠣⢄⣩⣾⡿⠃⢀⠟⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠑⢄⡈⠻⣿⣮⡁⢎⠰⡈⢒⡈⠆⣉⠒⡄⢃⠒⢄⢣⣿⠃⢐⠇⠀⠀⠀⠀⠀⠀⠀⠀⣇⠀⢿⣧⠐⡡⠊⡔⢨⠑⡌⠒⠤⠑⡠⠒⢌⣡⣾⡿⠋⢀⡔⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠣⡄⠘⠻⣿⣷⣦⣑⡢⢐⠡⢂⠜⡀⠎⢌⣢⣿⠋⢀⡾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⡄⠘⢿⣦⣁⠣⠄⡃⠔⡨⢁⠎⣁⣦⣽⣾⡿⠟⠁⡠⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠑⢄⡈⠙⠻⢿⣿⣷⣾⣶⣶⣷⠾⠟⠋⠁⡠⠎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠢⡀⠙⠻⢷⣶⣧⣼⣤⣷⣾⣿⠿⠟⠉⢀⡤⠊⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠑⠢⢤⣀⣉⣁⣠⡀⠠⠴⠴⠚⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠒⠤⠤⣀⣀⣉⠉⠉⠉⣀⡠⠴⠚⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
