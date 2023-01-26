#include <stdio.h>
#include <stdlib.h>




main()
{
	
	int option;
	printf("Select Language: \n");
	printf("1 = GR\n2 = EN\n");
	scanf("%d", &option);
	
	
		//tickets - kanonika
			double kanoniko1 = 0.90;
			double kanoniko2 = 1.10;
			double kanoniko3 = 1.30;
			double kanoniko4 = 1.80;
			double kanoniko_eidiko = 1.80;
		
		//tickets - meiomena
			double meiomeno1 = 0.45;
			double meiomeno2 = 0.55;
			double meiomeno3 = 0.70;
			double meiomeno4 = 0.90;
			double meiomeno_eidiko = 0.90;
		
			
			double selection, resta,input;
			
	
		

	
	if(option==1) // GR language
	{
		printf("Language Selected: GR\n");
		printf("Dialekse Eisitirio: \n");
		printf("1) Kanoniko Eisitirio mias metakinisis - 0.90\n2) Kanoniko Eisitirio diplis metakinisis - 1.10\n3) Kanoniko Eisitirio triplis metakinisis - 1.30\n4) Kanoniko Eisitirio tetraplis metakinisis - 1.80\n5) Kanoniko Eidiko Eisitirio - 1.80\n");
		printf("6) Meiomeno Eisitirio mias metakinisis - 0.45\n7) Meiomeno Eisitirio diplis metakinisis - 0.55\n8) Meiomeno Eisitirio triplis metakinisis - 0.70\n9) Meiomeno Eisitirio tetraplis metakinisis - 0.90\n10) Meiomeno Eidiko Eisitirio - 0.90\n");
		printf("-> ");
		scanf("%d", &option);
		if(option==1){
			printf("---> Dialekses kanoniko eisitirio mias metakinisis\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - kanoniko1;
			printf("Ypolipo: %lf\n", resta);
			}
		else if(option==2)
			{
			printf("---> Dialekses kanoniko eisitirio diplis metakinisis\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - kanoniko2;
			printf("Ypolipo: %lf\n" , resta);
			}
		else if(option==3)
			{
			printf("---> Dialekses kanoniko eisitirio triplis metakinisis\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - kanoniko3;
			printf("Ypolipo: %lf\n" , resta);
			}
		else if(option==4)
			{
			printf("---> Dialekses kanoniko eisitirio tetraplis metakinisis\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - kanoniko4;
			printf("Ypolipo: %lf\n" , resta);
			}
		else if(option==5)
			{
			printf("---> Dialekses kanoniko - eidiko eisitirio\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - kanoniko_eidiko;
			printf("Ypolipo: %lf\n" , resta);
			}
		else if(option==6)
			{
			printf("---> Dialekses meiomeno eisitirio mias metakinisis\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - meiomeno1;
			printf("Ypolipo: %lf\n" , resta);
			}
		else if(option==7)
			{
			printf("---> Dialekses meiomeno eisitirio diplis metakinisis\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - meiomeno2;
			printf("Ypolipo: %lf\n" , resta);
			}
		else if(option==8)
			{
			printf("---> Dialekses meiomeno eisitirio triplis metakinisis\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - meiomeno3;
			printf("Ypolipo: %lf\n" , resta);
			}
		else if(option==9)
			{
			printf("---> Dialekses meiomeno eisitirio tetraplis metakinisis\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - meiomeno4;
			printf("Ypolipo: %lf\n" , resta);
			}
		else if(option==10)
			{
			printf("---> Dialekses meiomeno - eidiko eisitirio\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - meiomeno_eidiko;
			printf("Ypolipo: %lf\n" , resta);
			}
			
	}
		
			
		
	else if(option==2) // EN language
	{
		printf("Language Selected : EN\n");
		printf("Select Ticket: \n");
	}
	else
		printf("Wrong option, try again!\n");
	
	
system("Pause");
}

