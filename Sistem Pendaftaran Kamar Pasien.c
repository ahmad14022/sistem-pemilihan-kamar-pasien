#include <stdio.h>

int main()
{
	printf("<<<<< SELAMAT DATANG DI RS.DARURAT COVID-19 >>>>>\n");
	printf("\n");
	
    int variable1;
    printf("Masukkan kapasitas rawat inap Rumah Sakit : \n");
    scanf("%d", &variable1);
 
    int patientroom1[variable1];
    int patientroom2[variable1];
    
    int variable2 = 0;
    for(; variable2 <= variable1; variable2++)
	{
        patientroom1[variable2] = variable2;
        patientroom2[variable2] = 0;
    }
 
    do
    {
        printf("\n");
    	printf("Silakan pilih menu berikut :\n");
    
    	int choice;
		printf("1.Untuk mendaftarkan pasien rawat inap baru\n");
		printf("2.Untuk check-out pasien sembuh\n");
		printf("3.Untuk daftar kamar yang kosong\n");
		printf("4.Untuk daftar kamar yang terisi\n");
		printf("5.Keluar\n");
		printf("\n");
		
		printf("Pilihan Anda : ");
		scanf("%d",&choice);
		
		int variable3;
		int variable4;
        
		switch(choice)
		{
            case 1:
                printf("Kamar yang Anda inginkan : ");
                scanf("%d",&variable4);
                    if(patientroom1[variable4] == 0)
					{
                        printf("Kamar sudah terisi\n");
                    }
                    else if(patientroom1[variable4] != 0)
					{
						patientroom2[variable4] = patientroom1[variable4];
                    	patientroom1[variable4] = 0;
                    }
                break;
            
            case 2:	
                printf("Masukkan kamar yang akan check-out : ");
                scanf("%d",&variable3);
					if(patientroom2[variable3] == 0)
					{
                    	printf("Pasien tidak ada\n");
                	}
                	if(patientroom2[variable3] != 0)
					{
                    	printf("Alhamdulillah pasien sudah sembuh\n");
                    	patientroom1[variable3] = variable3;
                    	patientroom2[variable3] = 0;
                	}		
                break;
            
            case 3:	
            	printf("Berikut adalah kamar yang kosong : \n");
				for(variable2 = 1; variable2 <= variable1; variable2++)
                {	
					if(patientroom1[variable2] != 0)
                	{
                    	printf("%d, ", patientroom1[variable2]);
                	}
                }
                printf("\n\n");
                break;
            
            case 4:
                printf("Berikut kamar yang sudah terisi : \n");
				for(variable2 = 0; variable2 <= variable1; variable2++)
                {
                    if(patientroom2[variable2] != 0)
                    {
                        printf("%d, ", patientroom2[variable2]);
                    } 
                }
                printf("\n");
                break;        
    	}
        if(choice == 5)
		{
        	printf("Terima kasih telah menggunakan layanan kami\n");
        	printf("Tetap terapkan protokol kesehatan\n");
            break;
        }
        
    }while(1);  
    
}
