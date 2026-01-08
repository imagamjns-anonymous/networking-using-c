#include<stdio.h>
int main(){
    int choice;
    
    printf("1 : What is Networking\n");
    printf("2 : Types of Networks\n");
    printf("3 : What is TCP/IP\n");
    printf("4 : Types of communication\n");
    printf("5 : Network Topology\n");
    printf("6 : What is Transmission Mode\n");
    printf("7 : Type of Transmission Mode\n");
    printf("8 :Type of Network Connection\n");

    
    
    printf("Enter the choice\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Networking is the process of connecting two or more devices , system so that they can communicate and share the resources like files , application , etc\n");
        break;
    case 2:
        printf("There are mainly 5 types\n");
        printf("PAN(Personal Area Network) : Network is of small range usually few metres around person\n");
        printf("LAN(Local Area Network) : Cover usually small geogprahical area such as building , office , school , etc\n");
        printf("Ethernet and Wifi : Ethernet transfer fast speed data using wired connection and WIFI(Wireless Fidelity) give transfer data wireless\n");
        printf("MAN(Metropolitian Area Network) : Cover large geographical area like campus or city\n");
        printf("WAN : Cover large area like country , continent and it connect smaller network together\n");
        break;
    case 3:
        printf("The fundamental suite of communication protocols that governs how data is sent and received across the internet and other networks, breaking data into packets, addressing them, routing them through various layers\n");
        break;
    case 4:
        printf("Mainly two types\n");
        printf("Wired communication : contain cables\n");
        printf("Coaxial cable , Twisted pair cable , Fibre optic cable\n");
        printf("Wireless communication\n");
        printf("Uses EM Wave to send data wireless\n");
        break;
    case 5:
        printf("Arrangement of Nodes and connection in computer network\n");
        printf("Types : Bus , Star , Ring , Mesh , Tree , Hybrid\n");
        break;
    case 6:
        printf("Direction of data flow , show how data travel between two devices\n");
        break;
    case 7:
        printf("3 Types : Simplex Duplex, Half - Duplex , Full - Duplex\n");
        printf("Simplex : Data flow from sender from Receiver but never from Receiver to Sender\n");
        printf("Half - Duplex : Data flow is bidirectional but device cannot send and receive data simultaneously\n");
        printf("Full - Duplex : Data flow is bidirectional and can be send simultaneously\n");
        break;
    case 8:
        printf("Connectors used to connect network cables to devices\n");
        printf("Types : RJ - 45 , Standard/Subcriber Connector , Lucent Connector\n");
        printf("RJ - 45 : Used with Ethernet (LAN cable)\n"
                "Cable type: Twisted Pair (Cat5, Cat6)\n");
        printf("SC Connector : Used with Fiber Optic cable\n"
                "Shape: Square\n"
                "Push - pull type\n"
                "Long distance communication\n");
        printf("LC Connector : Smaller than SC\n"
                "Used in modern networks\n"
                "High-speed networking\n");
        printf("ST Connector : Fiber Optic connector\n"
                "Twist and lock type\n"
                "Legacy fiber networks\n"
                "Older technology\n");
        break;

    default:
    printf("Invalid Choice\n");
        break;
    }
 

return 0;
}
