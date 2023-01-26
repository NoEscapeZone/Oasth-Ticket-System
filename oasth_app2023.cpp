#include <stdio.h>
#include <stdlib.h>
#include <math.h>





main()
{
	
	printf("\t\t\t\t\t ---> OASTH TICKET APPLICATION <--- \t\t\t\t\t\t\n\n\n"); // application tittle
	
int option;	
int language;
do{

	
	printf("Select Language: \n");
	printf("1 = GR\n2 = EN\n");
	scanf("%d", &language);
	
	
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
			
	
		


	
	if(language==1) // GR language
	{
		printf("Language Selected: GR\n");
		printf("Dialekse Eisitirio: (1-10) \n");
		printf("1) Kanoniko Eisitirio mias metakinisis - 0.90\n2) Kanoniko Eisitirio diplis metakinisis - 1.10\n3) Kanoniko Eisitirio triplis metakinisis - 1.30\n4) Kanoniko Eisitirio tetraplis metakinisis - 1.80\n5) Kanoniko Eidiko Eisitirio - 1.80\n");
		printf("6) Meiomeno Eisitirio mias metakinisis - 0.45\n7) Meiomeno Eisitirio diplis metakinisis - 0.55\n8) Meiomeno Eisitirio triplis metakinisis - 0.70\n9) Meiomeno Eisitirio tetraplis metakinisis - 0.90\n10) Meiomeno Eidiko Eisitirio - 0.90\n");
		printf("-> ");
		scanf("%d", &option);
		if(option==1){
			printf("---> Dialekses kanoniko eisitirio mias metakinisis (0.90)\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - kanoniko1;
			printf("Ypolipo: %lf\n", resta);
			}
		else if(option==2)
			{
			printf("---> Dialekses kanoniko eisitirio diplis metakinisis (1.10)\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - kanoniko2;
			printf("Ypolipo: %lf\n" , resta);
			}
		else if(option==3)
			{
			printf("---> Dialekses kanoniko eisitirio triplis metakinisis (1.30)\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - kanoniko3;
			printf("Ypolipo: %lf\n" , resta);
			}
		else if(option==4)
			{
			printf("---> Dialekses kanoniko eisitirio tetraplis metakinisis (1.80)\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - kanoniko4;
			printf("Ypolipo: %lf\n" , resta);
			}
		else if(option==5)
			{
			printf("---> Dialekses kanoniko - eidiko eisitirio (1.80)\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - kanoniko_eidiko;
			printf("Ypolipo: %lf\n" , resta);
			}
		else if(option==6)
			{
			printf("---> Dialekses meiomeno eisitirio mias metakinisis (0.45)\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - meiomeno1;
			printf("Ypolipo: %lf\n" , resta);
			}
		else if(option==7)
			{
			printf("---> Dialekses meiomeno eisitirio diplis metakinisis (0.55)\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - meiomeno2;
			printf("Ypolipo: %lf\n" , resta);
			}
		else if(option==8)
			{
			printf("---> Dialekses meiomeno eisitirio triplis metakinisis (0.70)\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - meiomeno3;
			printf("Ypolipo: %lf\n" , resta);
			}
		else if(option==9)
			{
			printf("---> Dialekses meiomeno eisitirio tetraplis metakinisis (0.90)\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - meiomeno4;
			printf("Ypolipo: %lf\n" , resta);
			}
		else if(option==10)
			{
			printf("---> Dialekses meiomeno - eidiko eisitirio\n (0.90)\n");
			printf("Eisagete antitimo: ");
			scanf("%lf", &input);
			resta=input - meiomeno_eidiko;
			printf("Ypolipo: %lf\n" , resta);
			}
			
	}
		
			
		
	else if(language==2) // EN language
	{
		printf("Language Selected : EN\n");
		printf("Select Ticket: (1-10) \n");
		printf("1) Basic Ticket 1 movement - 0.90\n2) Basic Ticket 2 movements - 1.10\n3) Basic Ticket 3 movements - 1.30\n4) Basic Ticket 4 movements - 1.80\n5) Basic Special Ticket - 1.80\n");
		printf("6) Recuded Ticket 1 movement - 0.45\n7) Recuded Ticket 2 movements - 0.55\n8) Recuded Ticket 3 movements - 0.70\n9) Recuded Ticket 4 movements - 0.90\n10) Recuded Special Ticket - 0.90\n");
		printf("-> ");
		scanf("%d", &option);
		if(option==1){
			printf("---> You Selected Basic Ticket 1 Movement (0.90)\n");
			printf("Insert Price: ");
			scanf("%lf", &input);
			resta=input - kanoniko1;
			printf("Changes: %lf\n", resta);
			}
		else if(option==2)
			{
			printf("---> You Selected Basic Ticket 2 Movements (1.10)\n");
			printf("Insert Price: ");
			scanf("%lf", &input);
			resta=input - kanoniko2;
			printf("Changes: %lf\n" , resta);
			}
		else if(option==3)
			{
			printf("---> You Selected Basic Ticket 3 Movements (1.30)\n");
			printf("Insert Price: ");
			scanf("%lf", &input);
			resta=input - kanoniko3;
			printf("Changes: %lf\n" , resta);
			}
		else if(option==4)
			{
			printf("---> You Selected Basic Ticket 4 Movements (1.80)\n");
			printf("Insert Price: ");
			scanf("%lf", &input);
			resta=input - kanoniko4;
			printf("Changes: %lf\n" , resta);
			}
		else if(option==5)
			{
			printf("---> You Selected Basic Special Ticket (1.80)\n");
			printf("Insert Price: ");
			scanf("%lf", &input);
			resta=input - kanoniko_eidiko;
			printf("Changes: %lf\n" , resta);
			}
		else if(option==6)
			{
			printf("---> You Selected Recuded Ticket 1 Movement (0.45)\n");
			printf("Insert Price: ");
			scanf("%lf", &input);
			resta=input - meiomeno1;
			printf("Changes: %lf\n" , resta);
			}
		else if(option==7)
			{
			printf("---> You Selected Recuded Ticket 2 Movements (0.55)\n");
			printf("Insert Price: ");
			scanf("%lf", &input);
			resta=input - meiomeno2;
			printf("Changes: %lf\n" , resta);
			}
		else if(option==8)
			{
			printf("---> You Selected Recuded Ticket 3 Movements (0.70)\n");
			printf("Insert Price: ");
			scanf("%lf", &input);
			resta=input - meiomeno3;
			printf("Changes: %lf\n" , resta);
			}
		else if(option==9)
			{
			printf("---> You Selected Recuded Ticket 4 Movements (0.90)\n");
			printf("Insert Price: ");
			scanf("%lf", &input);
			resta=input - meiomeno4;
			printf("Changes: %lf\n" , resta);
			}
		else if(option==10)
			{
			printf("---> You Selected Recuded Special Ticket (0.90)\n");
			printf("Insert Price: ");
			scanf("%lf", &input);
			resta=input - meiomeno_eidiko;
			printf("Changes: %lf\n" , resta);
			}
		
		
		
	}
	else
		printf("Wrong option, try again!\n");
		
}
while(language < 1 || language > 2 ); 	// 	Valid option: 1 or 2
	
	
system("Pause");

}




