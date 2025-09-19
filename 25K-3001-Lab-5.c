#include <stdio.h>
	int main(){
		
		int device,symptom;
		printf("Enter Your Device Type(Laptop=1,Smartphone=2,Router=3):");
		scanf("%d",&device);
		switch(device){
			case 1: //laptop
			printf("\nPlease Enter symptom(10,11,12):");
			scanf("%d",&symptom);
			switch(symptom){
				case 10:
					printf("\n Advice:Check power adapter and Try resetting battery.");
					break;
					case 11:
					printf("\n Advice:Clean fans and ensure proper ventilation.");
					break;
					case 12:
					printf("\n Advice:Run system diagnostics and resource usage. Scan for malware.");
					break;
					default:
						printf("\n Invalid symptom code for laptop.");
			}
			break;
			
			case 2://Smartphone
				printf("\nPlease Enter symptom(20,21,22):");
			scanf("%d",&symptom);
			switch(symptom){
				case 20:
					printf("\n Advice:Run battery calibration tool and check for background apps.");
					break;
					case 21:
					printf("\n Advice:Check SIM card and network settings.");
					break;
					case 22:
					printf("\n Advice:Perform screen calibration test.");
					break;
					default:
						printf("\n Invalid symptom code for smartphone.");
					
			}
			break;
			
			case 3: //Router
			printf("\nPlease Enter symptom(30,31,32):");
			scanf("%d",&symptom);
			switch(symptom){
				case 30:
					printf("\n Advice:Check ISP status and router cables.");
					break;
					case 31:
					printf("\n Reposition router and check antenna connection.");
					break;
					case 32:
					printf("\n Advice:Check MAC filtering and DHCP setting.");
					break;
					default:
						printf("\n Invalid symptom code for router.");
			
			
		}
		break;
		
		default:
			printf("\nInvalid Device Code.");
		
	
	}
		return 0;
	}
